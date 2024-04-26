#include <stdio.h>
#include <omp.h>

int main() {
    int x;
    x = 0;

    #pragma omp parallel for lastprivate(x) num_threads(2)
    for (int i = 0; i < 10; i++) {
        x = i;
        printf("Thread number: %d     x: %d\n", omp_get_thread_num(), x);
    }

    printf("x is %d\n", x);

    return 0;
}