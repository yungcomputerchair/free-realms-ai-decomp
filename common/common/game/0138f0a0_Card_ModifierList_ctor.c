// addr: 0x0138f0a0
// name: Card_ModifierList_ctor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void Card_ModifierList_ctor(void) */

void Card_ModifierList_ctor(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Exception-guarded constructor wrapper that initializes a Card modifier-list
                       helper via FUN_0138ecc0. */
  puStack_8 = &LAB_01683b4b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_0138ecc0(DAT_01b839d8 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}

