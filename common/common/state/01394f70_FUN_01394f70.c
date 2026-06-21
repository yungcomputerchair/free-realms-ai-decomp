// addr: 0x01394f70
// name: FUN_01394f70
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool card_check_target_modifier_predicates(void * card, void * context) */

bool __fastcall card_check_target_modifier_predicates(void *card,void *context)

{
  int *piVar1;
  int *unaff_EBX;
  int *piVar2;
  int *local_1c;
  undefined4 local_18;
  void *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Evaluates modifier/predicate checks related to card target validity. Exact
                       class/method name is not proven. */
  puStack_8 = &LAB_01684548;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = 0;
  local_14 = (void *)0x0;
  local_10 = 0;
  local_4 = 0;
  (**(code **)(*(int *)card + 0x114))(&local_1c,1,DAT_01b839d8 ^ (uint)&stack0xffffffd4);
  Card_checkModifierPredicate68(card,&stack0xffffffdc,3);
  piVar1 = local_1c;
  if (local_1c < unaff_EBX) {
    FUN_00d83c2d();
  }
  piVar2 = unaff_EBX;
  if (local_1c < unaff_EBX) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (&stack0x00000000 == (undefined1 *)0x24) {
      FUN_00d83c2d();
    }
    if (piVar2 == piVar1) {
      local_c = (void *)0xffffffff;
      if (unaff_EBX == (int *)0x0) {
        ExceptionList = local_14;
        return false;
      }
                    /* WARNING: Subroutine does not return */
      _free(unaff_EBX);
    }
    if (&stack0x00000000 == (undefined1 *)0x24) {
      FUN_00d83c2d();
    }
    if (local_1c <= piVar2) {
      FUN_00d83c2d();
    }
    if (local_4 == *piVar2) break;
    if (local_1c <= piVar2) {
      FUN_00d83c2d();
    }
    piVar2 = piVar2 + 1;
  }
  local_c = (void *)0xffffffff;
  if (unaff_EBX == (int *)0x0) {
    ExceptionList = local_14;
    return true;
  }
                    /* WARNING: Subroutine does not return */
  _free(unaff_EBX);
}

