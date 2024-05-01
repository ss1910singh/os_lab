#include <stdio.h>
#include <dirent.h>
#include <sys/types.h>
#include <string.h>

int main(int argc, char *argv[]) {
    char *dir_path = argv[1];
    DIR *dir = opendir(dir_path);
    if (dir == NULL) {
        perror("opendir failed");
        return 1;
    }
    struct dirent *entry;
    while ((entry = readdir(dir)) != NULL) {
        if (strcmp(entry->d_name, ".") == 0 || strcmp(entry->d_name, "..") == 0) {
            continue;
        }
        printf("%s\n", entry->d_name);
    }
    closedir(dir);
    return 0;
}