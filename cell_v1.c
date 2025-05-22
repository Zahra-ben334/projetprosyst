#include "cell.h"

int main(int ac, char **av)
{
    (void)ac;
    int status;

    // child process
    if (fork() == 0) {
        // replace the current process image with a new process image
        // v for "vector", p for "path".
        // Takes an array of arguments and uses PATH to find the executable.
        execvp(av[1], av + 1);
    }

    wait(&status);
    return EXIT_SUCCESS;
}



