#define TRUE 1

void main() {
     TRISA = 0b11111110;
     TRISB = 0b11111110;
     
     for(;;)
     {
            if(RA1_bit == 0)
            {
                   PORTB = 0b10000000;
            }
            else
            {
                   PORTB = 0X00;
            }
            if(RA2_bit == 0)
            {
               PORTA =0b10000000;
            
            }
            else{
                     PORTA = 0X00;
            }
     }
}