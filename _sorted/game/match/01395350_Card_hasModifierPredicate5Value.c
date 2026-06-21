// addr: 0x01395350
// name: Card_hasModifierPredicate5Value
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Card_hasModifierPredicate5Value(int value_) */

bool Card_hasModifierPredicate5Value(int value_)

{
  int *piVar1;
  int *piVar2;
  bool bVar3;
  uint uVar4;
  void *in_ECX;
  int *piVar5;
  undefined1 local_1c [4];
  int *local_18;
  int *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Returns whether the supplied value appears in the temporary vector produced
                       by Card_checkModifierPredicate64 with selector 5. */
  puStack_8 = &LAB_016845d8;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffcc;
  ExceptionList = &local_c;
  local_18 = (int *)0x0;
  local_14 = (int *)0x0;
  local_10 = 0;
  local_4 = 0;
  Card_checkModifierPredicate64(in_ECX,local_1c,5);
  piVar1 = local_14;
  if (local_14 < local_18) {
    FUN_00d83c2d(uVar4);
  }
  piVar5 = local_18;
  if (local_14 < local_18) {
    FUN_00d83c2d(uVar4);
  }
  for (; (piVar2 = local_14, piVar5 != piVar1 && (*piVar5 != value_)); piVar5 = piVar5 + 1) {
  }
  if (local_14 < local_18) {
    FUN_00d83c2d(uVar4);
  }
  if (&stack0x00000000 == (undefined1 *)0x1c) {
    FUN_00d83c2d(uVar4);
  }
  if (piVar5 == piVar2) {
    local_4 = 0xffffffff;
    if (local_18 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
    bVar3 = false;
  }
  else {
    local_4 = 0xffffffff;
    if (local_18 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_18);
    }
    bVar3 = true;
  }
  ExceptionList = local_c;
  return bVar3;
}

