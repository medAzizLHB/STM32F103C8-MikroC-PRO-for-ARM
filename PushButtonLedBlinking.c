/*
* medAzizLHB
* SkorpTech
* mikroC PRO for ARM IDE
* led on pin C13 is on, when push button is pressed in pin C15 the led blinks whit delay of 1 second
*/
void main() {
                RCC_APB2ENRBITS.IOPCEN=1;   //Turn C port clock ON

                GPIOC_CRL = 0x44444444;      //rest low pins from 8 to 15
                GPIOC_CRH = 0x44444444;      //reset high pins from 0 to 7
                
                GPIOC_CRHBITS.MODE15 = 0x00;    //set pin 15 to input
                GPIOC_CRHBITS.CNF15 =0x2;       //set pin 15 to Pull_Down mod
                
                GPIOC_CRHBITS.MODE13 = 0x3;     //set pin 13 to output with frequency of 50MHz
                GPIOC_CRHbits.CNF13 = 0x0;      //set pin 13 to Push_Pull mode
                
                while(1) {
                GPIOC_BSRRbits.BS13 = 1;     // set ODR13 to one -------led is on
                if (GPIOC_IDRbits.IDR15)     // check the input register value of pin 13 ---------- 1 when push button is pressed else 0
                   Delay_ms(1000);           //if IDR is 1 wait 1 second
                   GPIOC_BRRbits.BR13 = 1;   // set the reset register of pin 13 to 1 ------> ODR13 will be set to 0 ----------> led is off
                   Delay_ms(1000);            // waiit 1 second
                   GPIOC_BSRRbits.BS13 = 1;   //set the set register of pin 13 to 1 ------> ODR13 will be set to 1 ----------> led is on
                   
                }
}