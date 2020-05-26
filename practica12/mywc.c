#include <sys/types.h>
#include <sys/uio.h>
#include <unistd.h>
#include <fcntl.h>
#include <stdio.h>
#include <sys/stat.h>
#include <stdlib.h>
int main(int argn, char **argv) {
    char *fileName = argv[1];
    char buffer;
    char espacio = 0;
    int fd = open(fileName, O_RDONLY);
    if(fd < 0) {
        printf("No se puede abrir \n");
        exit(1);
    }
    unsigned int lines = 0;
    unsigned int chars = 0;
    unsigned int words = 0;
    while(read(fd, &buffer, 1)) {
        if('\n' == buffer) {
            lines++;
        }
        if((buffer == ' ' || buffer == '\n' || buffer == EOF) && espacio == 0) {
            espacio = 1;
            words++;
        } else if (buffer != ' ' && buffer != '\n' && buffer != EOF) {
            espacio = 0;
        }
        chars++;
    }
    printf("%d %d %d %s\n", lines, chars, words, fileName);
    close(fd);
    exit(0);
}