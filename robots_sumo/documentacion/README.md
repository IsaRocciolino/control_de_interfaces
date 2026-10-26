Carpeta designada para la documentación de robot -Jarvis-

### Puente H 
El L298N es un circuito integrado que tiene en su interior dos puentes H que pueden manejar motores que consumen hasta 2 amperes y con un voltaje de hasta 30 volts. La operación del puente H se basa en cómo se activan y desactivan los interruptores. En función de qué interruptores estén cerrados (activados) o abiertos (desactivados), el motor girará en una dirección, se detendrá o girará en la dirección opuesta.


**Giro hacia adelante:** Para hacer girar el motor hacia adelante, se activan los interruptores diagonales (por ejemplo, el superior izquierdo y el inferior derecho) mientras que los otros dos permanecen desactivados. Esto hace que la corriente fluya en una dirección específica a través del motor.

**Giro hacia atrás:** Para invertir la dirección del motor, se activan los interruptores opuestos (por ejemplo, el superior derecho y el inferior izquierdo). De esta manera, la corriente fluye en sentido opuesto al anterior, haciendo que el motor gire en la dirección contraria.

**Detener el motor:** Al desactivar los cuatro interruptores, se corta el flujo de corriente hacia el motor, deteniéndolo.
El control preciso de estos interruptores, en combinación con una adecuada fuente de alimentación, permite una operación eficiente y versátil del motor. Sin embargo, es crucial tener en cuenta que nunca deben activarse interruptores opuestos en el mismo lado (por ejemplo, ambos interruptores en la parte superior) al mismo tiempo, ya que esto podría causar un cortocircuito y dañar el circuito.

### PWM
La modulación por ancho de pulso, comúnmente conocida como PWM, es un método de modulación que cambia el ancho de la señal de pulso en sistemas eléctricos para regular la potencia media suministrada a una carga. La PWM es especialmente útil para regular eficazmente la salida de amplificadores de audio, la velocidad de los motores y el brillo de la luz. Se utilizan frecuentemente en microcontroladores y circuitos integrados especializados de controladores PWM (CI).

Un PWM funciona como un interruptor, que constantemente se activa y desactiva, regulando la cantidad de corriente y por ende de potencia, que se entrega al dispositivo que se desea controlar. Estos dispositivos pueden ser motores CC o fuentes de luz en CC, entre otros. ElegirFuentes

Si un motor es alimentado con 12 voltios, recibe todo el tiempo la corriente que este pide y entrega la máxima potencia, si es alimentado con 0 voltios, no recibe corriente y no obtiene potencia.

En un sistema PWM el motor recibe corriente por un tiempo y deja de recibirlo por otro, repitiéndose este proceso continuamente. Si se aumenta el tiempo en que el pulso está en nivel alto (12 V en nuestro ejemplo), se entrega más potencia y si se reduce el tiempo entrega menos potencia. <img width="398" height="484" alt="image" src="https://github.com/user-attachments/assets/5b6378b8-8ad4-4f65-ba59-af48f81102df" />

