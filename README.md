# SerialLCD

_Manipulação do [LCD por Serial](http://www.vwsolucoes.com/view/download_produtos/ML%20manual%20-%20DLS%20v4.0.pdf) com PIC16F ou PIC18F_

### Como utilizar

Inclua os arquivos fontes no seu projeto e faça a chamada no seu código:

```c
#include "SerialLCD.h"
```

#### Dependências

Este projeto depende da biblioteca [`UART`](https://download.mikroe.com/documents/compilers/mikroc/pic/help/uart_library.htm) oferecida pelo MikroC.

### Documentação

###### `SerialLCD_Init(unsigned short baudRate)`

Recebe o `baud rate` (4800, 9600 ou 19200) para iniciar a comunicação pela __UART__ e limpa o LCD.

###### `SerialLCD_Cmd(unsigned char cmd)`

Envia o comando (`cmd`) para o LCD.

Consulte o [Manual do LCD Serial](http://www.vwsolucoes.com/view/download_produtos/ML%20manual%20-%20DLS%20v4.0.pdf) para verificar os comandos disponíveis.

###### `SerialLCD_Clear()`

Envia o comando para limpar o LCD.


###### `SerialLCD_PutChar(unsigned char row, unsigned char col, char character)`

Escreve o carácter (`character`) na linha (`row`) e coluna (`col`).

###### `SerialLCD_PutCharPosition(char character)`

Escreve o carácter (`character`) na linha e coluna atual.

###### `SerialLCD_Write(unsigned char row, unsigned char col, char * text)`

Escreve o texto a partir da linha (`row`) e coluna (`col`).


###### `SerialLCD_CreateChar(unsigned char location, unsigned char * map)`

Armazena o carácter personalizado (`map`) na placa do LCD Serial.

O endereço (`location`) será utilizado para escrevê-lo.

###### `SerialLCD_PutCustomChar(unsigned char location, unsigned char row, unsigned char col)`

Escreve o carácter personalizado salvo no endereço (`location`) na linha (`row`) e coluna (`col`).


### Agradecimentos

- [PIC: Serial LCD](http://microcontrolandos.blogspot.com.br/2013/06/pic-serial-lcd.html)

### Autores

| ![](https://avatars0.githubusercontent.com/u/8146112?s=100) | ![](https://avatars2.githubusercontent.com/u/9325152?s=100) |
| ----- | ----- |
| [Felipe Pontes](//github.com/felipemfp) | [Francisco Bento](//github.com/chicobentojr) |

### Licença

Este projeto é licenciado pela Licença MIT, veja [LICENSE](LICENSE) para mais detalhes.
