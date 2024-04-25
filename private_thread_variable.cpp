/* private_thread_variable */

#include <omp.h>
#include <iostream>

using namespace std;

int main()
{

    int x = 2;

    printf("Value of x outside parallel region = %p \n", &x);

#pragma omp parallel private(x)  num_threads(2000)
    {
        printf("Value of x inside parallel region = %p \n", &x);

        x = omp_get_thread_num();

        printf("Thread %d has private x = %d \n", omp_get_thread_num(), x);
    }

    printf("Value of x outside parallel region = %p \n", &x);

    return 0;
}