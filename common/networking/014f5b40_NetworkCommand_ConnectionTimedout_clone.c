// addr: 0x014f5b40
// name: NetworkCommand_ConnectionTimedout_clone
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * NetworkCommand_ConnectionTimedout_clone(void) */

void * NetworkCommand_ConnectionTimedout_clone(void)

{
  void *this;
  void *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a NetworkCommand_ConnectionTimedout clone, then
                       invokes the base clone hook. The command has no payload fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b2b0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  this = Mem_Alloc(4);
  this_00 = (void *)0x0;
  local_4 = 0;
  if (this != (void *)0x0) {
    this_00 = NetworkCommand_ConnectionTimedout_ctor(this);
  }
  local_4 = 0xffffffff;
  NetworkCommand_cloneBaseFields(this_00);
  ExceptionList = local_c;
  return this_00;
}

