// #include<omp.h>
// #include<stdio.h>

// int main(){
//     int i = 0 ;
//     // #pragma omp parallel
//     #pragma omp parallel
//     // #pragma omp serial
//     {
//         i++;
//         printf("Hello WOrld=%d\n",i);
//     }
//     return 0;
// }


#include<omp.h>
#include<stdio.h>

int main(){
    int i = 0 ;
    omp_set_num_threads(16);//runtime libraray rutines to define number of threads
    #pragma omp parallel num_threads(1) // define number of threads using pragma
    #pragma omp critical // synchronize the output in sequentially
    {
            i++;
            printf("Hello World=%d\n",i);
    }
    return 0;
}


// #include<omp.h>
// #include<stdio.h>

// int main(){
//     int i = 0 ;
//     #pragma omp parallel
//     {
//         #pragma omp atomic
//         i++;
//         printf("Hello World=%d\n",i);
//     }
//     return 0;
// }