// addr: 0x014bab90
// name: FUN_014bab90
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * FUN_014bab90(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Factory allocating a 0x28-byte object and constructing it with FUN_014baa40.
                       No class evidence visible. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a8d8b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x28);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = LobbyCommand_UpdateTournament_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

