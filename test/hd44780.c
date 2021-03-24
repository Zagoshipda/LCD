#include "RaspberryPi-LCD-I2C/LCD_I2C.h"

void main() {
    LCD_begin(0x27, 16, 2, LCD_5x8DOTS);
    LCD_print("Raspberry Pi");

    char giyeok[8] = {  0b11111,
                        0b00001,
                        0b00001,
                        0b00001,
                        0b00001,
                        0b00001,
                        0b00001,
                        0b00001 };
    char nieun[8] = {   0b10000,
                        0b10000,
                        0b10000,
                        0b10000,
                        0b10000,
                        0b10000,
                        0b10000,
                        0b11111 };
                        
    char mu[8] = {  0b00000,
                    0b10010,
                    0b10010,
                    0b10010,
                    0b10010,
                    0b11101,
                    0b10000,
                    0b10000};
    char pi[8] = { 0b00000,
               0b00000,
               0b11111,
               0b01010,
               0b01010,
               0b01010,
               0b10011,
               0b00000};
    char omega[8] = { 0b00000,
                  0b01110,
                  0b10001,
                  0b10001,
                  0b10001,
                  0b01010,
                  0b11011,
                  0b00000};

    delay(1000);

    LCD_setCursor(0, 0);

    LCD_createChar(0, pi);
    LCD_createChar(1, giyeok);
    LCD_createChar(2, giyeok);
    LCD_createChar(3, nieun);
    LCD_createChar(4, nieun);
    LCD_createChar(5, mu);
    LCD_createChar(6, pi);
    LCD_createChar(7, omega);



    LCD_setCursor(0, 1);

    LCD_createChar(0, nieun);
    LCD_createChar(1, nieun);
    LCD_createChar(2, nieun);
    LCD_createChar(3, nieun);
    LCD_createChar(4, nieun);
    LCD_createChar(5, mu);
    LCD_createChar(6, pi);
    LCD_createChar(7, omega);

    LCD_clear();

    for(int i=0; i<16; ++i){
        LCD_write(i);
    }

    // LCD_setCursor(1,0);
    // for(int i=0; i<8; ++i){
    //     LCD_write(i);
    // }
    // LCD_setCursor(1,1);
    // for(int i=0; i<8; ++i){
    //     LCD_write(i);
    // }

}
