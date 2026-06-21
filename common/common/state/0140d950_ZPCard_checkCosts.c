// addr: 0x0140d950
// name: ZPCard_checkCosts
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __thiscall ZPCard_checkCosts(int *param_1,int *param_2,void *param_3)

{
  char cVar1;
  char cVar2;
  void *sourceEnv;
  undefined4 uVar3;
  void *pvVar4;
  int iVar5;
  int *extraout_EAX;
  char *pcVar6;
  undefined1 auStack_bc [4];
  int iStack_b8;
  undefined1 auStack_b0 [16];
  undefined1 auStack_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* Implements the operation identified by referenced string 'Return value was:'.
                        */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016921a1;
  local_c = ExceptionList;
  sourceEnv = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff38);
  ExceptionList = &local_c;
  uVar3 = FUN_01321f20();
  uVar3 = PlayElement_getId(uVar3);
  pcVar6 = "ZPCard::checkCosts %d, %d";
  pvVar4 = (void *)FUN_01340340();
  Game_logGeneral(pvVar4,pcVar6,uVar3);
  cVar1 = CommandObject_setActionReturnKey5();
  if (cVar1 == '\0') {
    cVar1 = FUN_01383520(0x3d,0);
    if (cVar1 == '\0') {
      iVar5 = (**(code **)(*param_1 + 0x28))
                        (0,&Player::RTTI_Type_Descriptor,&CWPlayer::RTTI_Type_Descriptor,0);
      pvVar4 = (void *)FUN_01340340();
      pvVar4 = PlayArea_findPlayerElementById(pvVar4,iVar5);
      iVar5 = FUN_00d8d382(pvVar4);
      if (iVar5 == 0) {
        pcVar6 = "Couldn\'t get player.";
        pvVar4 = (void *)FUN_01340340();
        Game_logGeneral(pvVar4,pcVar6,sourceEnv);
        ExceptionList = local_c;
        return 0;
      }
      PropertySerializer_writeCompositeValueB(param_2);
      if (extraout_EAX != (int *)0x0) {
        EvaluationEnvironment_ctor();
        uStack_4 = 0;
        EvaluationEnvironment_copyFrom(auStack_a0,param_3,sourceEnv);
        FUN_013815c0(1);
        FUN_012fa910();
        uStack_4 = CONCAT31(uStack_4._1_3_,1);
        cVar1 = (**(code **)(*extraout_EAX + 0x38))(auStack_bc,auStack_a0);
        if ((cVar1 == '\0') || ((iStack_b8 == 1 && (cVar2 = FUN_0123c370(), cVar2 == '\0')))) {
          Game_logGeneral((void *)param_1[0xc],"cost condition failed,",sourceEnv);
          if (cVar1 != '\0') {
            Game_logGeneral((void *)param_1[0xc],"Return value was:",sourceEnv);
            ValueData_printDebug(auStack_bc,(void *)param_1[0xc]);
          }
LAB_0140dbbe:
          uStack_4 = uStack_4 & 0xffffff00;
          FUN_01300cd0();
          uStack_4 = 0xffffffff;
          FUN_01385460();
          ExceptionList = local_c;
          return 0;
        }
        EvaluationEnvironment_addCommandObjectChecked(auStack_b0);
        uStack_4._0_1_ = 2;
        cVar1 = (**(code **)(*param_1 + 500))(auStack_a0,auStack_b0);
        if (cVar1 == '\0') {
          pcVar6 = "Costs validation failed.";
          pvVar4 = (void *)FUN_01340340();
          Game_logGeneral(pvVar4,pcVar6,sourceEnv);
          CommandObjectVector_clear(auStack_a0);
          uStack_4 = CONCAT31(uStack_4._1_3_,1);
          FUN_01314560();
          goto LAB_0140dbbe;
        }
        CommandObjectVector_clear(auStack_a0);
        uStack_4._0_1_ = 1;
        FUN_01314560();
        uStack_4 = (uint)uStack_4._1_3_ << 8;
        FUN_01300cd0();
        uStack_4 = 0xffffffff;
        FUN_01385460();
      }
      pvVar4 = (void *)param_1[0xc];
      pcVar6 = "Passed cost validation.";
    }
    else {
      pcVar6 = "Skip Cost";
      pvVar4 = (void *)FUN_01340340();
    }
  }
  else {
    pcVar6 = "Is automatic";
    pvVar4 = (void *)FUN_01340340();
  }
  Game_logGeneral(pvVar4,pcVar6,sourceEnv);
  ExceptionList = local_c;
  return 1;
}

