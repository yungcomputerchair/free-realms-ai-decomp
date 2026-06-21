// addr: 0x013d8e80
// name: FUN_013d8e80
// subsystem: common/common/lobby
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 FUN_013d8e80(void)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168bf5b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0x14);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = LobbyCommand_OfferAdjournedGame_ctor(uVar1);
  }
  ExceptionList = local_c;
  return uVar2;
}

