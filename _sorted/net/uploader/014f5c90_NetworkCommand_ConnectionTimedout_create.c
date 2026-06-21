// addr: 0x014f5c90
// name: NetworkCommand_ConnectionTimedout_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * NetworkCommand_ConnectionTimedout_create(void) */

void * NetworkCommand_ConnectionTimedout_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a NetworkCommand_ConnectionTimedout, returning null
                       on allocation failure. Evidence is the NetworkCommand_ConnectionTimedout_ctor
                       or vtable-named constructor callee. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b2b3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(4);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = NetworkCommand_ConnectionTimedout_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

