// addr: 0x01470970
// name: GetTopCardState_create
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * GetTopCardState_create(void) */

void * GetTopCardState_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs GetTopCardState. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169ef6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0xfc);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = GetTopCardState_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

