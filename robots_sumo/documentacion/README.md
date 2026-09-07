ALIMENTACIÓN:
La Raspberry Pi Pico w se alimenta con 5v a través de un puerto USB o con un rango de 1.8v a 5.5v si se conecta a los pines de la placa.

Opciones de alimentación
Puerto Micro-USB (VBUS): Requiere 5V (con una tolerancia del 10%). Es la forma más común usando un cargador de celular, un puerto de computadora o una batería portátil. Corresponde internamente al pin físico 40 (VBUS). 

Pin VSYS (Pin 39): Admite un rango de 1.8V a 5.5V. Es ideal si usas baterías externas (como una de litio de 3.7V o dos pilas AA de 1.5V). Un regulador interno se encarga de bajar o adaptar el voltaje para el resto de los componentes.

Pin 3.3V (Pin 36): Permite ingresar 3.3V exactos y regulados de forma directa. Al usar esta opción, el circuito interno de la placa se salta el regulador de voltaje, por lo que debes asegurarte de que la fuente sea muy estable y no supere ese valor para evitar daños.

PRECAUCIONES: 
Los pines de entrada y salida (GPIO) funcionan estrictamente a 3,3v. 
No conectar señales o voltajes de 5v directamente a los pines GPIO para no quemar el microcontrolador.
