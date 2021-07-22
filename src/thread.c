#include "param.h"
#include "syscall.h"
#include "traps.h"
#include "fs.h"
#include "mmu.h"

int
thread_create(void *arg, void (func)(void*))
{
    void *stack= malloc(PGSIZE*2);
    if((uint)stack % PGSIZE)
    {
        stack = stack + (PGSIZE - (uint)stack % PGSIZE);
    }
	int clone_pid = clone(arg, stack, func);
    printf(1,"clone_pid is: %d\n", clone_pid);
    return clone_pid;
}

int
thread_join()
{
    void *stack = malloc(sizeof(void*));
	int join_pid = join(&stack);
    printf(1,"join_pid is: %d\n", join_pid);
    free(stack);
    return join_pid;
}