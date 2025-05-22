#ifndef CELL_H
#define CELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// ANSI Color codes for terminal output formatting:
#define Y   "\033[1;32m" // Green
#define G   "\033[1;32m" // Green
#define C   "\033[1;36m" // Cyan
#define RED "\033[1;31m" // Red
#define RST "\033[0m"    // Reset to default color

#define pl(...) printf(__VA_ARGS__)

#endif
