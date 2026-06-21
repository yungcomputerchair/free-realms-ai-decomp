// addr: 0x013ef790
// name: ProcessEventEmissionStateForActivePlayer_createWithMachine
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __fastcall ProcessEventEmissionStateForActivePlayer_createWithMachine(void *param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a ProcessEventEmissionStateForActivePlayer with a
                       state machine/context argument. Returns null on allocation failure. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168f1cb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x148);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = ProcessEventEmissionStateForActivePlayer_ctorWithMachine(pvVar1,param_1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

