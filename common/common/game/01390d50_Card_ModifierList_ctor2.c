// addr: 0x01390d50
// name: Card_ModifierList_ctor2
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void Card_ModifierList_ctor2(void) */

void Card_ModifierList_ctor2(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Alternate exception-guarded constructor wrapper for a Card modifier-list
                       helper via FUN_0138ecc0. */
  puStack_8 = &LAB_01683d0b;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FUN_0138ecc0(DAT_01b839d8 ^ (uint)&local_c);
  ExceptionList = local_c;
  return;
}

