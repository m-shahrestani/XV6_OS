#include "types.h"
#include "stat.h"
#include "user.h"
#include "mmu.h"

volatile uint shared=0;
struct add {
	int a;
	int b;
};
void test(void* ab){
	exit();
}    
    
int main()
{
  // this is a test for clone system call
  void *stack= malloc(PGSIZE*2);

	if((uint)stack % PGSIZE)
  {
		stack = stack + (PGSIZE - (uint)stack % PGSIZE);
  }
  struct add var;
	var.a = 10;
	var.b =20;
	int result = clone((void*)&var,stack,&test);

  printf(1,"\n\n\n***result is %d\n\n\n",result);
  exit(); 
}