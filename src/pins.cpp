#include <Arduino.h>
#include <pins.h>
#include <config.h>

void pins_init(void)
{
    gpio_config_t io_conf = {};
    io_conf.intr_type = GPIO_INTR_DISABLE;
    io_conf.mode = GPIO_MODE_INPUT;
    io_conf.pin_bit_mask = (1ULL << PIN_INTERRUPT);
    io_conf.pull_down_en = GPIO_PULLDOWN_DISABLE;
    io_conf.pull_up_en = GPIO_PULLUP_DISABLE;
    gpio_config(&io_conf);

    // //do this anyway, probably esp32 api instead
    // pinMode(PIN_INTERRUPT, INPUT);
    // pinMode(PIN_RESET, INPUT);// INPUT_PULLUP);
}

// void pins_set_clear_interrupt(void (*f)(void))
// {
//     attachInterrupt(PIN_RESET, f, RISING);
// }