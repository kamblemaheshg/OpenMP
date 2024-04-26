/* deafult_shared_with_two_private_var.c */

#include <stdio.h>
#include <omp.h>

int main()
{
    int x;

   
    printf("Out side Value of x= %d\n", x);

    int y = 20;

#pragma omp parallel default(shared) private(x, y)
    {
        /* x is private to each thread */
        /* y is shared among all thread */

        printf("Value of x= %d\n", x);
        printf("Value of x= %d\n", y);

        x = omp_get_thread_num();
        y += x;
        printf("Thread %d : x = %d, y = %d\n", omp_get_thread_num(), x, y);

        printf("\n");
    }

    printf("outside parallel region x = %d, y = %d\n", x, y);

    return 0;
}