#include<omp.h>
#include<iostream>

using namespace std;

int main(){

    int x = 10;

    #pragma omp parallel firstprivate(x)
    {
        // cout << "Thread " << omp_get_thread_num() << " has private x =   " << x << endl;
        x=x+omp_get_thread_num();
        printf("Thread %d has private x = %d \n",omp_get_thread_num(),x);
    }

    return 0;
}