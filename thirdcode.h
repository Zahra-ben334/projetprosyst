#ifndef CELL_H
#define CELL_H

#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>

// Codes couleurs ANSI pour affichage terminal
#define Y   "\033[1;32m" // Vert
#define G   "\033[1;32m"
#define C   "\033[1;36m" // Cyan
#define RED "\033[1;31m" // Rouge
#define RST "\033[0m"    // Reset (par défaut)

// Alias pour printf (plus court)
#define pl(...) printf(__VA_ARGS__)

// Déclaration de la fonction fournie dans cell_v1.c
char *cell_read_line(void);

#endif
