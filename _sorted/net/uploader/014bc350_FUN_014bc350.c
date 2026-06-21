// addr: 0x014bc350
// name: FUN_014bc350
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * FUN_014bc350(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Factory allocating a 0x18-byte object and constructing it with FUN_014bbfe0.
                       No class evidence visible. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a91eb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x18);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = LobbyCommand_SetTournament_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

