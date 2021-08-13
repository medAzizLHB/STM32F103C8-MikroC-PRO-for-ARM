/*
* medAzizLHB
* SkorpTech
* Blinking led in PC13 for 0.5 second
*/
void main() {
                GPIO_Digital_Output(&GPIOC_BASE, _GPIO_PINMASK_13);
                GPIOC_ODRbits.ODR13=1;
                
                while(1) {
                GPIOC_ODRbits.ODR13 = ~GPIOC_ODRbits.ODR13;
                Delay_ms(500);
                }
}
