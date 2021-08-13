/*
* medAzizLHB
* SkorpTech
* Blinking led in PC13 for 1 second
*/
void main() {
                GPIO_Digital_Output(&GPIOC_BASE, _GPIO_PINMASK_13);
                GPIOC_ODRbits.ODR13=1;
                
                while(1) {
                GPIOC_ODRbits.ODR13 = ~GPIOC_ODRbits.ODR13;
                Delay_ms(1000);
                }
}
