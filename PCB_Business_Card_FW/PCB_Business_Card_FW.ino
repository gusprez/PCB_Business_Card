boolean toggle1 = 1;
const uint8_t led_pin_array[] = {5, 6, 7, 8, 9, 10, 11, 12}; // Array con pines de led indicadores de intervalos de 5min
const uint8_t select_button_pin = 2;

void ISR_button_pin() {
    if ( toggle1 ) {
        digitalWrite( 12, HIGH );
        toggle1 = 0;
    }
    else {
        digitalWrite( 12, LOW );
        toggle1 = 1;
    }
}

void setup() {
    pinMode( select_button_pin, INPUT_PULLUP );
    attachInterrupt( digitalPinToInterrupt( select_button_pin ), ISR_button_pin, FALLING );

    for ( uint8_t ii = 0; ii < sizeof( led_pin_array ); ++ii ) {
        pinMode( led_pin_array[ii], OUTPUT );
    }

}

void loop() {
    for ( uint8_t ii = 0; ii < sizeof( led_pin_array ); ++ii ) {
        digitalWrite( led_pin_array[ii], HIGH );
        delay(500);
    }
    for ( uint8_t ii = 0; ii < sizeof( led_pin_array ); ++ii ) {
        digitalWrite( led_pin_array[ii], LOW );
        delay(500);
    }
}