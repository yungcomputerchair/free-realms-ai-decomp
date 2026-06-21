// addr: 0x014554b0
// name: FUN_014554b0
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __thiscall FUN_014554b0(int param_1,int param_2,void *param_3)

{
  void *env;
  void **item;
  uint extraout_EAX;
  int *piVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int local_48;
  int *local_44;
  int *local_3c;
  undefined1 local_38 [12];
  undefined1 local_2c [4];
  void *local_28;
  int local_24;
  undefined4 local_20;
  undefined1 local_1c [4];
  void *local_18;
  undefined4 local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169bf58;
  local_c = ExceptionList;
  item = (void **)(DAT_01b839d8 ^ (uint)&stack0xffffffa4);
  ExceptionList = &local_c;
  local_3c = *(int **)(param_1 + 0x14);
  piVar4 = (int *)*local_3c;
  param_1 = param_1 + 0x10;
  local_48 = param_1;
  local_44 = piVar4;
  if (param_2 == 0) {
    EvaluationEnvironment_tracef(param_3,"Event Card is null!",item);
    uVar2 = extraout_EAX;
  }
  else {
    if (piVar4 == local_3c) {
      FUN_00d83c2d();
    }
    EvaluationEnvironment_tracefWithPrefix(param_3,"value: ");
    local_28 = (void *)0x0;
    local_24 = 0;
    local_20 = 0;
    local_4 = 0;
    PointerVector_pushBack(local_2c,&param_2,item);
    iVar3 = param_1;
    while( true ) {
      if ((iVar3 == 0) || (iVar3 != param_1)) {
        FUN_00d83c2d();
      }
      if (piVar4 == local_3c) break;
      local_18 = (void *)0x0;
      local_14 = 0;
      local_10 = 0;
      local_4._0_1_ = 1;
      FUN_012fa910();
      local_4 = CONCAT31(local_4._1_3_,2);
      if (iVar3 == 0) {
        FUN_00d83c2d();
      }
      if (piVar4 == *(int **)(iVar3 + 4)) {
        FUN_00d83c2d();
      }
      FUN_013010e0(piVar4[4]);
      env = param_3;
      FUN_01301590(param_3);
      piVar1 = EvaluationEnvironment_getGame(env);
      if (piVar4 == *(int **)(iVar3 + 4)) {
        FUN_00d83c2d();
      }
      (**(code **)(*piVar1 + 0x188))(local_2c,piVar4[3],local_38,local_1c,param_3);
      ValueDataList_assign(local_2c,local_1c);
      local_4._0_1_ = 1;
      FUN_01300cd0();
      local_4 = (uint)local_4._1_3_ << 8;
      if (local_18 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(local_18);
      }
      local_18 = (void *)0x0;
      local_14 = 0;
      local_10 = 0;
      RBTreeIterator_increment(&local_48);
      iVar3 = local_48;
      piVar4 = local_44;
    }
    if ((local_28 != (void *)0x0) && (local_24 - (int)local_28 >> 2 != 0)) {
      FUN_01387470(param_2);
      local_4 = 0xffffffff;
      if (local_28 == (void *)0x0) {
        ExceptionList = local_c;
        return 1;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
    local_4 = 0xffffffff;
    if (local_28 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
    uVar2 = 0;
  }
  ExceptionList = local_c;
  return uVar2 & 0xffffff00;
}

