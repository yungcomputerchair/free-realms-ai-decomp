// addr: 0x01478410
// name: CustomChoiceDialogState_updateState
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall CustomChoiceDialogState_updateState(int *param_1)

{
  bool bVar1;
  uint uVar2;
  void *pvVar3;
  int iVar4;
  int *piVar5;
  undefined4 uVar6;
  char *pcVar7;
  uint uVar8;
  undefined1 local_290 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_274 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_258 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_23c [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_220 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_204 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_1e8 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_1cc [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_1b0 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_194 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_178 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_15c [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_140 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_124 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_108 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_ec [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_d0 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_b4 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_98 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_7c [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_60 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_44 [28];
  void *local_28 [2];
  int iStack_20;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Runs the CustomChoiceDialogState state machine: display dialog, check
                       preconditions, execute effects, and finish. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169fcac;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xfffffd68;
  ExceptionList = &local_c;
  iVar4 = param_1[0x49];
  pcVar7 = "ChoiceChoiceDialogState::updateState %d";
  pvVar3 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar3,pcVar7,iVar4);
  iVar4 = param_1[0x49];
  switch(iVar4) {
  case 0:
  case 3:
  case 6:
    pcVar7 = 
    "CustomChoiceDialogState::updateState - InvalidState, execution should never be here! %d";
    pvVar3 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar3,pcVar7,iVar4);
    ExceptionList = local_c;
    return 0;
  case 1:
    pvVar3 = (void *)StateMachineState_getGame();
    bVar1 = Game_getFlag_14d(pvVar3);
    if (bVar1) {
      pcVar7 = "CustomChoiceDialogState::updateState - check action preconditions";
      pvVar3 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar3,pcVar7,uVar2);
      CustomChoiceDialogState_checkActionPreconditions();
      uVar6 = (**(code **)(*param_1 + 0x3c))();
      ExceptionList = local_c;
      return uVar6;
    }
    param_1[0x49] = 6;
    MessageText_ctor();
    local_4 = 0;
    pvVar3 = EvaluationEnvironment_getOriginCard((void *)param_1[0x3a]);
    if (pvVar3 == (void *)0x0) {
      iVar4 = StateMachineState_getGame();
      uVar2 = *(uint *)(iVar4 + 0x20);
      uVar8 = 0x319e;
    }
    else {
      iVar4 = StateMachineState_getGame();
      uVar2 = *(uint *)(iVar4 + 0x20);
      uVar8 = 0x28d6;
    }
    set_pair_fields_4_8(local_290,uVar8,uVar2);
    pvVar3 = EvaluationEnvironment_getOriginCard((void *)param_1[0x3a]);
    if (pvVar3 != (void *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_b4,"#title#");
      local_4._0_1_ = 1;
      EvaluationEnvironment_getOriginCard((void *)param_1[0x3a]);
      uVar6 = Card_getPropertyMap();
      FUN_01402480(local_b4,uVar6);
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_0041f1d7();
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_44,"0");
    local_4._0_1_ = 2;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_204,"0");
    local_4._0_1_ = 3;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_124,"0");
    local_4._0_1_ = 4;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_23c,"CustomChoice");
    local_4 = CONCAT31(local_4._1_3_,5);
    (**(code **)(*param_1 + 0x90))
              (0,local_23c,param_1 + 0x15,local_124,local_204,local_44,local_290);
    iStack_20._0_1_ = 4;
    FUN_0041f1d7();
    iStack_20._0_1_ = 3;
    FUN_0041f1d7();
    iStack_20._0_1_ = 2;
    FUN_0041f1d7();
    iStack_20 = (uint)iStack_20._1_3_ << 8;
    FUN_0041f1d7();
    break;
  case 2:
    pcVar7 = "CustomChoiceDialogState::updateState - display phase dialog";
    pvVar3 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar3,pcVar7,uVar2);
    MessageText_ctor();
    local_4 = 6;
    pvVar3 = EvaluationEnvironment_getOriginCard((void *)param_1[0x3a]);
    if (pvVar3 == (void *)0x0) {
      iVar4 = StateMachineState_getGame();
      uVar2 = *(uint *)(iVar4 + 0x20);
      uVar8 = 0x319e;
    }
    else {
      iVar4 = StateMachineState_getGame();
      uVar2 = *(uint *)(iVar4 + 0x20);
      uVar8 = 0x28d6;
    }
    set_pair_fields_4_8(local_290,uVar8,uVar2);
    pvVar3 = EvaluationEnvironment_getOriginCard((void *)param_1[0x3a]);
    if (pvVar3 != (void *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_1cc,"#title#");
      local_4._0_1_ = 7;
      EvaluationEnvironment_getOriginCard((void *)param_1[0x3a]);
      uVar6 = Card_getPropertyMap();
      FUN_01402480(local_1cc,uVar6);
      local_4 = CONCAT31(local_4._1_3_,6);
      FUN_0041f1d7();
    }
    if ((char)param_1[0x4a] == '\0') {
      if (*(char *)((int)param_1 + 0x129) == '\0') {
        if ((uint)param_1[0x30] < 0x10) {
          piVar5 = param_1 + 0x2b;
        }
        else {
          piVar5 = (int *)param_1[0x2b];
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)local_28,
                   (char *)piVar5);
        local_4._0_1_ = 0x15;
        if ((uint)param_1[0x29] < 0x10) {
          piVar5 = param_1 + 0x24;
        }
        else {
          piVar5 = (int *)param_1[0x24];
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_60,(char *)piVar5);
        local_4._0_1_ = 0x16;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_98,"CustomChoice");
        local_4 = CONCAT31(local_4._1_3_,0x17);
        (**(code **)(*param_1 + 0x8c))(0,local_98,param_1 + 0x15,local_60,local_28,local_290);
        iStack_20._0_1_ = 0x16;
        FUN_0041f1d7();
        iStack_20._0_1_ = 0x15;
        FUN_0041f1d7();
        iStack_20 = CONCAT31(iStack_20._1_3_,6);
        FUN_0041f1d7();
        param_1[0x49] = 3;
      }
      else if (param_1[0x48] == 0) {
        if ((uint)param_1[0x30] < 0x10) {
          piVar5 = param_1 + 0x2b;
        }
        else {
          piVar5 = (int *)param_1[0x2b];
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_220,(char *)piVar5);
        local_4._0_1_ = 0xc;
        if ((uint)param_1[0x29] < 0x10) {
          piVar5 = param_1 + 0x24;
        }
        else {
          piVar5 = (int *)param_1[0x24];
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_258,(char *)piVar5);
        local_4._0_1_ = 0xd;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_274,"CustomChoice");
        local_4 = CONCAT31(local_4._1_3_,0xe);
        (**(code **)(*param_1 + 0x8c))(0,local_274,param_1 + 0x15,local_258,local_220,local_290);
        iStack_20._0_1_ = 0xd;
        FUN_0041f1d7();
        iStack_20._0_1_ = 0xc;
        FUN_0041f1d7();
        iStack_20 = CONCAT31(iStack_20._1_3_,6);
        FUN_0041f1d7();
        param_1[0x49] = 3;
      }
      else if (param_1[0x48] == 1) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_178,"");
        local_4._0_1_ = 0xf;
        if ((uint)param_1[0x29] < 0x10) {
          piVar5 = param_1 + 0x24;
        }
        else {
          piVar5 = (int *)param_1[0x24];
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_1b0,(char *)piVar5);
        local_4._0_1_ = 0x10;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_1e8,"CustomChoice");
        local_4 = CONCAT31(local_4._1_3_,0x11);
        (**(code **)(*param_1 + 0x8c))(0,local_1e8,param_1 + 0x15,local_1b0,local_178,local_290);
        iStack_20._0_1_ = 0x10;
        FUN_0041f1d7();
        iStack_20._0_1_ = 0xf;
        FUN_0041f1d7();
        iStack_20 = CONCAT31(iStack_20._1_3_,6);
        FUN_0041f1d7();
        param_1[0x49] = 3;
      }
      else {
        if ((uint)param_1[0x30] < 0x10) {
          piVar5 = param_1 + 0x2b;
        }
        else {
          piVar5 = (int *)param_1[0x2b];
        }
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_d0,(char *)piVar5);
        local_4._0_1_ = 0x12;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_108,"");
        local_4._0_1_ = 0x13;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_140,"CustomChoice");
        local_4 = CONCAT31(local_4._1_3_,0x14);
        (**(code **)(*param_1 + 0x8c))(0,local_140,param_1 + 0x15,local_108,local_d0,local_290);
        iStack_20._0_1_ = 0x13;
        FUN_0041f1d7();
        iStack_20._0_1_ = 0x12;
        FUN_0041f1d7();
        iStack_20 = CONCAT31(iStack_20._1_3_,6);
        FUN_0041f1d7();
        param_1[0x49] = 3;
      }
    }
    else {
      if ((uint)param_1[0x37] < 0x10) {
        piVar5 = param_1 + 0x32;
      }
      else {
        piVar5 = (int *)param_1[0x32];
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_15c,(char *)piVar5);
      local_4._0_1_ = 8;
      if ((uint)param_1[0x30] < 0x10) {
        piVar5 = param_1 + 0x2b;
      }
      else {
        piVar5 = (int *)param_1[0x2b];
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_7c,(char *)piVar5);
      local_4._0_1_ = 9;
      if ((uint)param_1[0x29] < 0x10) {
        piVar5 = param_1 + 0x24;
      }
      else {
        piVar5 = (int *)param_1[0x24];
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_194,(char *)piVar5);
      local_4._0_1_ = 10;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_ec,"CustomChoice");
      local_4 = CONCAT31(local_4._1_3_,0xb);
      (**(code **)(*param_1 + 0x90))
                (0,local_ec,param_1 + 0x15,local_194,local_7c,local_15c,local_290);
      iStack_20._0_1_ = 10;
      FUN_0041f1d7();
      iStack_20._0_1_ = 9;
      FUN_0041f1d7();
      iStack_20._0_1_ = 8;
      FUN_0041f1d7();
      iStack_20 = CONCAT31(iStack_20._1_3_,6);
      FUN_0041f1d7();
      param_1[0x49] = 3;
    }
    break;
  case 4:
    pcVar7 = "CustomChoiceDialogState::updateState - do effect";
    pvVar3 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar3,pcVar7,uVar2);
    uVar6 = CustomChoiceDialogState_doEffect();
    ExceptionList = local_c;
    return uVar6;
  case 5:
    pcVar7 = "CustomChoiceDialogState::updateState - finish";
    pvVar3 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar3,pcVar7,uVar2);
    ExceptionList = local_c;
    return 1;
  default:
    ExceptionList = local_c;
    return 0;
  }
  iStack_20 = 0xffffffff;
  MessageText_dtor();
  ExceptionList = local_28[0];
  return 2;
}

