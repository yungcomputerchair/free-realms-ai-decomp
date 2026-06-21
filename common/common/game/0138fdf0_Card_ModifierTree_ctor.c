// addr: 0x0138fdf0
// name: Card_ModifierTree_ctor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void Card_ModifierTree_ctor(void) */

void Card_ModifierTree_ctor(void)

{
  undefined1 local_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Exception-guarded constructor wrapper that initializes a Card
                       modifier-tree/list helper via FUN_0138f140. */
  puStack_8 = &LAB_01683c6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0xffffffff;
  FUN_0138f140(DAT_01b839d8 ^ (uint)local_10);
  ExceptionList = local_c;
  return;
}

