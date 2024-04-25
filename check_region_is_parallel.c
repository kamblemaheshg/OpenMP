/* check_region_is_parallel.c */

#include <omp.h>
#include <stdio.h>

int main()
{
    /* check main thread is in parallel region */

    if (omp_in_parallel())
    {
        printf("Main thread is in parallel region.\n");
    }
    else
    {
        printf("Main thread is not in parallel region.\n");
    }

#pragma omp parallel
    {
        /* check if worker is in parallel region */

        if (omp_in_parallel())
        {
            printf("Main thread is in parallel region.\n");
        }
        else
        {
            printf("Main thread is not in parallel region.\n");
        }
    }
}