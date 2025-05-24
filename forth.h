#ifndef CELL_H
#define CELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// ANSI Color codes
#define YEL "\033[1;33m"
#define G   "\033[0;32m"
#define C   "\033[1;36m"
#define RED "\033[0;31m"
#define RST "\033[0m"

#define p(...) printf(__VA_ARGS__)

// Prototypes
void Getcwd(char *buf, size_t size);
void printbanner(void);
char *cell_read_line(void);

#endif
