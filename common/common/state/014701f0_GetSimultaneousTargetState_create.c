// addr: 0x014701f0
// name: GetSimultaneousTargetState_create
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void * GetSimultaneousTargetState_create(void) */

void * GetSimultaneousTargetState_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs GetSimultaneousTargetState. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169ee0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x110);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = GetSimultaneousTargetState_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

