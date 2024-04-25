
#include <omp.h>
#include <stdio.h>
#include <sys/stat.h>

int main()
{
    int i = 0;

    FILE *fptr;
    fptr = fopen("myfile.txt", "w");
    /* first parallel region */
#pragma omp parallel num_threads(1000)
    {

        i=i+1;

        /* create a folder */
        // int status = mkdir("test", S_IRWXU | S_IRWXG | S_IROTH | S_IXOTH);

        int status = 0;

        fprintf(fptr, "%d\n", i);



        // fclose(fptr$i);
        printf("Hello Titan = %d thread id = %d get cpu id = %d file output status = %d\n", i, omp_get_thread_num(), sched_getcpu(), omp_get_num_threads());
        // printf("Hello Titan = %d thread id = %d get cpu id = %d \n", i, omp_get_thread_num(), sched_getcpu());
    }

    fclose(fptr);

    return 0;
}