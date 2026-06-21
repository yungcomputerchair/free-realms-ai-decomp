// addr: 0x01471c80
// name: DrawCardState_create
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * DrawCardState_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a DrawCardState, returning null on allocation
                       failure. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169f23b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x128);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = DrawCardState_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

