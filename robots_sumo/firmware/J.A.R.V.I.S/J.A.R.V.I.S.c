#include "pico/stdlib.h"
#include "pico/cyw43_arch.h"

int main() {
    // Inicializa la arquitectura CYW43 
    if (cyw43_arch_init()) {
        return -1; 
    }
    
    while (true) {
        // Encender el LED
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 1);
        sleep_ms(1000);

        // Apagar el LED 
        cyw43_arch_gpio_put(CYW43_WL_GPIO_LED_PIN, 0);
        sleep_ms(1000);
    }
    return 0;
}