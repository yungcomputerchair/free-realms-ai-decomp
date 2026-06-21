// addr: 0x013443c0
// name: PlayElement_changeParent
// subsystem: common/rules/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall PlayElement_changeParent(int param_1,int param_2,undefined4 param_3)

{
  uint uVar1;
  undefined4 extraout_EDX;
  undefined4 extraout_EDX_00;
  undefined4 extraout_EDX_01;
  undefined4 extraout_EDX_02;
  undefined4 extraout_EDX_03;
  undefined4 extraout_EDX_04;
  undefined4 key_;
  undefined4 extraout_EDX_05;
  uint uVar2;
  
                    /* Changes a PlayElement parent/containment type, detaching from existing
                       containers, updating parent and containment fields, and notifying the new
                       containment. Evidence: log string "PlayElement::changeParent(parent: %d
                       containmentType: %d)". */
  Game_logGeneral(*(void **)(param_1 + 0x30),
                  "PlayElement::changeParent(parent: %d containmentType: %d)",
                  *(undefined4 *)(param_2 + 0x34));
  uVar1 = *(uint *)(param_1 + 0x24);
  key_ = extraout_EDX;
  if (uVar1 < *(uint *)(param_1 + 0x20)) {
    FUN_00d83c2d();
    key_ = extraout_EDX_00;
  }
  uVar2 = *(uint *)(param_1 + 0x20);
  if (*(uint *)(param_1 + 0x24) < uVar2) {
    FUN_00d83c2d();
    key_ = extraout_EDX_01;
  }
  while( true ) {
    if (param_1 == -0x1c) {
      FUN_00d83c2d();
      key_ = extraout_EDX_02;
    }
    if (uVar2 == uVar1) break;
    if (param_1 == -0x1c) {
      FUN_00d83c2d();
    }
    if (*(uint *)(param_1 + 0x24) <= uVar2) {
      FUN_00d83c2d();
    }
    FUN_01342eb0(param_1,*(undefined4 *)(param_1 + 0x38));
    key_ = extraout_EDX_03;
    if (*(uint *)(param_1 + 0x24) <= uVar2) {
      FUN_00d83c2d();
      key_ = extraout_EDX_04;
    }
    uVar2 = uVar2 + 4;
  }
  if (*(int *)(param_1 + 0x18) != 0) {
    FUN_01342eb0(param_1,*(undefined4 *)(param_1 + 0x38));
    key_ = extraout_EDX_05;
  }
  *(int *)(param_1 + 0x18) = param_2;
  *(undefined4 *)(param_1 + 0x38) = param_3;
  findOrInsertObjectKey(param_2,key_);
  return;
}

