// addr: 0x013932e0
// name: Card_ModifierTree_ctor3
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void Card_ModifierTree_ctor3(void) */

void Card_ModifierTree_ctor3(void)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Third exception-guarded constructor wrapper for a Card modifier-tree/list
                       helper via FUN_0138f140. */
  puStack_8 = &LAB_016841ab;
  local_c = ExceptionList;
  local_4 = 0xffffffff;
  ExceptionList = &local_c;
  FUN_0138f140(DAT_01b839d8 ^ (uint)&local_c);
  ExceptionList = local_c;
  return;
}

