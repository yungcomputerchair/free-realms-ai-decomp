// addr: 0x013f7a80
// name: StateMachine_create
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * StateMachine_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates 0x1bc bytes and constructs a StateMachine. Constructor callee
                       identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168f8ab;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x1bc);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = StateMachine_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

