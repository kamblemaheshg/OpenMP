#include<omp.h>
#include<stdio.h>

int main(){

    int n = 1000;

    /* forking */
    #pragma omp parallel if(n>100)
    {
        /* fork join model */

        /*  
                    (parallel)
                 ___________________            ______________
         _______/___________________\__________/              \______ 
                \___________________/          \______________/
                                    
                                    for join model         
        
        */

        /* master thread execute always independent of condition */
        printf("The thread %d is executing inside parallel region\n",omp_get_thread_num());

    }
    return 0;
}