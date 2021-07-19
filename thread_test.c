// this is a test for thread functions
#include "types.h"
#include "stat.h"
#include "user.h"
#include "thread.h"

int global = 0;
int arrsum = 0;
int arr[] = {1, 2, 3, 4, 5, 6};

void arr_sum(void *x){
    arrsum += *((int *)x);
}

void test(void *x)
{
	printf(1,"#");
	exit();
}

void sum(void *n){
    int sum = 0;
    for (int i = 0 ; i <= *((int *)n) ; i++){
        sum +=i;
        sleep(100);
    }
    printf(1,"sum is :%d\n",sum);
}

void print_global(void * x){
    for (int i = 0 ; i < 10 ; i++){
    printf(1,"*%d\n",global);
    sleep(100);
    }
}

void global_increase(void * x){
    for (int i = 0 ;i < 10 ;i++){
    global++;
    sleep(100);
    }
    //printf(1,"**%d\n",global);
}

void s(void *n){
    *((int *)n) += 1;
}

int main()
{
    // int x;
    // thread_create((void *)&x, &test);
  	// thread_join();

  	// thread_create((void *)&x, &sum);
  	// thread_join();
    
    // thread_create((void *)&x, &print_global);
    // thread_create((void *)&x, &global_increase);
  	// thread_join();
    // thread_join();

    // for(int i = 0; i < 6; i++) {
    //     thread_create((void *)&arr[i], &arr_sum);
    // }
    // for(int i = 0; i < 6; i++) {
    //     thread_join();
    // }
    
    // printf(1,"*%d\n",arrsum);

    // for(int i = 0; i < 6; i++) {
    //     thread_create((void *)&arr[i], &arr_sum);
    // }
    // for(int i = 0; i < 6; i++) {
    //     thread_join();
    // }
    // printf(1,"*%d\n",arrsum);

    // int x=0;
    // for(int i = 0; i < 15; i++) {
    //     x++;
    // }
    // printf(1, "with out thread = %d \n", x);
    // x=0;
    // for(int i = 0; i < 5; i++) {
    //     thread_create((void *)&x, &s); 
    //     thread_create((void *)&x, &s);
    //     thread_create((void *)&x, &s);
    // }
    // for(int i = 0; i < 5; i++) {
    //     thread_join();
    //     thread_join();
    //     thread_join();
    // }
    // printf(1, "multi thread = %d \n", x);

    exit(); 
}