// addr: 0x01450bd0
// name: CWActionPlayedState_create
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * CWActionPlayedState_create(void) */

void * CWActionPlayedState_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs CWActionPlayedState. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169b6bb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x1a4);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = CWActionPlayedState_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

