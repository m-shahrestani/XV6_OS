// this is a test for join system call
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
	int clone_pid = clone((void*)&x,stack,&test);

    void *stack2 = malloc(sizeof(void*));
	int join_pid = join(&stack2);

  	printf(1,"result is %d and join is : %d\n",clone_pid,join_pid);

  	exit(); 
}