// addr: 0x01409000
// name: CWDeck_create_01409000
// subsystem: common/rules/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 CWDeck_create_01409000(void)

{
  uint uVar1;
  undefined4 uVar2;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates 0x94 bytes and constructs a CWDeck; duplicate factory wrapper used
                       by deck-related creation sites. Evidence: direct call to CWDeck_ctor. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01691afb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  local_10 = Mem_Alloc(0x94);
  local_4 = 0;
  if (local_10 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = CWDeck_ctor(uVar1);
  }
  ExceptionList = local_c;
  return uVar2;
}

