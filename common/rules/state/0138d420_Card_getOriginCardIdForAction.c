// addr: 0x0138d420
// name: Card_getOriginCardIdForAction
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall Card_getOriginCardIdForAction(int param_1,int param_2)

{
  undefined4 *puVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  
                    /* Searches a Card's action/origin mapping vector at offsets 0xb4/0xb8 for an
                       action id and returns the associated element id; falls back to the card's own
                       id. Evidence is CWActionPlayedState using it to compute originCard for an
                       action. */
  puVar1 = *(undefined4 **)(param_1 + 0xb8);
  if (puVar1 < *(undefined4 **)(param_1 + 0xb4)) {
    FUN_00d83c2d();
  }
  puVar3 = *(undefined4 **)(param_1 + 0xb4);
  if (*(undefined4 **)(param_1 + 0xb8) < puVar3) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (param_1 == -0xb0) {
      FUN_00d83c2d();
    }
    if (puVar3 == puVar1) {
      uVar2 = PlayElement_getId();
      return uVar2;
    }
    if (param_1 == -0xb0) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)(param_1 + 0xb8) <= puVar3) {
      FUN_00d83c2d();
    }
    uVar2 = *puVar3;
    if (*(undefined4 **)(param_1 + 0xb8) <= puVar3) {
      FUN_00d83c2d();
    }
    if (param_2 == puVar3[1]) break;
    if (*(undefined4 **)(param_1 + 0xb8) <= puVar3) {
      FUN_00d83c2d();
    }
    puVar3 = puVar3 + 2;
  }
  return uVar2;
}

