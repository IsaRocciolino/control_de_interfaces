#include <stdio.h>
#include "pico/stdlib.h"

/**
 * @brief Programa principal
*/
int main(void) {
  // Inicializo el USB
  stdio_init_all();
  // Demora para esperar la conexion
  sleep_ms(1000);

  // Inicializacion de GPIO con gpio_init()
gpio_init (GPIO2)
gpio_init (GPIO4)
  /* Habilito el GPIO25 (LED)
  

    GPIO25 como salida
  gpio_set_dir(PICO_DEFAULT_LED_PIN, GPIO_OUT);
  Configuracion de entrada/salida con gpio_set_dir()

  */

gpio_set_dir(GPIO2,GPIO_OUT);
gpio_set_dir (GPIO04,GPIO_IN)
  while (true) {

    /* Prendo LED
    gpio_put(PICO_DEFAULT_LED_PIN, 1);
   
    */
    gpio_put(GPIO2, 1);


    // Resolver logica para GPIO20 -> GPIO6

    // Resolver logica para GPIO21 -> GPIO7

    // Resolver logica para GPIO22 -> GPIO8

  }
  return 0;
}

