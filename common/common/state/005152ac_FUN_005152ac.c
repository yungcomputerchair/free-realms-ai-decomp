// addr: 0x005152ac
// name: FUN_005152ac
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
FUN_005152ac(int param_1,undefined4 *param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 uVar1;
  undefined4 uVar2;
  bool bVar3;
  int local_c;
  int iStack_8;
  
                    /* Generic library/game/deserialization helper with insufficient state-method
                       evidence; body is container manipulation, factory/display-action setup,
                       account/lobby lookup, or broad game utility logic. */
  local_c = param_1;
  iStack_8 = param_1;
  CheckedTreeIterator_ctor(**(undefined4 **)(param_1 + 4),param_1);
  bVar3 = CheckedTreeIterator_equals(&param_3,&local_c);
  if (bVar3) {
    CheckedTreeIterator_ctor(*(undefined4 *)(param_1 + 4),param_1);
    bVar3 = CheckedTreeIterator_equals(&stack0x00000010,&local_c);
    if (bVar3) {
      FUN_004fb6c2();
      FUN_004df5d1(param_2);
      return param_2;
    }
  }
  bVar3 = CheckedTreeIterator_equals(&param_3,&stack0x00000010);
  uVar1 = param_3;
  uVar2 = param_4;
  while (!bVar3) {
    param_3 = uVar1;
    param_4 = uVar2;
    FUN_004d21f9();
    FUN_0050c2c9(&local_c,uVar1,uVar2);
    bVar3 = CheckedTreeIterator_equals(&param_3,&stack0x00000010);
    uVar1 = param_3;
    uVar2 = param_4;
  }
  *param_2 = uVar1;
  param_2[1] = uVar2;
  return param_2;
}

