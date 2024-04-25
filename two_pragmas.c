
#include <omp.h>
#include <stdio.h>

/* main function */

int main()
{

        int i = 0;
        omp_set_num_threads(16);

#pragma omp parallel
// #pragma omp critical
        {

/* first parallel region */
#pragma omp parallel num_threads(20)
                {
                        i++;
                        printf("Hello Titan=%d thread id = %d\n", i,omp_get_thread_num());
                }

/* second parallel region */
#pragma omp parallel num_threads(10)
                {
                        i++;
                        printf("Hello Newton=%d\n", i);
                }
        }

        return 0;
}