#ifndef NTSLIB_H

#define NTSLIB_H

#ifdef __linux__
#include <fcntl.h>   // linux
#include <unistd.h>  // linux
#include <termios.h> // linux
#endif

#ifdef MCU

#endif

// common
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <stdint.h>

extern struct termios tty;

int connect(void);

int serOpen(char fileDescriptor[]);
int serRead(int ser, char data[], size_t dataLength);
int serWrite(int ser, char data[], size_t dataLength);

unsigned char calculateChecksum(char *data);

int isWriteResponse(char *message);
int isReadResponse(char *message);
int isErrorResponse(char *message);
int isChecksumCorrect(char *message);

int setupTermios(int);

#endif // NTSLIB_H