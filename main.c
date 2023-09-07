#include <stddef.h>
#include <stdio.h>
#include <stdint.h>
#include <stdlib.h>

#define N 10000000

int main() {
    size_t *freq = calloc(N, sizeof(size_t));

    for (size_t i = 1; i < N; i++) {
        size_t j = 1;
        size_t n = i;
        while (n > 1) {
            if (n % 2 == 0) {
                n /= 2;
            }
            else {
                n = 3 * n + 1;
            }
            j++;
        }
        freq[j]++;
    }

    puts("N;freq");
    for (size_t i = 1; i < N; i++) {
        if (freq[i] == 0) continue;
        printf("%zu;%zu\n", i, freq[i]);
    }
}
