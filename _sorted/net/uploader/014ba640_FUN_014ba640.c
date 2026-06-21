// addr: 0x014ba640
// name: FUN_014ba640
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * FUN_014ba640(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Factory allocating a 0x3c-byte object and constructing it with FUN_014ba520.
                       Class identity unknown. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a8ccb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x3c);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = LobbyCommand_UpdateLobbyStats_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

