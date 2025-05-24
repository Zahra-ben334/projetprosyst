#include "cell.h"

// Getcwd : wrapper simple autour de getcwd pour récupérer le répertoire courant
void Getcwd(char *buf, size_t size)
{
    if (getcwd(buf, size) == NULL) {
        perror("getcwd failed");
        buf[0] = '\0'; // vide la chaîne en cas d'erreur
    }
}

// printbanner : affiche une bannière colorée (exemple simplifié)
void printbanner(void)
{
    printf("\033[35m"); // magenta
    printf("██╗  ██╗███████╗██╗     ██╗      ██████╗ \n");
    printf("██║  ██║██╔════╝██║     ██║     ██╔═══██╗\n");
    printf("███████║█████╗  ██║     ██║     ██║   ██║\n");
    printf("██╔══██║██╔══╝  ██║     ██║     ██║   ██║\n");
    printf("██║  ██║███████╗███████╗███████╗╚██████╔╝\n");
    printf("╚═╝  ╚═╝╚══════╝╚══════╝╚══════╝ ╚═════╝ \n");
    printf("\033[0m"); // reset couleur
}

// cell_read_line : lit une ligne depuis stdin et retourne une chaîne allouée dynamiquement
char *cell_read_line(void)
{
    char *buf = NULL;
    size_t bufsize = 0;

    ssize_t nread = getdelim(&buf, &bufsize, '\n', stdin);
    if (nread == -1) {
        if (feof(stdin)) {
            printf("EOF\n");
        } else {
            perror("getdelim failed");
        }
        free(buf);
        return NULL;
    }

    return buf;
}
