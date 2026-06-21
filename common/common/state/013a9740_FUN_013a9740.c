// addr: 0x013a9740
// name: FUN_013a9740
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_013a9740(void *param_1,int param_2)

{
  undefined4 *puVar1;
  int *this;
  undefined4 *puVar2;
  undefined4 uVar3;
  undefined4 *puVar4;
  uint local_8;
  void *local_4;
  
  local_4 = param_1;
                    /* Generic library/game/deserialization helper with insufficient state-method
                       evidence; body is container manipulation, factory/display-action setup,
                       account/lobby lookup, or broad game utility logic. */
  Account_clearOwnedObjectMap(param_1);
  puVar1 = *(undefined4 **)(param_2 + 8);
  if (puVar1 < *(undefined4 **)(param_2 + 4)) {
    FUN_00d83c2d();
  }
  puVar4 = *(undefined4 **)(param_2 + 4);
  if (*(undefined4 **)(param_2 + 8) < puVar4) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (param_2 == 0) {
      FUN_00d83c2d();
    }
    if (puVar4 == puVar1) break;
    if (param_2 == 0) {
      FUN_00d83c2d();
    }
    if (*(undefined4 **)(param_2 + 8) <= puVar4) {
      FUN_00d83c2d();
    }
    this = (int *)*puVar4;
    local_8 = get_field_4(this);
    puVar2 = (undefined4 *)FUN_013a8f40(&local_8);
    uVar3 = (**(code **)(*this + 0x38))();
    *puVar2 = uVar3;
    if (*(undefined4 **)(param_2 + 8) <= puVar4) {
      FUN_00d83c2d();
    }
    puVar4 = puVar4 + 1;
  }
  return;
}

