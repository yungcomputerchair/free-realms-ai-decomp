// addr: 0x0144baf0
// name: CWProcessEventEmissionState_createWithMachine
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __fastcall CWProcessEventEmissionState_createWithMachine(void *param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a CWProcessEventEmissionState-sized object and constructs it with a
                       state machine/context argument. Returns null on failure. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169abdb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x148);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = CWProcessEventEmissionState_ctorWithMachine(pvVar1,param_1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

