// addr: 0x01413010
// name: FUN_01413010
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_01413010(int *param_1)

{
  char cVar1;
  uint uVar2;
  uint uVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 uVar6;
  int extraout_EAX;
  undefined4 uVar7;
  uint extraout_EAX_00;
  int *piVar8;
  int iVar9;
  void *pvVar10;
  undefined4 unaff_EBP;
  char *pcVar11;
  undefined1 auStack_7c [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_60 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_44 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_28 [24];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* Small helper/dispatcher using calls: FUN_013f6130; FUN_0145c4d0;
                       FUN_0142a6d0; Environment_getObjectForIntegerValueOne; FUN_0041f1d7;
                       FUN_013f5a00. No class-identifying evidence is present. */
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_01692ae0;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffff74;
  ExceptionList = &local_c;
  uVar3 = get_field_11c((void *)param_1[0x46]);
  param_1[0x47] = 2;
  pvVar4 = (void *)StateMachineState_getGame();
  pvVar4 = Game_getCurrentTurn(pvVar4);
  uVar5 = get_field_8(pvVar4);
  param_1[0x4d] = uVar5;
  uVar6 = FUN_0142a6b0();
  Environment_getObjectForIntegerValueOne();
  if (extraout_EAX != 0) {
    cVar1 = FUN_01383810();
    if (cVar1 == '\0') {
      Environment_getObjectForIntegerValueOne();
      uVar7 = GamePlayer_getPlayerId();
      pcVar11 = "Setting player from environment: %d";
      pvVar4 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar4,pcVar11,uVar7);
      if (param_1[0x4d] != 0) {
        pvVar4 = (void *)StateMachineState_getGame();
        pvVar4 = Game_getCurrentTurn(pvVar4);
        uVar2 = get_field_8(pvVar4);
        Environment_getObjectForIntegerValueOne();
        if (extraout_EAX_00 != uVar2) {
          pvVar4 = (void *)StateMachineState_getGame();
          piVar8 = Game_getCurrentTurn(pvVar4);
          iVar9 = (**(code **)(*piVar8 + 0x3c))();
          param_1[6] = iVar9;
          MessageText_ctor();
          iStack_4 = 0;
          iVar9 = StateMachineState_getGame();
          set_pair_fields_4_8(auStack_7c,0x28b9,*(uint *)(iVar9 + 0x20));
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_28,"");
          iStack_4._0_1_ = 1;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_44,"");
          iStack_4._0_1_ = 2;
          std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
          basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_60,"");
          iStack_4._0_1_ = 3;
          iVar9 = *param_1;
          uVar7 = GamePlayer_getPlayerId(abStack_60,auStack_7c,abStack_44,abStack_28,auStack_7c);
          (**(code **)(iVar9 + 0x94))(uVar7);
          iStack_4._0_1_ = 2;
          FUN_0041f1d7();
          iStack_4._0_1_ = 1;
          FUN_0041f1d7();
          iStack_4 = (uint)iStack_4._1_3_ << 8;
          FUN_0041f1d7();
          iStack_4 = 0xffffffff;
          MessageText_dtor();
        }
      }
      Environment_getObjectForIntegerValueOne();
      uVar7 = GamePlayer_getPlayerId();
      ReturnValueMap_setInteger(4,uVar7);
      goto LAB_01413231;
    }
  }
  pcVar11 = "Not Setting player.";
  pvVar4 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar4,pcVar11,uVar2);
LAB_01413231:
  StateMachine_pushPendingState(uVar6);
  pvVar4 = (void *)(**(code **)(*param_1 + 0x124))(uVar3);
  if (pvVar4 == (void *)0x0) {
    FUN_012f5dc0("couldn\'t get state to push! %d",unaff_EBP);
    uVar6 = 0;
  }
  else {
    pvVar10 = get_field_1c_address(pvVar4);
    if (*(uint *)((int)pvVar10 + 0x18) < 0x10) {
      iVar9 = (int)pvVar10 + 4;
    }
    else {
      iVar9 = *(int *)((int)pvVar10 + 4);
    }
    pcVar11 = "pushing state: %s";
    pvVar10 = (void *)StateMachineState_getGame();
    Game_logGeneral(pvVar10,pcVar11,iVar9);
    uVar6 = StateMachine_setCurrentState(pvVar4);
  }
  ExceptionList = pvStack_10;
  return uVar6;
}

