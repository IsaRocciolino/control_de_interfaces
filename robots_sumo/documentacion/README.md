Carpeta designada para la documentación de robot -jarvis-

Investigacion PWM y Puente H: 

Puente H: Un puente H es un circuito electrónico que permite la rotación bidireccional de motores de CC en ambos sentidos simplemente cambiando el voltaje aplicado a través de los terminales del motor para proporcionar control de velocidad del motor hacia adelante y hacia atrás. 

¿Qué es un circuito puente H?
Los motores de corriente continua (CC) son dispositivos de alta potencia que se utilizan en diversas aplicaciones y proyectos, por lo que no sorprende que se requiera un circuito especial para su control. Un circuito en puente H es una configuración sencilla para controlar motores de CC que permite regular tanto la velocidad como la dirección de rotación mediante una tensión continua fija o mediante modulación por ancho de pulso (PWM).
Un puente H se construye con 4 interruptores (mécanicos o mediante transistores). Cuandos los interruptores S1 y S4 están cerrados ( S2 y S3 abiertos ) se aplica una tensión haciendo girar el motor en un sentido. Abriendo los interruptores S1 y S4 ( cerrando S2 y S3 ), el voltaje se invierte, permitiendo el giro en sentido inverso del motor.

Un puente H no solo se usa para invertir el giro de un motor, también se puede usar para frenarlo de manera brusca, al hacer un corto entre los bornes del motor, o incluso puede usarse para permitir que el motor frene bajo su propia inercia, cuando desconectamos el motor de la fuente que lo alimenta.

básicamente se puede hacer esto tomando en cuenta la siguiente tabla.
<img width="683" height="384" alt="image" src="https://github.com/user-attachments/assets/acfc9edc-ff3e-4838-a42a-f9528b1b11be" />

PWM (Pulse Width Modulation): Es una técnica de modulación utilizada en sistemas electrónicos y de automatización para regular la potencia suministrada a una carga, controlar dispositivos o codificar información mediante una señal binaria cuya duración del estado alto varía. Consiste en generar cíclicamente una señal cuadrada de frecuencia constante, en la que el ciclo de trabajo —proporción entre el tiempo de impulso activo y el período total de la señal— se ajusta según el valor de una señal de control.

La modificación del ancho de los impulsos permite regular de forma eficiente el valor medio del voltaje o corriente aplicada a la carga, ya que este valor es proporcional al ciclo de trabajo. Esto posibilita un control preciso del comportamiento del dispositivo con mínimas pérdidas energéticas. Por ello, PWM se utiliza ampliamente en la alimentación de motores eléctricos, regulación de brillo en LED, control de válvulas electromagnéticas, conversión de señales y circuitos de potencia.


Pin Outs Raspberry Pi Pico: 
Distribución general de los pinesPines GPIO (26): Sirven para conectar sensores, motores, luces LED y otros componentes. Cada pin se puede programar para cumplir varias funciones.Pines de Alimentación y Tierra (GND): Suministran energía (como VBUS de 5V por USB o 3V3 regulados) y cierran los circuitos eléctricos.Pines de Control del Sistema: Incluyen el pin AGND (tierra analógica), VREF (referencia analógica) y pines para depuración (SWD).
