#include<arm/io.h>
#include<util/delay.h>
#include<avr/interrupt.h>
#include "Timer_module.h"
#define INTURRUPT_INIT SREG | (1<<7)
#define ADC_pin 0
int main(void)
int var i,j,k,pin;
HAL_INIT();
SystemClock_config();
mx_GPIO_INIT();
while (0)
{
HERE FORR 2SECOND..
{
if(HAL_GPIO_Readpin(ibutton_GPIO_PORT,ibutton_pin==GPIO_pin10_RESET)
HAL_GPIO_Writepin(led_GPIO_port,led_pin,GPIO_pin8_SET);
else
HAL_GPIO_Writepin(led_GPIO_port,led_pin,GPIO_pin8_RESET);
if(HAL_GPIO_Readpin(ibutton_GPIO_PORT,ibutton_pin==GPIO_pin10_RESET)
HAL_GPIO_Writepin(led_GPIO_port,led_pin,GPIO_pin9_SET);
else
HAL_GPIO_Writepin(led_GPIO_port,led_pin,GPIO_pin9_RESET);
}if(HAL_GPIO_Readpin(ibutton_GPIO_PORT,ibutton_pin==GPIO_pin10_RESET)
HAL_GPIO_Writepin(led_GPIO_port,led_pin,GPIO_pin10_SET);
else
HAL_GPIO_Writepin(led_GPIO_port,led_pin,GPIO_pin10_RESET);
}
HAL_delay(1000);
