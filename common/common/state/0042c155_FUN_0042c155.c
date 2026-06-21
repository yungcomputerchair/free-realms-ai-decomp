// addr: 0x0042c155
// name: FUN_0042c155
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_0042c155(void *param_1,undefined4 param_2)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  void *local_c;
  void *local_8;
  
  local_c = param_1;
  local_8 = param_1;
                    /* Generic library/game/deserialization helper with insufficient state-method
                       evidence; body is container manipulation, factory/display-action setup,
                       account/lobby lookup, or broad game utility logic. */
  uVar1 = StdVector_size(param_1);
  uVar2 = FUN_0040af3c();
  if (uVar1 < uVar2) {
    uVar3 = FUN_00422413(*(undefined4 *)((int)param_1 + 8),1,param_2);
    *(undefined4 *)((int)param_1 + 8) = uVar3;
  }
  else {
    FUN_00416f56(*(undefined4 *)((int)param_1 + 8),param_1);
    Vector_insertSingleAndReturnIterator_realloc(&local_c,local_c,local_8,param_2);
  }
  return;
}

