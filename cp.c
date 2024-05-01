#include <stdio.h>
#include <stdlib.h>
#include <unistd.h>
#include <fcntl.h>

#define BUFFER_SIZE 4096

int main(int argc, char *argv[]) {
    int src = open(argv[1], O_RDONLY);
    int dst = open(argv[2], O_WRONLY | O_CREAT | O_TRUNC, 0644);

    char buffer[BUFFER_SIZE];
    ssize_t nread;

    while ((nread = read(src, buffer, BUFFER_SIZE)) > 0) {
        write(dst, buffer, nread);
    }

    close(src);
    close(dst);

    return 0;
}
