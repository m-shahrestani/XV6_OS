// this is a test for clone system call
#include "types.h"
#include "stat.h"
#include "user.h"
#include "mmu.h"

void test(void *x)
{
	printf(1,"#");
	exit();
}

int main()
{
  void *stack= malloc(PGSIZE*2);

	if((uint)stack % PGSIZE)
  	{
		stack = stack + (PGSIZE - (uint)stack % PGSIZE);
  	}
	int x = 0;
	int result = clone((void*)&x,stack,&test);
  	printf(1,"result is %d\n",result);
  	exit(); 
}