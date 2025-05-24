#include "cell.h" 
#include <stdio.h>
#include <stdlib.h>

char *read_line(void)
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

    return buf; // buf contient la ligne lue avec le '\n' final
}

int main(void)
{
    char *line;

    while (1) {
        printf("\033[35m"); // Magenta
        printf("██╗  ██╗███████╗██╗     ██╗      ██████╗ \n");
        printf("██║  ██║██╔════╝██║     ██║     ██╔═══██╗\n");
        printf("███████║█████╗  ██║     ██║     ██║   ██║\n");
        printf("██╔══██║██╔══╝  ██║     ██║     ██║   ██║\n");
        printf("██║  ██║███████╗███████╗███████╗╚██████╔╝\n");
        printf("╚═╝  ╚═╝╚══════╝╚══════╝╚══════╝ ╚═════╝ \n");
        printf("\033[0m"); 
        
        line = read_line();
        if (line == NULL) {
            break;
        }

        if (line[0] != '\0' && line[0] != '\n') {
            printf("You typed: %s", line);
        }

        free(line);
    }

    return EXIT_SUCCESS;
}
