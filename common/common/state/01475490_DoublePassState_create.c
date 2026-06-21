// addr: 0x01475490
// name: DoublePassState_create
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * DoublePassState_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a DoublePassState, returning null on allocation
                       failure. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169f6cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(300);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = DoublePassState_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

