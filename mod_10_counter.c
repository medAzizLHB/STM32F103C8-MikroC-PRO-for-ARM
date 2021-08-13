/*
* medAzizLHB
* SkorpTech
* mikroC PRO for ARM IDE
* Mod-10 counter using seven digit segement display 5151AS module
*/
void number_zero();
void number_one();
void number_two();
void number_three();
void number_four();
void number_five();
void number_six();
void number_seven();
void number_eight();
void number_nine();

void main() {
             int count = 0;
             RCC_APB2ENRbits.IOPAEN = 1;      //Turn A port clock ON
             
             GPIOA_CRL = 0x44444444;         //Reset A pins from 0 to 7
             GPIOA_CRH = 0x44444444;         //Reset A pins from 8 to 15
             
             //set the pins 0 to 7 as output with frequency of 50MHz
             GPIOA_CRLbits.MODE0 = 0x3;
             GPIOA_CRLbits.MODE1 = 0x3;
             GPIOA_CRLbits.MODE2 = 0x3;
             GPIOA_CRLbits.MODE3 = 0x3;
             GPIOA_CRLbits.MODE4 = 0x3;
             GPIOA_CRLbits.MODE5 = 0x3;
             GPIOA_CRLbits.MODE6 = 0x3;
             GPIOA_CRLbits.MODE7 = 0x3;
             
             //set the pins 0 to 7 to Push_Pull mode
             GPIOA_CRLbits.CNF0 = 0x0;
             GPIOA_CRLbits.CNF1 = 0x0;
             GPIOA_CRLbits.CNF2 = 0x0;
             GPIOA_CRLbits.CNF3 = 0x0;
             GPIOA_CRLbits.CNF4 = 0x0;
             GPIOA_CRLbits.CNF5 = 0x0;
             GPIOA_CRLbits.CNF6 = 0x0;
             GPIOA_CRLbits.CNF7 = 0x0;
             
             while(1){
            // if(count == 0){
                       number_zero();
                       delay_ms(1000);
                       number_one();
                       delay_ms(1000);
                       number_two();
                       delay_ms(1000);
                       number_three();
                       delay_ms(1000);
                       number_four();
                       delay_ms(1000);
                       number_five();
                       delay_ms(1000);
                       number_six();
                       delay_ms(1000);
                       number_seven();
                       delay_ms(1000);
                       number_eight();
                       delay_ms(1000);
                       number_nine();
                       delay_ms(1000);

             }
             

}
void number_zero(){
             GPIOA_BSRRbits.BS0 = 1; // a led is on
             GPIOA_BSRRbits.BS1 = 1; // b led is on
             GPIOA_BSRRbits.BS2 = 1; // c led is on
             GPIOA_BSRRbits.BS3 = 1; // d led is on
             GPIOA_BSRRbits.BS4 = 1; // e led is on
             GPIOA_BSRRbits.BS5 = 1; // f led is on
             GPIOA_BSRRbits.BR6 = 1; // g led is off
             GPIOA_BSRRbits.BS7 = 1; // dot led is on
}
void number_one(){
             GPIOA_BSRRbits.BR0 = 1; // a led is off
             GPIOA_BSRRbits.BS1 = 1; // b led is on
             GPIOA_BSRRbits.BS2 = 1; // c led is on
             GPIOA_BSRRbits.BR3 = 1; // d led is off
             GPIOA_BSRRbits.BR4 = 1; // e led is off
             GPIOA_BSRRbits.BR5 = 1; // f led is off
             GPIOA_BSRRbits.BR6 = 1; // g led is off
             GPIOA_BSRRbits.BS7 = 1; // dot led is on
}
void number_two(){
             GPIOA_BSRRbits.BS0 = 1; // a led is on
             GPIOA_BSRRbits.BS1 = 1; // b led is on
             GPIOA_BSRRbits.BR2 = 1; // c led is off
             GPIOA_BSRRbits.BS3 = 1; // d led is on
             GPIOA_BSRRbits.BS4 = 1; // e led is on
             GPIOA_BSRRbits.BR5 = 1; // f led is off
             GPIOA_BSRRbits.BS6 = 1; // g led is on
             GPIOA_BSRRbits.BS7 = 1; // dot led is on
}
void number_three(){
             GPIOA_BSRRbits.BS0 = 1; // a led is on
             GPIOA_BSRRbits.BS1 = 1; // b led is on
             GPIOA_BSRRbits.BS2 = 1; // c led is on
             GPIOA_BSRRbits.BS3 = 1; // d led is on
             GPIOA_BSRRbits.BR4 = 1; // e led is off
             GPIOA_BSRRbits.BR5 = 1; // f led is off
             GPIOA_BSRRbits.BS6 = 1; // g led is on
             GPIOA_BSRRbits.BS7 = 1; // dot led is on
}
void number_four(){
             GPIOA_BSRRbits.BR0 = 1; // a led is off
             GPIOA_BSRRbits.BS1 = 1; // b led is on
             GPIOA_BSRRbits.BS2 = 1; // c led is on
             GPIOA_BSRRbits.BR3 = 1; // d led is off
             GPIOA_BSRRbits.BR4 = 1; // e led is off
             GPIOA_BSRRbits.BS5 = 1; // f led is on
             GPIOA_BSRRbits.BS6 = 1; // g led is on
             GPIOA_BSRRbits.BS7 = 1; // dot led is on
}
void number_five(){
             GPIOA_BSRRbits.BS0 = 1; // a led is on
             GPIOA_BSRRbits.BR1 = 1; // b led is off
             GPIOA_BSRRbits.BS2 = 1; // c led is on
             GPIOA_BSRRbits.BS3 = 1; // d led is on
             GPIOA_BSRRbits.BR4 = 1; // e led is of
             GPIOA_BSRRbits.BS5 = 1; // f led is on
             GPIOA_BSRRbits.BS6 = 1; // g led is on
             GPIOA_BSRRbits.BS7 = 1; // dot led is on
}
void number_six(){
             GPIOA_BSRRbits.BS0 = 1; // a led is on
             GPIOA_BSRRbits.BR1 = 1; // b led is off
             GPIOA_BSRRbits.BS2 = 1; // c led is on
             GPIOA_BSRRbits.BS3 = 1; // d led is on
             GPIOA_BSRRbits.BS4 = 1; // e led is on
             GPIOA_BSRRbits.BS5 = 1; // f led is on
             GPIOA_BSRRbits.BS6 = 1; // g led is on
             GPIOA_BSRRbits.BS7 = 1; // dot led is on
}
void number_seven(){
             GPIOA_BSRRbits.BS0 = 1; // a led is on
             GPIOA_BSRRbits.BS1 = 1; // b led is on
             GPIOA_BSRRbits.BS2 = 1; // c led is on
             GPIOA_BSRRbits.BR3 = 1; // d led is of
             GPIOA_BSRRbits.BR4 = 1; // e led is of
             GPIOA_BSRRbits.BR5 = 1; // f led is of
             GPIOA_BSRRbits.BR6 = 1; // g led is off
             GPIOA_BSRRbits.BS7 = 1; // dot led is on
}
void number_eight(){
             GPIOA_BSRRbits.BS0 = 1; // a led is on
             GPIOA_BSRRbits.BS1 = 1; // b led is on
             GPIOA_BSRRbits.BS2 = 1; // c led is on
             GPIOA_BSRRbits.BS3 = 1; // d led is on
             GPIOA_BSRRbits.BS4 = 1; // e led is on
             GPIOA_BSRRbits.BS5 = 1; // f led is on
             GPIOA_BSRRbits.BS6 = 1; // g led is on
             GPIOA_BSRRbits.BS7 = 1; // dot led is on
}
void number_nine(){
             GPIOA_BSRRbits.BS0 = 1; // a led is on
             GPIOA_BSRRbits.BS1 = 1; // b led is on
             GPIOA_BSRRbits.BS2 = 1; // c led is on
             GPIOA_BSRRbits.BS3 = 1; // d led is on
             GPIOA_BSRRbits.Br4 = 1; // e led is off
             GPIOA_BSRRbits.BS5 = 1; // f led is on
             GPIOA_BSRRbits.Bs6 = 1; // g led is on
             GPIOA_BSRRbits.BS7 = 1; // dot led is on
}