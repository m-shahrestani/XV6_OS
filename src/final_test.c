// this is a test for thread functions
#include "types.h"
#include "stat.h"
#include "user.h"
#include "thread.h"

int arrsum = 0;
int arr[] = {1, 2, 3, 4, 5, 6}; // 1 + 2 + 3 + 4 + 5 + 6 = 21

void sum(void *x){
    arrsum += *((int *)x);
}

int main(){
    for(int i = 0; i < 6; i++){
        thread_create((void *)&arr[i], &sum);
    }
    for(int i = 0; i < 6; i++){
        thread_join();
    }
    printf(1,"*%d\n", arrsum);

    exit(); 
}
