// addr: 0x01477430
// name: CustomChoiceDialogState_button
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 __thiscall
CustomChoiceDialogState_button(int *param_1,uint param_2,int param_3,int param_4)

{
  code *pcVar1;
  char cVar2;
  uint uVar3;
  undefined4 *******pppppppuVar4;
  undefined4 *******pppppppuVar5;
  void *pvVar6;
  int iVar7;
  undefined4 *******pppppppuVar8;
  void *state;
  undefined4 uVar9;
  undefined4 *puVar10;
  char *pcVar11;
  uint uVar12;
  undefined4 ******local_74;
  int local_70;
  void *local_6c [2];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_64 [4];
  undefined4 ******local_60 [4];
  int local_50;
  uint local_4c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_48 [4];
  undefined4 ******local_44 [4];
  int local_34;
  uint local_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  undefined4 ******local_28 [4];
  int local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Implements the operation identified by referenced string 'customchoice dialog
                       got buttonPressed in wrong state. %d'. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169fa43;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_74;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffff7c;
  ExceptionList = &local_c;
  local_70 = param_4;
  local_4c = 0xf;
  local_50 = 0;
  local_60[0] = (undefined4 ******)((uint)local_60[0] & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_64,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)(param_1 + 0x23),0,0xffffffff);
  local_4 = 0;
  local_14 = 0xf;
  local_18 = 0;
  local_28[0] = (undefined4 ******)((uint)local_28[0] & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_2c,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)(param_1 + 0x2a),0,0xffffffff);
  local_4._0_1_ = 1;
  local_30 = 0xf;
  local_34 = 0;
  local_44[0] = (undefined4 ******)((uint)local_44[0] & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_48,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                       *)(param_1 + 0x31),0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (local_4c < 0x10) {
    local_74 = local_60;
LAB_0147750b:
    pppppppuVar8 = (undefined4 *******)local_60[0];
    if (local_4c < 0x10) {
      pppppppuVar8 = local_60;
    }
    if (local_74 < pppppppuVar8) goto LAB_0147752f;
    pppppppuVar8 = (undefined4 *******)local_60[0];
    if (local_4c < 0x10) {
      pppppppuVar8 = local_60;
    }
    if ((undefined4 *******)((int)pppppppuVar8 + local_50) < local_74) goto LAB_0147752f;
  }
  else {
    local_74 = local_60[0];
    if ((undefined4 *******)local_60[0] != (undefined4 *******)0x0) goto LAB_0147750b;
LAB_0147752f:
    FUN_00d83c2d();
  }
  pppppppuVar8 = (undefined4 *******)local_60[0];
  if (local_4c < 0x10) {
    pppppppuVar8 = local_60;
  }
  pppppppuVar8 = (undefined4 *******)((int)pppppppuVar8 + local_50);
  if (pppppppuVar8 == (undefined4 *******)0x0) {
LAB_01477572:
    FUN_00d83c2d();
  }
  else {
    pppppppuVar4 = (undefined4 *******)local_60[0];
    if (local_4c < 0x10) {
      pppppppuVar4 = local_60;
    }
    if (pppppppuVar8 < pppppppuVar4) goto LAB_01477572;
    pppppppuVar4 = (undefined4 *******)local_60[0];
    if (local_4c < 0x10) {
      pppppppuVar4 = local_60;
    }
    if ((undefined4 *******)((int)pppppppuVar4 + local_50) < pppppppuVar8) goto LAB_01477572;
  }
  if (local_4c < 0x10) {
    pppppppuVar4 = local_60;
LAB_01477592:
    pppppppuVar5 = (undefined4 *******)local_60[0];
    if (local_4c < 0x10) {
      pppppppuVar5 = local_60;
    }
    if (pppppppuVar4 < pppppppuVar5) goto LAB_014775b2;
    pppppppuVar5 = (undefined4 *******)local_60[0];
    if (local_4c < 0x10) {
      pppppppuVar5 = local_60;
    }
    if ((undefined4 *******)(local_50 + (int)pppppppuVar5) < pppppppuVar4) goto LAB_014775b2;
  }
  else {
    pppppppuVar4 = (undefined4 *******)local_60[0];
    if ((undefined4 *******)local_60[0] != (undefined4 *******)0x0) goto LAB_01477592;
LAB_014775b2:
    FUN_00d83c2d();
  }
  local_6c[0] = (void *)((uint)local_6c[0] & 0xffffff00);
  FUN_012a26c0(local_6c,pppppppuVar4,pppppppuVar8,local_64,local_74,_tolower,local_6c[0],local_6c[0]
              );
  if (local_14 < 0x10) {
    local_74 = local_28;
LAB_01477603:
    pppppppuVar8 = (undefined4 *******)local_28[0];
    if (local_14 < 0x10) {
      pppppppuVar8 = local_28;
    }
    if (local_74 < pppppppuVar8) goto LAB_0147762b;
    pppppppuVar8 = (undefined4 *******)local_28[0];
    if (local_14 < 0x10) {
      pppppppuVar8 = local_28;
    }
    if ((undefined4 *******)((int)pppppppuVar8 + local_18) < local_74) goto LAB_0147762b;
  }
  else {
    local_74 = local_28[0];
    if ((undefined4 *******)local_28[0] != (undefined4 *******)0x0) goto LAB_01477603;
LAB_0147762b:
    FUN_00d83c2d();
  }
  pppppppuVar8 = (undefined4 *******)local_28[0];
  if (local_14 < 0x10) {
    pppppppuVar8 = local_28;
  }
  pppppppuVar8 = (undefined4 *******)((int)pppppppuVar8 + local_18);
  if (pppppppuVar8 == (undefined4 *******)0x0) {
LAB_0147766e:
    FUN_00d83c2d();
  }
  else {
    pppppppuVar4 = (undefined4 *******)local_28[0];
    if (local_14 < 0x10) {
      pppppppuVar4 = local_28;
    }
    if (pppppppuVar8 < pppppppuVar4) goto LAB_0147766e;
    pppppppuVar4 = (undefined4 *******)local_28[0];
    if (local_14 < 0x10) {
      pppppppuVar4 = local_28;
    }
    if ((undefined4 *******)((int)pppppppuVar4 + local_18) < pppppppuVar8) goto LAB_0147766e;
  }
  if (local_14 < 0x10) {
    pppppppuVar4 = local_28;
LAB_0147768e:
    pppppppuVar5 = (undefined4 *******)local_28[0];
    if (local_14 < 0x10) {
      pppppppuVar5 = local_28;
    }
    if (pppppppuVar4 < pppppppuVar5) goto LAB_014776ae;
    pppppppuVar5 = (undefined4 *******)local_28[0];
    if (local_14 < 0x10) {
      pppppppuVar5 = local_28;
    }
    if ((undefined4 *******)((int)pppppppuVar5 + local_18) < pppppppuVar4) goto LAB_014776ae;
  }
  else {
    pppppppuVar4 = (undefined4 *******)local_28[0];
    if ((undefined4 *******)local_28[0] != (undefined4 *******)0x0) goto LAB_0147768e;
LAB_014776ae:
    FUN_00d83c2d();
  }
  local_6c[0] = (void *)((uint)local_6c[0] & 0xffffff00);
  FUN_012a26c0(local_6c,pppppppuVar4,pppppppuVar8,local_2c,local_74,_tolower,local_6c[0],local_6c[0]
              );
  if (local_30 < 0x10) {
    local_74 = local_44;
LAB_014776f9:
    pppppppuVar8 = (undefined4 *******)local_44[0];
    if (local_30 < 0x10) {
      pppppppuVar8 = local_44;
    }
    if (local_74 < pppppppuVar8) goto LAB_01477721;
    pppppppuVar8 = (undefined4 *******)local_44[0];
    if (local_30 < 0x10) {
      pppppppuVar8 = local_44;
    }
    if ((undefined4 *******)((int)pppppppuVar8 + local_34) < local_74) goto LAB_01477721;
  }
  else {
    local_74 = local_44[0];
    if ((undefined4 *******)local_44[0] != (undefined4 *******)0x0) goto LAB_014776f9;
LAB_01477721:
    FUN_00d83c2d();
  }
  pppppppuVar8 = (undefined4 *******)local_44[0];
  if (local_30 < 0x10) {
    pppppppuVar8 = local_44;
  }
  pppppppuVar8 = (undefined4 *******)((int)pppppppuVar8 + local_34);
  if (pppppppuVar8 == (undefined4 *******)0x0) {
LAB_01477764:
    FUN_00d83c2d();
  }
  else {
    pppppppuVar4 = (undefined4 *******)local_44[0];
    if (local_30 < 0x10) {
      pppppppuVar4 = local_44;
    }
    if (pppppppuVar8 < pppppppuVar4) goto LAB_01477764;
    pppppppuVar4 = (undefined4 *******)local_44[0];
    if (local_30 < 0x10) {
      pppppppuVar4 = local_44;
    }
    if ((undefined4 *******)((int)pppppppuVar4 + local_34) < pppppppuVar8) goto LAB_01477764;
  }
  if (local_30 < 0x10) {
    pppppppuVar4 = local_44;
LAB_01477784:
    pppppppuVar5 = (undefined4 *******)local_44[0];
    if (local_30 < 0x10) {
      pppppppuVar5 = local_44;
    }
    if (pppppppuVar4 < pppppppuVar5) goto LAB_014777a4;
    pppppppuVar5 = (undefined4 *******)local_44[0];
    if (local_30 < 0x10) {
      pppppppuVar5 = local_44;
    }
    if ((undefined4 *******)((int)pppppppuVar5 + local_34) < pppppppuVar4) goto LAB_014777a4;
  }
  else {
    pppppppuVar4 = (undefined4 *******)local_44[0];
    if ((undefined4 *******)local_44[0] != (undefined4 *******)0x0) goto LAB_01477784;
LAB_014777a4:
    FUN_00d83c2d();
  }
  local_6c[0] = (void *)((uint)local_6c[0] & 0xffffff00);
  FUN_012a26c0(local_6c,pppppppuVar4,pppppppuVar8,local_48,local_74,_tolower,local_6c[0],local_6c[0]
              );
  if (*(uint *)(local_70 + 0x18) < 0x10) {
    iVar7 = local_70 + 4;
  }
  else {
    iVar7 = *(int *)(local_70 + 4);
  }
  puVar10 = (undefined4 *)(local_70 + 4);
  pcVar11 = "CustomChoiceDialogState::button pressed, player %d, button %d buttonText: %s";
  uVar12 = param_2;
  pvVar6 = (void *)StateMachineState_getGame
                             ("CustomChoiceDialogState::button pressed, player %d, button %d buttonText: %s"
                              ,param_2,param_3,iVar7);
  Game_logGeneral(pvVar6,pcVar11,uVar12);
  if (param_2 == param_1[0x3e]) {
    if (param_3 != 1) {
      if (param_3 == 2) {
        cVar2 = FUN_012a2610(local_70,local_2c);
        if (cVar2 != '\0') {
          if (0xf < *(uint *)(local_70 + 0x18)) {
            puVar10 = (undefined4 *)*puVar10;
          }
          pppppppuVar8 = (undefined4 *******)local_28[0];
          if (local_14 < 0x10) {
            pppppppuVar8 = local_28;
          }
          pcVar11 = "button2: %s != buttonText: %s";
LAB_01477a08:
          pvVar6 = (void *)StateMachineState_getGame(pcVar11,pppppppuVar8,puVar10);
          Game_logGeneral(pvVar6,pcVar11,pppppppuVar8);
          local_4._0_1_ = 1;
          FUN_0041f1d7();
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_0041f1d7();
          local_4 = 0xffffffff;
          FUN_0041f1d7();
          ExceptionList = local_c;
          return 0;
        }
      }
      else {
        cVar2 = FUN_012a2610(local_70,local_48);
        if (cVar2 != '\0') {
          if (0xf < *(uint *)(local_70 + 0x18)) {
            puVar10 = (undefined4 *)*puVar10;
          }
          pppppppuVar8 = (undefined4 *******)local_44[0];
          if (local_30 < 0x10) {
            pppppppuVar8 = local_44;
          }
          pcVar11 = "button3: %s != buttonText: %s";
          goto LAB_01477a08;
        }
      }
LAB_01477a91:
      iVar7 = param_1[0x49];
      if (iVar7 != 3) {
        pcVar11 = "customchoice dialog got buttonPressed in wrong state. %d";
        pvVar6 = (void *)StateMachineState_getGame();
        Game_logGeneral(pvVar6,pcVar11,iVar7);
        local_4 = CONCAT31(local_4._1_3_,1);
        if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
          _free(local_44[0]);
        }
        local_30 = 0xf;
        local_34 = 0;
        local_44[0] = (undefined4 ******)((uint)local_44[0] & 0xffffff00);
        local_4 = (uint)local_4._1_3_ << 8;
        if (local_14 < 0x10) {
          local_14 = 0xf;
          local_18 = 0;
          local_28[0] = (undefined4 ******)((uint)local_28[0] & 0xffffff00);
          local_4 = 0xffffffff;
          if (local_4c < 0x10) {
            ExceptionList = local_c;
            return 2;
          }
                    /* WARNING: Subroutine does not return */
          _free(local_60[0]);
        }
                    /* WARNING: Subroutine does not return */
        _free(local_28[0]);
      }
      pcVar11 = "sending ButtonPressed to server.";
      pvVar6 = (void *)StateMachineState_getGame();
      Game_logGeneral(pvVar6,pcVar11,uVar3);
      pvVar6 = Mem_Alloc(0x30);
      local_4._0_1_ = 3;
      local_6c[0] = pvVar6;
      if (pvVar6 == (void *)0x0) {
        pvVar6 = (void *)0x0;
      }
      else {
        state = (void *)StateMachineState_getGame();
        pvVar6 = GameCommand_ButtonPressed_ctor(pvVar6,state);
      }
      local_4._0_1_ = 2;
      set_field_4(pvVar6,param_2);
      StateCommand_setField24(pvVar6,param_3);
      StateMachineState_getGame(param_2,pvVar6);
      Game_dispatchCommandToPlayerOrAll(param_2,pvVar6);
      pcVar1 = *(code **)(*param_1 + 0x3c);
      param_1[0x48] = param_3;
      param_1[0x49] = 4;
      uVar9 = (*pcVar1)();
      local_4 = CONCAT31(local_4._1_3_,1);
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        _free(local_44[0]);
      }
      local_30 = 0xf;
      local_34 = 0;
      local_44[0] = (undefined4 ******)((uint)local_44[0] & 0xffffff00);
      local_4 = (uint)local_4._1_3_ << 8;
      if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
        _free(local_28[0]);
      }
      local_14 = 0xf;
      local_18 = 0;
      local_28[0] = (undefined4 ******)((uint)local_28[0] & 0xffffff00);
      local_4 = 0xffffffff;
      if (local_4c < 0x10) {
        ExceptionList = local_c;
        return uVar9;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_60[0]);
    }
    pppppppuVar8 = (undefined4 *******)local_60[0];
    if (local_4c < 0x10) {
      pppppppuVar8 = local_60;
    }
    iVar7 = FUN_00f942a0(0,*(undefined4 *)(local_70 + 0x14),pppppppuVar8,local_50);
    if (iVar7 == 0) goto LAB_01477a91;
    if (0xf < *(uint *)(local_70 + 0x18)) {
      puVar10 = (undefined4 *)*puVar10;
    }
    pppppppuVar8 = (undefined4 *******)local_60[0];
    if (local_4c < 0x10) {
      pppppppuVar8 = local_60;
    }
    pcVar11 = "button1: %s != buttonText: %s";
    pvVar6 = (void *)StateMachineState_getGame("button1: %s != buttonText: %s",pppppppuVar8,puVar10)
    ;
    Game_logGeneral(pvVar6,pcVar11,pppppppuVar8);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      _free(local_44[0]);
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = (undefined4 ******)((uint)local_44[0] & 0xffffff00);
    local_4 = (uint)local_4._1_3_ << 8;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28[0]);
    }
  }
  else {
    local_4 = CONCAT31(local_4._1_3_,1);
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      _free(local_44[0]);
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44[0] = (undefined4 ******)((uint)local_44[0] & 0xffffff00);
    local_4 = (uint)local_4._1_3_ << 8;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28[0]);
    }
  }
  local_28[0] = (undefined4 ******)((uint)local_28[0] & 0xffffff00);
  local_4 = 0xffffffff;
  local_14 = 0xf;
  local_18 = 0;
  local_30 = 0xf;
  local_34 = 0;
  if (local_4c < 0x10) {
    ExceptionList = local_c;
    return 0;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_60[0]);
}

