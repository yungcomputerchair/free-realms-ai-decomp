// addr: 0x014243f0
// name: CommandObjectVector_pushBack
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObjectVector_pushBack(void * this, void * command) */

void CommandObjectVector_pushBack(void *this,void *command)

{
  int in_ECX;
  void *unaff_retaddr;
  
                    /* Thin wrapper that pushes a CommandObject pointer into a vector/list; callers
                       create command objects then call this helper. It forwards the stack argument
                       by address to a vector push_back-like routine. */
  CommandObjectVector_pushBack((void *)(in_ECX + 0x10),&this,unaff_retaddr);
  return;
}

