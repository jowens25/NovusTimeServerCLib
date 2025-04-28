#ifndef NTSLIB_H

#define NTSLIB_H
#include <stdio.h>
#include <stdlib.h>
#include <fcntl.h>
#include <unistd.h>
#include <string.h>
#include <stdint.h>
#include <stdbool.h>
#include "ntslib.h"

extern struct termios tty;

int connect(void);

int serOpen(char fileDescriptor[]);
int serRead(int ser, char data[], size_t dataLength);
int serWrite(int ser, char data[], size_t dataLength);

unsigned char calculateChecksum(char *data);

bool isWriteResponse(char *message);
bool isReadResponse(char *message);
bool isErrorResponse(char *message);
bool isChecksumCorrect(char *message);

void setupTermios(int);

#endif // NTSLIB_H