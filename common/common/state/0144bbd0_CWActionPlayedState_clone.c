// addr: 0x0144bbd0
// name: CWActionPlayedState_clone
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __fastcall CWActionPlayedState_clone(void *param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a CWActionPlayedState-sized object and copy-constructs it from the
                       supplied state. Returns null if allocation fails. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169ac3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x1a4);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = CWActionPlayedState_copy_ctor(pvVar1,param_1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

