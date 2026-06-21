// addr: 0x01398000
// name: Card_collectModifierPredicate68Elements
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool Card_collectModifierPredicate68Elements(void * this) */

bool __fastcall Card_collectModifierPredicate68Elements(void *this)

{
  uint uVar1;
  undefined4 *puVar2;
  char cVar3;
  uint uVar4;
  uint uVar5;
  int *piVar6;
  undefined4 local_30;
  undefined4 local_2c;
  undefined1 auStack_28 [4];
  int *local_24;
  undefined4 *puStack_20;
  undefined4 uStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 uStack_c;
  
                    /* Collects play elements/cards matching modifier predicate 68 into a vector;
                       includes existing nested entries and, if allowed, candidates from
                       Card_checkModifierPredicate68. */
  uStack_c = 0xffffffff;
  puStack_10 = &LAB_016849e8;
  local_14 = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffb0;
  ExceptionList = &local_14;
  local_24 = *(int **)((int)this + 0x50);
  piVar6 = (int *)*local_24;
  while( true ) {
    if (this == (void *)0xffffffb4) {
      FUN_00d83c2d(uVar4);
    }
    if (piVar6 == local_24) break;
    if (this == (void *)0xffffffb4) {
      FUN_00d83c2d(uVar4);
    }
    if (piVar6 == (int *)*(int *)((int)this + 0x50)) {
      FUN_00d83c2d(uVar4);
    }
    uVar1 = piVar6[7];
    if (uVar1 < (uint)piVar6[6]) {
      FUN_00d83c2d(uVar4);
    }
    if (piVar6 == (int *)*(int *)((int)this + 0x50)) {
      FUN_00d83c2d();
    }
    uVar5 = piVar6[6];
    if ((uint)piVar6[7] < uVar5) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (piVar6 == (int *)0xffffffec) {
        FUN_00d83c2d();
      }
      if (uVar5 == uVar1) break;
      if (piVar6 == (int *)0xffffffec) {
        FUN_00d83c2d();
      }
      if ((uint)piVar6[7] <= uVar5) {
        FUN_00d83c2d();
      }
      if (*(int *)(uVar5 + 4) != 0) {
        if (((uint)piVar6[7] <= uVar5) && (FUN_00d83c2d(), (uint)piVar6[7] <= uVar5)) {
          FUN_00d83c2d();
        }
        local_30 = *(undefined4 *)(uVar5 + 4);
        local_2c = *(undefined4 *)(uVar5 + 8);
        FUN_01395880(&local_30);
      }
      if ((uint)piVar6[7] <= uVar5) {
        FUN_00d83c2d();
      }
      uVar5 = uVar5 + 0xc;
    }
    FUN_0134f4a0();
  }
  cVar3 = (**(code **)(*(int *)this + 0x1e8))();
  if (cVar3 == '\0') {
    local_24 = (undefined4 *)0x0;
    puStack_20 = (undefined4 *)0x0;
    uStack_1c = 0;
    uStack_c = 0;
    Card_checkModifierPredicate68(this,auStack_28,3);
    (**(code **)(*(int *)this + 0x114))(auStack_28,1);
    puVar2 = puStack_20;
    if (puStack_20 < local_24) {
      FUN_00d83c2d();
    }
    piVar6 = local_24;
    if (puStack_20 < local_24) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0x28) {
        FUN_00d83c2d();
      }
      if (piVar6 == puVar2) break;
      if (&stack0x00000000 == (undefined1 *)0x28) {
        FUN_00d83c2d();
      }
      if (puStack_20 <= piVar6) {
        FUN_00d83c2d();
      }
      local_30 = *piVar6;
      local_2c = PlayElement_getId();
      FUN_01395880(&local_30);
      if (puStack_20 <= piVar6) {
        FUN_00d83c2d();
      }
      piVar6 = piVar6 + 1;
    }
    uStack_c = 0xffffffff;
    if (local_24 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_24);
    }
  }
  ExceptionList = local_14;
  return true;
}

