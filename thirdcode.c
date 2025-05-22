#include "cell.h"

char *cell_read_line(void) {
    char *buf = NULL;
    size_t bufsize = 0;

    pl(C ">>> " RST); // Affiche le prompt >>> en cyan

    if (getline(&buf, &bufsize, stdin) == -1) {
        if (feof(stdin)) {
            free(buf);
            return NULL; // Fin de fichier (Ctrl+D)
        } else {
            perror(RED "Erreur: getline failed" RST);
            free(buf);
            return NULL;
        }
    }

    return buf;
}

int main(int argc, char **argv) {
    char *line;

    while (1) {
        line = cell_read_line();
        if (!line) {
            break; // EOF ou erreur : on quitte la boucle
        }

        pl("Vous avez tapé: %s", line); // Pas besoin de \n, il est déjà dans line

        free(line); // Très important pour éviter les fuites mémoire
    }

    return EXIT_SUCCESS;
}

 



