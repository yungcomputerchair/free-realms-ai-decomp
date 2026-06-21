// addr: 0x014bdcb0
// name: FUN_014bdcb0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * FUN_014bdcb0(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Factory allocating a 0xc-byte object and constructing it with FUN_014bd9d0.
                       Class identity not visible. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a965b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0xc);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = LobbyCommand_SetFlag_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

