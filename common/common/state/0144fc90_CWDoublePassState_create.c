// addr: 0x0144fc90
// name: CWDoublePassState_create
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * CWDoublePassState_create(void) */

void * CWDoublePassState_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs CWDoublePassState. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169b59b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(300);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = CWDoublePassState_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

