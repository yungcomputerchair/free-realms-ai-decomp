// addr: 0x01346f40
// name: FUN_01346f40
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined1 __fastcall
FUN_01346f40(undefined4 param_1,int param_2,int *param_3,undefined4 param_4,void *param_5,
            undefined4 param_6)

{
  undefined1 uVar1;
  void *value;
  void *pvVar2;
  int actionId_;
  void *vector;
  undefined1 auStack_1c [4];
  void *pvStack_18;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Generic library/game/deserialization helper with insufficient state-method
                       evidence; body is container manipulation, factory/display-action setup,
                       account/lobby lookup, or broad game utility logic. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0167d108;
  local_c = ExceptionList;
  value = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffd4);
  ExceptionList = &local_c;
  pvVar2 = Card_getActionByID(param_3,param_2);
  EvaluationEnvironment_setActionReturn(pvVar2);
  pvVar2 = Card_getActionByID(param_3,actionId_);
  if (pvVar2 == (void *)0x0) {
    uVar1 = 0;
  }
  else {
    uVar1 = (**(code **)(*param_3 + 0xb0))(pvVar2,param_6);
    EvaluationEnvironment_addCommandObjectChecked(auStack_1c);
    pvVar2 = pvStack_14;
    uStack_4 = 0;
    if (pvStack_14 < pvStack_18) {
      FUN_00d83c2d();
    }
    vector = pvStack_18;
    if (pvStack_14 < pvStack_18) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0x1c) {
        FUN_00d83c2d();
      }
      if (vector == pvVar2) break;
      if (&stack0x00000000 == (undefined1 *)0x1c) {
        FUN_00d83c2d();
      }
      if (pvStack_14 <= vector) {
        FUN_00d83c2d();
      }
      CommandObjectVector_pushBack(param_5,vector,value);
      if (pvStack_14 <= vector) {
        FUN_00d83c2d();
      }
      vector = (void *)((int)vector + 4);
    }
    uStack_4 = 0xffffffff;
    if (pvStack_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_18);
    }
  }
  ExceptionList = local_c;
  return uVar1;
}

