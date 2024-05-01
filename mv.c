#include <stdio.h>
#include <sys/fcntl.h>
#include <unistd.h>

int main(int argc, char *argv[]) {
    int fd1 = open(argv[1], O_RDONLY);
    int fd2 = creat(argv[2], 0666);
    char buffer[1024];
    ssize_t bytes_read;
    while ((bytes_read = read(fd1, buffer, sizeof(buffer))) > 0) {
        write(fd2, buffer, bytes_read);
    }
    close(fd1);
    close(fd2);
    printf("File copied from %s to %s\n", argv[1], argv[2]);
    return 0;
}