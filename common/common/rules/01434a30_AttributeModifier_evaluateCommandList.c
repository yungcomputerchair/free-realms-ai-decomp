// addr: 0x01434a30
// name: AttributeModifier_evaluateCommandList
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall AttributeModifier_evaluateCommandList(int param_1,void *param_2,void *param_3)

{
  char cVar1;
  void *sourceEnv;
  int iVar2;
  void *env;
  int *piVar3;
  uint uVar4;
  undefined1 auStack_ac [4];
  int iStack_a8;
  undefined1 auStack_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* Evaluates an AttributeModifier command list in a child environment and stores
                       dynamic-card/boolean returns. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01696cf6;
  local_c = ExceptionList;
  sourceEnv = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff48);
  ExceptionList = &local_c;
  iVar2 = AttributeModifier_getAttributeId(param_2);
  if (iVar2 == *(int *)(param_1 + 0x48)) {
    env = (void *)FUN_01418e00();
    piVar3 = EvaluationEnvironment_getGame(param_3);
    cVar1 = (**(code **)(*piVar3 + 0x1f8))(*(undefined4 *)(param_1 + 0x58));
    if (cVar1 == '\0') {
      EvaluationEnvironment_ctor();
      uStack_4 = 0;
      EvaluationEnvironment_copyFrom(auStack_a0,param_3,sourceEnv);
      EvaluationEnvironment_setCurrentTargetFromElement(auStack_a0,env,sourceEnv);
      EvaluationEnvironment_setBooleanKey4(0);
      set_play_element_id_field(auStack_a0,*(void **)(param_1 + 0x58));
      EvaluationEnvironment_setDynamicCardReturn(*(undefined4 *)(param_1 + 0x5c));
      FUN_012fa910();
      uStack_4 = CONCAT31(uStack_4._1_3_,1);
      uVar4 = CommandObjectList_evaluateToValueData((void *)(param_1 + 0x4c),auStack_ac);
      if (((char)uVar4 != '\0') || ((iStack_a8 == 1 && (cVar1 = FUN_0123c370(), cVar1 != '\0')))) {
        uStack_4 = uStack_4 & 0xffffff00;
        FUN_01300cd0();
        uStack_4 = 0xffffffff;
        FUN_01385460();
        ExceptionList = local_c;
        return 0;
      }
      uStack_4 = uStack_4 & 0xffffff00;
      FUN_01300cd0();
      uStack_4 = 0xffffffff;
      FUN_01385460();
    }
  }
  ExceptionList = local_c;
  return 1;
}

