// addr: 0x014a9ee0
// name: FUN_014a9ee0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * FUN_014a9ee0(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates a 0xc-byte object using constructor helper FUN_014a9c00. Exact
                       class is not visible in this thunk. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a5b5b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0xc);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = TradeCommand_ClearAcceptState_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

