# PCB_Business_Card
Diseño de una PCB de tamaño de una tarjeta de crédito XXxXXmm cómo tarjeta de presentación. Además cuenta con la funcionalidad de timer de pomodoros de 30 minutos con descansos de 5 [Técnica Pomodoro](https://es.wikipedia.org/wiki/T%C3%A9cnica_Pomodoro).
## Requisitos iniciales
Cómo primera versión de este proyecto los bloques que lo conforman son:
1. Microcontrolador de 8 bits con suficientes entradas/salidas (ATMEGA 328P o 328PB)
2. 6 leds indicadores del tiempo transcurrido en intervalos de 5 minutos cada uno
3. Leds indicadores del modo del pomodoro actual trabajo o descanso (uno por cada modo)
4. Botón de selección
5. Botón de reset
6. Conector o pads para la programación del uC por ICSP

## Funcionamiento del sistema
1. Inicio
2. Parpadear leds de tiempo hasta arrancar el timer pulsando el botón de selección
3. Iniciar el timer de 30 minutos y encender led de WORK
4. Parpadear led del intervalo actual, una vez complentado ese intervalo dejarlo fijo y parpadear el siguiente
5. Al finalizar los 30 min del pomodoro mostrar animación encendiendo todos los leds de manera ascendente
6. Encender led de BREAK y apagar el de WORK
7. Esperar los 5 minutos del descansor
8. Volver a 3