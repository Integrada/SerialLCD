#include "SerialLCD.h"

const unsigned char ROW_ADDRESS[] = { 128, 192, 148, 212 };

void SerialLCD_Init(unsigned short baudRate)
{
  UART1_Init(baudRate);
  delay_ms(1000);
  SerialLCD_Clear();
}

void SerialLCD_Cmd(unsigned char cmd)
{
  UART1_Write(SERIAL_LCD_START);
  UART1_Write(cmd);
  delay_ms(5);
}

void SerialLCD_Clear()
{
  SerialLCD_Cmd(SERIAL_LCD_CLEAR);
}

void SerialLCD_PutChar(unsigned char row, unsigned char col, char character)
{
  UART1_Write(SERIAL_LCD_START);
  UART1_Write(ROW_ADDRESS[row] + col);
  delay_ms(5);
  UART1_Write(character);
}

void SerialLCD_PutCharPosition(char character)
{
  UART1_Write(character);
}

void SerialLCD_Write(unsigned char row, unsigned char col, char * text)
{
  UART1_Write(SERIAL_LCD_START);
  UART1_Write(ROW_ADDRESS[row] + col);
  delay_ms(5);
  while (*text)
  {
    UART1_Write(*(text++));
  }
  delay_ms(5);
}

void SerialLCD_CreateChar(unsigned char location, unsigned char * map)
{
  char i;
  location &= 0x07;
  UART1_Write(SERIAL_LCD_START);
  UART1_Write(64 + (location << 3));
  for (i = 0; i < 8; i++)
  {
    UART1_Write(map[i]);
  }
}

void SerialLCD_PutCustomChar(unsigned char location, unsigned char row, unsigned char col)
{
  location &= 0x07;
  UART1_Write(SERIAL_LCD_START);
  UART1_Write(ROW_ADDRESS[row] + col);
  UART1_Write(location);
}
