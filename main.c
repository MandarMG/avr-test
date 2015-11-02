#define F_CPU 16000000UL

#include <avr/io.h>
#include <util/delay.h>

int main()
{
    // Set bit 4
    DDRC=0x10;
    while (1)
    {
        // Invert the bit 4 of PORTC
        PORTC ^= 0x10;

        // Wait 500ms (the leb connectod to the bit 7 of PORTC will blink at 1Hz)
        _delay_ms(50);
    }
}
