// addr: 0x0144ee70
// name: CWDrawCardState_create
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * CWDrawCardState_create(void) */

void * CWDrawCardState_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs CWDrawCardState. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169b44b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x128);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = CWDrawCardState_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

