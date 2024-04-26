/* parallel_for.c */

#include <omp.h>
#include <stdio.h>

int main()
{

    int a = 10;

#pragma omp parallel for num_threads(1000) lastprivate(a)
    for (int i = 0; i < 10; i++)
    {
        a++;
        printf("Thread of pid = %d , i = %d \n", omp_get_thread_num(), a);
    }
    printf("A outside parallel region = %d \n", a);

    return 0;
}




