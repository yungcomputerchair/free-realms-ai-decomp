// addr: 0x01482820
// name: ActionPlayedState_getWhatCardSelected2WithText
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall ActionPlayedState_getWhatCardSelected2WithText(int *param_1,void *param_2)

{
  uint uVar1;
  void *pvVar2;
  int *piVar3;
  undefined4 uVar4;
  int *piVar5;
  int iVar6;
  undefined8 uVar7;
  char *fmt;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_44 [4];
  void *pvStack_40;
  undefined4 uStack_30;
  uint uStack_2c;
  undefined1 auStack_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Implements the operation identified by referenced string '#owner#'. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a0b93;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffa8;
  ExceptionList = &local_c;
  fmt = "ActionPlayedState::getWhatCardSelected2WithText";
  pvVar2 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar2,fmt,uVar1);
  if ((param_1[0x41] == 0) && (*(char *)((int)param_1 + 0x161) != '\0')) {
    *(undefined1 *)((int)param_1 + 0x10d) = 1;
    param_1[0x45] = 0xc;
    param_1[0x44] = 2;
    pvVar2 = Mem_Alloc(0x13c);
    local_4 = 0;
    if (pvVar2 == (void *)0x0) {
      piVar3 = (int *)0x0;
    }
    else {
      piVar3 = (int *)GetTargetState_ctor(param_1[2]);
    }
    local_4 = 0xffffffff;
    uVar4 = (**(code **)(*param_1 + 0xb8))
                      (0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
    uVar7 = StateMachineState_getGame(uVar4);
    pvVar2 = find_play_element_in_maps((void *)uVar7,(int)((ulonglong)uVar7 >> 0x20));
    piVar5 = (int *)FUN_00d8d382(pvVar2);
    MessageText_copy_ctor(auStack_28,param_2);
    local_4._0_1_ = 1;
    local_4._1_3_ = 0;
    if (piVar5 != (int *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_44,"#title#");
      local_4._0_1_ = 2;
      uVar4 = Card_getPropertyMap();
      FUN_01402480(abStack_44,uVar4);
      local_4._0_1_ = 1;
      if (0xf < uStack_2c) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_40);
      }
      uStack_2c = 0xf;
      uStack_30 = 0;
      pvStack_40 = (void *)((uint)pvStack_40 & 0xffffff00);
      uVar4 = (**(code **)(*piVar5 + 0x30))
                        (0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
      iVar6 = FUN_00d8d382(uVar4);
      if (iVar6 != 0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_44,"#owner#");
        local_4._0_1_ = 3;
        uVar4 = Card_getPropertyMap();
        FUN_01402480(abStack_44,uVar4);
        local_4._0_1_ = 1;
        FUN_0041f1d7();
      }
    }
    (**(code **)(*piVar3 + 0x104))(auStack_28);
    param_1[0x52] = *(int *)((int)param_2 + 4);
    param_1[0x53] = *(int *)((int)param_2 + 8);
    MessageText_copyFrom((int)param_2 + 0xc);
    EvaluationEnvironment_setTarget2Return(1);
    EvaluationEnvironment_setTarget1Return(0);
    StateMachine_setCurrentState(piVar3);
    local_4 = 0xffffffff;
    MessageText_dtor();
  }
  ExceptionList = local_c;
  return param_1[0x41];
}

