// https://github.com/Sylaina/oled-display

#include <oled.h>

struct DHT_values_structure {
   uint8_t hum_int;
   uint8_t hum_dec;
   uint8_t temp_int;
   uint8_t temp_dec;
   uint8_t checksum;
} dht12;

int main(void)
{
    oled_init(OLED_DISP_ON);
    oled_clrscr();

    oled_charMode(NORMALSIZE);
    oled_puts("Actual humidity is:");
    //oled_puts(dht12.hum_int = twi_read(TWI_ACK));
    //oled_puts(dht12.hum_dec = twi_read(TWI_NACK));

    oled_charMode(DOUBLESIZE);

    // oled_gotoxy(x, y)
    oled_gotoxy(0, 1);
    oled_puts("xx %");

    // oled_drawLine(x1, y1, x2, y2, color)
    oled_drawLine(0, 30, 120, 30, WHITE);

  
    oled_gotoxy(0, 5);
    oled_charMode(NORMALSIZE);
    oled_puts("Actual temperature is:");

    oled_charMode(DOUBLESIZE);
    oled_gotoxy(0, 6);
    oled_puts("xx °C");


    // Copy buffer to display RAM
    oled_display();

    while (1) {
        ;
    }

    return 0;
}