// addr: 0x013d93f0
// name: FUN_013d93f0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * FUN_013d93f0(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Factory allocating a 0x14-byte object and constructing it with FUN_013d9080.
                       Type not identified. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168c04b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x14);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = LobbyCommand_DeleteAdjournedGame_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

