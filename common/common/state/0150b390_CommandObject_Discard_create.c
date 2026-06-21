// addr: 0x0150b390
// name: CommandObject_Discard_create
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int CommandObject_Discard_create(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates and constructs a CommandObject_Discard, returning null on
                       allocation failure. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b5b3b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x140);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = CommandObject_Discard_ctor(pvVar1);
  }
  if (pvVar1 != (void *)0x0) {
    ExceptionList = local_c;
    return (int)pvVar1 + 8;
  }
  ExceptionList = local_c;
  return 0;
}

