#define TRUE 1

void main() {
     TRISB = 0;
     PORTB = 0;
     
     while(TRUE)
     {
                PORTB = 0;
                Delay_ms(100);
                PORTB = 255;
                Delay_ms(100);
     }
}