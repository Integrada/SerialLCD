#ifndef SERIAL_LCD_H_

#define SERIAL_LCD_H_

#define SERIAL_LCD_START                0xFE
#define SERIAL_LCD_CLEAR                0x01
#define SERIAL_LCD_HOME                 0x02
#define SERIAL_LCD_SHIFT_LEFT           0x18
#define SERIAL_LCD_SHIFT_RIGHT          0x1C
#define SERIAL_LCD_MOVE_CURSOR_LEFT     0x10
#define SERIAL_LCD_MOVE_CURSOR_RIGHT    0x14
#define SERIAL_LCD_DISPLAY_ON           0x0C
#define SERIAL_LCD_DISPLAY_OFF          0x08
#define SERIAL_LCD_UNDERLINE_ON         0x0E
#define SERIAL_LCD_UNDERLINE_OFF        0x0C
#define SERIAL_LCD_BLINK_ON             0x0D
#define SERIAL_LCD_BLINK_OFF            0x0C

void SerialLCD_Init(unsigned short);
void SerialLCD_Cmd(unsigned char);
void SerialLCD_Clear();
void SerialLCD_PutChar(unsigned char, unsigned char, char);
void SerialLCD_PutCharPosition(char);
void SerialLCD_Write(unsigned char, unsigned char, char *);
void SerialLCD_CreateChar(unsigned char, unsigned char *);
void SerialLCD_PutCustomChar(unsigned char, unsigned char, unsigned char);

#endif
