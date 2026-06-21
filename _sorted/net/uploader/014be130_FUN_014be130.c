// addr: 0x014be130
// name: FUN_014be130
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * FUN_014be130(void)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Factory allocating a 0x14-byte object and constructing it with FUN_014bdde0.
                       No type evidence visible. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a974b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x14);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = LobbyCommand_SetDraftReady_ctor(pvVar1);
  }
  ExceptionList = local_c;
  return pvVar1;
}

