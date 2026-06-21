// addr: 0x014419a0
// name: FUN_014419a0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * FUN_014419a0(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Factory allocating a 0x7c-byte object and constructing it with FUN_014417c0.
                       Exact class is not identified. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01698d0b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x7c);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = UChatCommand_RequestAddIgnore_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

