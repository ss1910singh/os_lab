#include <stdio.h>
#include <stdlib.h>

#define MAX_PROCESSES 10
#define MAX_MEMORY 100

void firstFit(int processSizes[], int processIDs[], int n, int memory[], int m) {
    for (int i = 0; i < n; i++) {
        int found = 0;
        for (int j = 0; j < m; j++) {
            if (memory[j] >= processSizes[i]) {
                memory[j] -= processSizes[i];
                printf("Process %d allocated to memory block %d\n", processIDs[i], j);
                found = 1;
                break;
            }
        }
        if (!found) {
            printf("Process %d not allocated (no fit)\n", processIDs[i]);
        }
    }
}

void bestFit(int processSizes[], int processIDs[], int n, int memory[], int m) {
    int best_idx = -1;
    for (int i = 0; i < n; i++) {
        best_idx = -1;
        for (int j = 0; j < m; j++) {
            if (memory[j] >= processSizes[i]) {
                if (best_idx == -1 || memory[j] < memory[best_idx]) {
                    best_idx = j;
                }
            }
        }
        if (best_idx != -1) {
            memory[best_idx] -= processSizes[i];
            printf("Process %d allocated to memory block %d\n", processIDs[i], best_idx);
        } else {
            printf("Process %d not allocated (no fit)\n", processIDs[i]);
        }
    }
}

void worstFit(int processSizes[], int processIDs[], int n, int memory[], int m) {
    int worst_idx = -1;
    for (int i = 0; i < n; i++) {
        worst_idx = -1;
        for (int j = 0; j < m; j++) {
            if (memory[j] >= processSizes[i]) {
                if (worst_idx == -1 || memory[j] > memory[worst_idx]) {
                    worst_idx = j;
                }
            }
        }
        if (worst_idx != -1) {
            memory[worst_idx] -= processSizes[i];
            printf("Process %d allocated to memory block %d\n", processIDs[i], worst_idx);
        } else {
            printf("Process %d not allocated (no fit)\n", processIDs[i]);
        }
    }
}

int main() {
    int processSizes[] = {20, 15, 10, 30};
    int processIDs[] = {1, 2, 3, 4};
    int n = sizeof(processSizes) / sizeof(processSizes[0]);

    int memory[MAX_MEMORY];
    for (int i = 0; i < MAX_MEMORY; i++) {
        memory[i] = 10; // Simulate memory blocks of size 10
    }
    int m = sizeof(memory) / sizeof(memory[0]);

    printf("** First Fit Allocation **\n");
    firstFit(processSizes, processIDs, n, memory, m);

    for (int i = 0; i < m; i++) {
        memory[i] = 10; // Reset memory for next algorithm
    }

    printf("\n** Best Fit Allocation **\n");
    bestFit(processSizes, processIDs, n, memory, m);

    for (int i = 0; i < m; i++) {
        memory[i] = 10; // Reset memory for next algorithm
    }

    printf("\n** Worst Fit Allocation **\n");
    worstFit(processSizes, processIDs, n, memory, m);

    return 0;
}
