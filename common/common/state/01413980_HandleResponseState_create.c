// addr: 0x01413980
// name: HandleResponseState_create
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * HandleResponseState_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a HandleResponseState-sized object and runs the default
                       HandleResponseState constructor. Returns null on allocation failure. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01692c1b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x15c);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = HandleResponseState_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

