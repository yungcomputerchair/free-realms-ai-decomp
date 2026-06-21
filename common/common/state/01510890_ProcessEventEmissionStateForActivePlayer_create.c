// addr: 0x01510890
// name: ProcessEventEmissionStateForActivePlayer_create
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * ProcessEventEmissionStateForActivePlayer_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a ProcessEventEmissionStateForActivePlayer,
                       returning null on allocation failure. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b68fb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x148);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = ProcessEventEmissionStateForActivePlayer_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

