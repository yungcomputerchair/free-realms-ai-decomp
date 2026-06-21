// addr: 0x0147f6d0
// name: ActionPlayedState_create
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * ActionPlayedState_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs an ActionPlayedState, returning null on allocation
                       failure. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a088b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x19c);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = ActionPlayedState_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

