  for(;;){
    // Scan through table looking for exited threads.
    havethreads = 0;
    for(p = ptable.proc; p < &ptable.proc[NPROC]; p++){
      if(p->parent != curproc || p->pgdir != curproc->pgdir)
        continue;