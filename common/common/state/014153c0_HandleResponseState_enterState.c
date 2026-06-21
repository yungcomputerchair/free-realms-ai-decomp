// addr: 0x014153c0
// name: HandleResponseState_enterState
// subsystem: common/common/rules
// source (binary assert): common/common/state/HandleResponseState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall HandleResponseState_enterState(int param_1)

{
  char cVar1;
  bool bVar2;
  uint duration_;
  void *pvVar3;
  void *card;
  void *this;
  int iVar4;
  undefined4 *puVar5;
  undefined4 uVar6;
  void *pvVar7;
  undefined8 uVar8;
  char *text;
  undefined1 auStack_70 [16];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_60 [28];
  undefined1 auStack_44 [56];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Processes a HandleResponseState entry: resolves target/action return values,
                       builds or dispatches CommandObject_EmitTextMessage commands, and substitutes
                       target pronoun tokens. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01692e18;
  local_c = ExceptionList;
  duration_ = DAT_01b839d8 ^ (uint)&stack0xffffff7c;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0xf4) != 0) {
    if (*(int **)(param_1 + 0x118) != (int *)0x0) {
      pvVar3 = (void *)(**(code **)(**(int **)(param_1 + 0x118) + 0x40))();
      if (pvVar3 != (void *)0x0) {
        card = (void *)CommandObject_getOriginCardCached();
        pvVar7 = *(void **)(param_1 + 0x118);
        this = (void *)StateMachineState_getGame();
        Game_addCardCommand(this,pvVar3,pvVar7,card,duration_);
      }
    }
    if ((*(int *)(param_1 + 0x10c) != 0) &&
       (*(int *)(param_1 + 0x110) - *(int *)(param_1 + 0x10c) >> 2 != 0)) {
      FUN_01402f80(0);
      iVar4 = CommandObject_getDurationMap();
      iVar4 = FUN_00f942a0(0,*(undefined4 *)(iVar4 + 0x14),"CommandObject_EmitTextMessage",0x1d);
      if (iVar4 == 0) {
        CommandObjectList_ctor(auStack_44);
        uStack_4 = 0;
        puVar5 = (undefined4 *)FUN_01402f80(0);
        (**(code **)(*(int *)*puVar5 + 0x44))(auStack_44);
        uStack_4 = 0xffffffff;
        CommandObjectList_dtor(auStack_44);
      }
    }
    cVar1 = FUN_01383c30();
    if (cVar1 != '\0') {
      bVar2 = true;
      pvVar3 = (void *)StateMachineState_getCurrentTurn();
      set_flag_84(pvVar3,bVar2);
    }
    uVar6 = StateMachineState_resumePreviousWaitState();
    ExceptionList = local_c;
    return uVar6;
  }
  iVar4 = *(int *)(param_1 + 0x120);
  if (iVar4 == 6) {
    *(undefined4 *)(param_1 + 0x120) = 5;
    iVar4 = StateMachine_popReturnValueMapWithKey(5);
    if (iVar4 == 0) {
      iVar4 = StateMachine_popReturnValueMap();
      if (iVar4 == 0) {
        FUN_012f5a60("returnValueMap","..\\common\\common\\state\\HandleResponseState.cpp",0x25d);
      }
    }
    cVar1 = PointerVector_iteratorNotAtEnd(5);
    if (cVar1 != '\0') {
      cVar1 = ReturnValueMap_hasIntegerKey(5);
      if (cVar1 == '\0') {
        FUN_012f5a60("returnValueMap->hasIntegerKey(kActionReturn)",
                     "..\\common\\common\\state\\HandleResponseState.cpp",0x25f);
      }
      uVar6 = ReturnValueMap_getInteger(5);
      *(undefined4 *)(param_1 + 0x124) = uVar6;
    }
    StateMachine_destroyReturnValueMap(iVar4);
    if (*(int *)(param_1 + 0x124) == 1) {
      cVar1 = FUN_01383c30();
      if (cVar1 != '\0') {
        bVar2 = true;
        pvVar3 = (void *)StateMachineState_getCurrentTurn();
        set_flag_84(pvVar3,bVar2);
      }
      ExceptionList = local_c;
      return 1;
    }
    if (*(int *)(param_1 + 0x124) == 2) {
      cVar1 = FUN_01383c30();
      if (cVar1 != '\0') {
        bVar2 = true;
        pvVar3 = (void *)StateMachineState_getCurrentTurn();
        set_flag_84(pvVar3,bVar2);
      }
      if (*(undefined4 **)(param_1 + 0x118) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(param_1 + 0x118))(1);
      }
      *(undefined4 *)(param_1 + 0x118) = 0;
      *(undefined4 *)(param_1 + 0x11c) = 0;
      *(undefined4 *)(param_1 + 0x124) = 3;
    }
  }
  else if (iVar4 == 7) {
    *(undefined4 *)(param_1 + 0x120) = 5;
  }
  else if (iVar4 == 8) {
    *(undefined4 *)(param_1 + 0x120) = 5;
    *(undefined4 *)(param_1 + 0x11c) = 2;
    iVar4 = StateMachine_peekReturnValueMap();
    if (iVar4 != 0) {
      cVar1 = PointerVector_iteratorNotAtEnd(1);
      if (cVar1 != '\0') {
        cVar1 = ReturnValueMap_hasIntegerKey(1);
        if (cVar1 == '\0') {
          FUN_012f5a60("returnValueMap->hasIntegerKey(kTarget1Return)",
                       "..\\common\\common\\state\\HandleResponseState.cpp",0x285);
        }
        uVar6 = ReturnValueMap_getInteger(1);
        uVar8 = StateMachineState_getGame(uVar6);
        pvVar3 = find_play_element_in_maps((void *)uVar8,(int)((ulonglong)uVar8 >> 0x20));
        if (pvVar3 != (void *)0x0) {
          pvVar7 = EvaluationEnvironment_resolveTarget(*(void **)(param_1 + 0xe8));
          if (pvVar7 == (void *)0x0) {
            iVar4 = FUN_01313290();
            if (iVar4 != 0) {
              FUN_01402f80(0);
              text = "CommandObject_EmitTextMessage";
              pvVar7 = (void *)CommandObject_getDurationMap();
              bVar2 = TokenString_equalsCString(pvVar7,text);
              if (bVar2) {
                puVar5 = (undefined4 *)FUN_01402f80(0);
                FUN_00d8d382(*puVar5,0,&CommandObject::RTTI_Type_Descriptor,
                             &CommandObject_EmitTextMessage::RTTI_Type_Descriptor,0);
                pvVar3 = (void *)FUN_00d8d382(pvVar3,0,&PlayElement::RTTI_Type_Descriptor,
                                              &Card::RTTI_Type_Descriptor,0);
                uVar6 = FUN_0141f010();
                FUN_012cedd0(uVar6);
                uStack_4 = 1;
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                basic_string<char,std::char_traits<char>,std::allocator<char>_>
                          (abStack_60,"#target#");
                uStack_4._0_1_ = 2;
                pvVar7 = (void *)Card_getPropertyMap();
                TextReplacementList_addStringPair(auStack_70,abStack_60,pvVar7);
                uStack_4._0_1_ = 1;
                FUN_0041f1d7();
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                basic_string<char,std::char_traits<char>,std::allocator<char>_>
                          (abStack_60,"#target_he#");
                uStack_4._0_1_ = 3;
                pvVar7 = Card_getDisplayNameForContext(pvVar3,auStack_44,1);
                uStack_4._0_1_ = 4;
                TextReplacementList_addStringPair(auStack_70,abStack_60,pvVar7);
                uStack_4._0_1_ = 3;
                FUN_0041f1d7();
                uStack_4._0_1_ = 1;
                FUN_0041f1d7();
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                basic_string<char,std::char_traits<char>,std::allocator<char>_>
                          (abStack_60,"#target_his#");
                uStack_4._0_1_ = 5;
                pvVar7 = Card_getDisplayNameForContext(pvVar3,auStack_44,2);
                uStack_4._0_1_ = 6;
                TextReplacementList_addStringPair(auStack_70,abStack_60,pvVar7);
                uStack_4._0_1_ = 5;
                FUN_0041f1d7();
                uStack_4._0_1_ = 1;
                FUN_0041f1d7();
                std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
                basic_string<char,std::char_traits<char>,std::allocator<char>_>
                          (abStack_60,"#target_him#");
                uStack_4._0_1_ = 7;
                pvVar3 = Card_getDisplayNameForContext(pvVar3,auStack_44,3);
                uStack_4._0_1_ = 8;
                TextReplacementList_addStringPair(auStack_70,abStack_60,pvVar3);
                uStack_4._0_1_ = 7;
                FUN_0041f1d7();
                uStack_4 = CONCAT31(uStack_4._1_3_,1);
                FUN_0041f1d7();
                FUN_014232f0(auStack_70);
                uStack_4 = 0xffffffff;
                FUN_012ce9d0();
              }
            }
          }
        }
      }
    }
  }
  uVar6 = FUN_01413a10();
  ExceptionList = local_c;
  return uVar6;
}

