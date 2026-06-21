// addr: 0x0144bc40
// name: CWDoublePassState_clone
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __fastcall CWDoublePassState_clone(void *param_1)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a CWDoublePassState-sized object and copy-constructs it from the
                       supplied state. Returns null if allocation fails. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169ac6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(300);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = CWDoublePassState_copy_ctor(pvVar1,param_1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

