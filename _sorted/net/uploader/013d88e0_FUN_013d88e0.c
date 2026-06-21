// addr: 0x013d88e0
// name: FUN_013d88e0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * FUN_013d88e0(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Factory allocating a 0x18-byte object and constructing it with FUN_013d8520.
                       No class evidence is visible. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168be6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x18);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = LobbyCommand_AcceptAdjournedGame_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

