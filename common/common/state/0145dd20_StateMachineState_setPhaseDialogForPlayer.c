// addr: 0x0145dd20
// name: StateMachineState_setPhaseDialogForPlayer
// subsystem: common/common/state
// source (binary assert): common/common/state/StateMachineState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void StateMachineState_setPhaseDialogForPlayer(int playerId_, void * title,
   int phase_, void * text1, void * text2, void * text3) */

void StateMachineState_setPhaseDialogForPlayer
               (int playerId_,void *title,int phase_,void *text1,void *text2,void *text3)

{
  bool bVar1;
  char cVar2;
  uint nameContext_;
  int iVar3;
  void *pvVar4;
  uint uVar5;
  int *piVar6;
  int iVar7;
  char *pcVar8;
  int *piVar9;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar10;
  undefined4 *******pppppppuVar11;
  undefined4 *******pppppppuVar12;
  undefined4 *******pppppppuVar13;
  void *pvVar14;
  char *pcVar15;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *out;
  undefined4 ******local_f8;
  int *local_f4;
  int local_f0;
  void *local_ec;
  void *local_e8;
  undefined4 ******local_e4;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_e0 [2];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_d8 [4];
  void *pvStack_d4;
  undefined4 uStack_c4;
  uint uStack_c0;
  int local_bc;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_b8 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_9c [4];
  void *pvStack_98;
  int iStack_88;
  uint uStack_84;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_80 [4];
  undefined4 ******appppppuStack_7c [4];
  int iStack_6c;
  uint uStack_68;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_64 [4];
  undefined4 ******appppppuStack_60 [4];
  int iStack_50;
  uint uStack_4c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_48 [4];
  void *pvStack_44;
  undefined4 uStack_34;
  uint uStack_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_2c [4];
  void *pvStack_28;
  undefined4 uStack_18;
  uint uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Builds and sends the phase dialog text for a player, substituting title/actor
                       placeholders, checking game-over and valid phase state, and logging the
                       SetPhaseDialogForPlayer arguments. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169d028;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_f8;
  nameContext_ = DAT_01b839d8 ^ (uint)&stack0xfffffef8;
  ExceptionList = &local_c;
  local_e8 = title;
  local_ec = (void *)phase_;
  local_e0[0] = text2;
  local_e4 = text3;
  iVar3 = MessageText_formatWithValueData(local_9c);
  local_4 = 0;
  MessageText_formatWithValueData(local_d8);
  piVar9 = local_f4;
  local_4._0_1_ = 1;
  if (*(uint *)(iVar3 + 0x18) < 0x10) {
    local_f8 = (undefined4 ******)(iVar3 + 4);
  }
  else {
    local_f8 = *(undefined4 *******)(iVar3 + 4);
  }
  if (*(uint *)((int)text2 + 0x18) < 0x10) {
    local_bc = (int)text2 + 4;
  }
  else {
    local_bc = *(int *)((int)text2 + 4);
  }
  if (*(uint *)((int)text1 + 0x18) < 0x10) {
    local_f0 = (int)text1 + 4;
  }
  else {
    local_f0 = *(int *)((int)text1 + 4);
  }
  if (local_f4[2] == 0) {
    FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x4c);
  }
  pcVar15 = "SetPhaseDialogForPlayer %d, %s, %s, %s, %s, %s";
  iVar3 = playerId_;
  pvVar4 = (void *)get_field_4((void *)piVar9[2]);
  Game_logGeneral(pvVar4,pcVar15,iVar3);
  local_4 = (uint)local_4._1_3_ << 8;
  if (0xf < uStack_c0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_d4);
  }
  uStack_c0 = 0xf;
  uStack_c4 = 0;
  pvStack_d4 = (void *)((uint)pvStack_d4 & 0xffffff00);
  local_4 = 0xffffffff;
  if (0xf < uStack_84) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_98);
  }
  uStack_84 = 0xf;
  iStack_88 = 0;
  pvStack_98 = (void *)((uint)pvStack_98 & 0xffffff00);
  if (piVar9[2] == 0) {
    FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x4c);
  }
  pvVar4 = (void *)get_field_4((void *)piVar9[2]);
  bVar1 = unknown_getGameGuardFlag(pvVar4);
  if (bVar1) {
    if (piVar9[2] == 0) {
      FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x4c);
    }
    pcVar15 = "Game is over, not setting phase dialog.";
    pvVar4 = (void *)get_field_4((void *)piVar9[2]);
    Game_logGeneral(pvVar4,pcVar15,nameContext_);
    ExceptionList = local_c;
    return;
  }
  uStack_84 = 0xf;
  iStack_88 = 0;
  pvStack_98 = (void *)((uint)pvStack_98 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_9c,"",0);
  pbVar10 = local_e0[0];
  local_4 = 2;
  StateMachineState_setPhaseDialogFields
            ((void *)piVar9[2],local_e8,local_ec,text1,local_e0[0],local_9c,local_e4);
  local_4 = 0xffffffff;
  if (0xf < uStack_84) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_98);
  }
  uStack_84 = 0xf;
  iStack_88 = 0;
  pvStack_98 = (void *)((uint)pvStack_98 & 0xffffff00);
  if (piVar9[6] == 0) {
    FUN_012f5a60("mPhase != kInvalidPhase","..\\common\\common\\state\\StateMachineState.cpp",0x245)
    ;
  }
  if (piVar9[2] == 0) {
    FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x62);
  }
  pvVar4 = StateMachine_getCurrentTurn((void *)piVar9[2]);
  uVar5 = get_field_8(pvVar4);
  if (uVar5 == 0) {
    ExceptionList = local_c;
    return;
  }
  uStack_68 = 0xf;
  iStack_6c = 0;
  appppppuStack_7c[0] = (undefined4 ******)((uint)appppppuStack_7c[0] & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (abStack_80,text1,0,0xffffffff);
  local_4 = 3;
  uStack_4c = 0xf;
  iStack_50 = 0;
  appppppuStack_60[0] = (undefined4 ******)((uint)appppppuStack_60[0] & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (abStack_64,pbVar10,0,0xffffffff);
  local_4 = CONCAT31(local_4._1_3_,4);
  if (piVar9[2] == 0) {
    FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x4c);
  }
  piVar6 = (int *)get_field_4((void *)piVar9[2]);
  cVar2 = (**(code **)(*piVar6 + 0x1a0))();
  if (cVar2 != '\0') {
    if (piVar9[2] == 0) {
      FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x4c);
    }
    piVar9 = local_f4;
    piVar6 = (int *)get_field_4((void *)local_f4[2]);
    if (piVar9[2] == 0) {
      FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x62);
    }
    pvVar4 = StateMachine_getCurrentTurn((void *)piVar9[2]);
    get_field_8(pvVar4);
    iVar3 = GamePlayer_getPlayerId();
    iVar7 = (**(code **)(*piVar6 + 0x228))();
    if (iVar3 == iVar7) {
      FUN_00f972e0(&DAT_0175b400);
      FUN_00f972e0(&DAT_0175b400);
    }
  }
  piVar9 = local_f4;
  if (local_f4[2] == 0) {
    FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x62);
  }
  pvVar4 = StateMachine_getCurrentTurn((void *)piVar9[2]);
  get_field_8(pvVar4);
  iVar3 = GamePlayer_getPlayerId();
  local_f0 = iVar3;
  if (piVar9[2] == 0) {
    FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x4c);
  }
  get_field_4((void *)piVar9[2]);
  iVar3 = Game_getPlayerDisplayName(local_9c,iVar3);
  local_4._0_1_ = 5;
  if (*(uint *)(iVar3 + 0x18) < 0x10) {
    pcVar15 = (char *)(iVar3 + 4);
  }
  else {
    pcVar15 = *(char **)(iVar3 + 4);
  }
  uStack_14 = 0xf;
  uStack_18 = 0;
  pvStack_28 = (void *)((uint)pvStack_28 & 0xffffff00);
  pcVar8 = pcVar15;
  do {
    cVar2 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar2 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (abStack_2c,pcVar15,(int)pcVar8 - (int)(pcVar15 + 1));
  local_4._0_1_ = 7;
  if (0xf < uStack_84) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_98);
  }
  uStack_84 = 0xf;
  iStack_88 = 0;
  pvStack_98 = (void *)((uint)pvStack_98 & 0xffffff00);
  MessageText_formatWithValueData(abStack_48);
  local_4._0_1_ = 8;
  uStack_c0 = 0xf;
  uStack_c4 = 0;
  pvStack_d4 = (void *)((uint)pvStack_d4 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_d8,"",0);
  local_4._0_1_ = 9;
  uStack_84 = 0xf;
  iStack_88 = 0;
  pvStack_98 = (void *)((uint)pvStack_98 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_9c,"#title#: ",9);
  local_4._0_1_ = 10;
  String_replaceAll(abStack_48,local_9c,local_d8);
  local_4 = CONCAT31(local_4._1_3_,9);
  if (0xf < uStack_84) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_98);
  }
  uStack_84 = 0xf;
  iStack_88 = 0;
  uVar5 = (uint)pvStack_98 >> 8;
  pvStack_98 = (void *)(uVar5 << 8);
  local_4._0_1_ = 8;
  if (0xf < uStack_c0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_d4);
  }
  uStack_c0 = 0xf;
  uStack_c4 = 0;
  pvStack_d4 = (void *)((uint)pvStack_d4 & 0xffffff00);
  uStack_84 = 0xf;
  iStack_88 = 0;
  pvStack_98 = (void *)(uVar5 << 8);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_9c,"#actor#",7)
  ;
  local_4._0_1_ = 0xb;
  String_replaceAll(abStack_48,local_9c,abStack_2c);
  local_4._0_1_ = 8;
  if (0xf < uStack_84) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_98);
  }
  uStack_84 = 0xf;
  iStack_88 = 0;
  pvStack_98 = (void *)((uint)pvStack_98 & 0xffffff00);
  uStack_c0 = 0xf;
  uStack_c4 = 0;
  pvStack_d4 = (void *)((uint)pvStack_d4 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_d8,"#actor_he#",10);
  local_4._0_1_ = 0xc;
  pcVar15 = PlayElement_getDisplayNameVariant((void *)0x1,nameContext_);
  String_replaceAll(abStack_48,local_d8,pcVar15);
  piVar9 = local_f4;
  local_4 = CONCAT31(local_4._1_3_,8);
  if (0xf < uStack_c0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_d4);
  }
  uStack_c0 = 0xf;
  uStack_c4 = 0;
  pvStack_d4 = (void *)((uint)pvStack_d4 & 0xffffff00);
  if (local_f4[2] == 0) {
    FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x4c);
  }
  pvVar4 = (void *)get_field_4((void *)piVar9[2]);
  iVar3 = Game_getMyPlayerID(pvVar4);
  if (local_f0 != iVar3) {
    piVar9 = (int *)StateMachine_getCurrentState();
    cVar2 = (**(code **)(*piVar9 + 0x84))();
    if (cVar2 == '\0') {
      FUN_00f972e0(&DAT_0175b400);
      FUN_00f972e0(&DAT_0175b400);
    }
    MessageText_formatWithValueData(local_9c);
    local_4._0_1_ = 0xd;
    bVar1 = false;
    if (iStack_88 == 0) {
      out = abStack_b8;
      pvVar4 = (void *)StateMachineState_getCurrentTurn();
      pbVar10 = StateMachineState_getPhaseDialogText(pvVar4,out);
      local_4._0_1_ = 0xe;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (local_9c,pbVar10,0,0xffffffff);
      local_4._0_1_ = 0xd;
      FUN_0041f1d7();
      bVar1 = iStack_88 == 0;
    }
    if (!bVar1) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_b8,"");
      local_4._0_1_ = 0xf;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(local_d8,"#title#: ");
      local_4._0_1_ = 0x10;
      String_replaceAll(local_9c,local_d8,abStack_b8);
      local_4._0_1_ = 0xf;
      FUN_0041f1d7();
      local_4._0_1_ = 0xd;
      FUN_0041f1d7();
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_b8,"#actor#");
      local_4._0_1_ = 0x11;
      String_replaceAll(local_9c,abStack_b8,abStack_2c);
      local_4._0_1_ = 0xd;
      FUN_0041f1d7();
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_b8,"#actor_he#");
      local_4._0_1_ = 0x12;
      pcVar15 = PlayElement_getDisplayNameVariant((void *)0x1,nameContext_);
      String_replaceAll(local_9c,abStack_b8,pcVar15);
      local_4._0_1_ = 0xd;
      FUN_0041f1d7();
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (abStack_48,
                 (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                 local_9c,0,0xffffffff);
    }
    local_4 = CONCAT31(local_4._1_3_,8);
    if (0xf < uStack_84) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_98);
    }
    uStack_84 = 0xf;
    iStack_88 = 0;
    pvStack_98 = (void *)((uint)pvStack_98 & 0xffffff00);
  }
  if (uStack_68 < 0x10) {
    local_f8 = appppppuStack_7c;
LAB_0145e623:
    pppppppuVar11 = (undefined4 *******)appppppuStack_7c[0];
    if (uStack_68 < 0x10) {
      pppppppuVar11 = appppppuStack_7c;
    }
    if (local_f8 < pppppppuVar11) goto LAB_0145e650;
    pppppppuVar11 = (undefined4 *******)appppppuStack_7c[0];
    if (uStack_68 < 0x10) {
      pppppppuVar11 = appppppuStack_7c;
    }
    if ((undefined4 *******)((int)pppppppuVar11 + iStack_6c) < local_f8) goto LAB_0145e650;
  }
  else {
    local_f8 = appppppuStack_7c[0];
    if ((undefined4 *******)appppppuStack_7c[0] != (undefined4 *******)0x0) goto LAB_0145e623;
LAB_0145e650:
    FUN_00d83c2d();
  }
  pppppppuVar11 = (undefined4 *******)appppppuStack_7c[0];
  if (uStack_68 < 0x10) {
    pppppppuVar11 = appppppuStack_7c;
  }
  pppppppuVar11 = (undefined4 *******)(iStack_6c + (int)pppppppuVar11);
  if (pppppppuVar11 == (undefined4 *******)0x0) {
LAB_0145e6ac:
    FUN_00d83c2d();
  }
  else {
    pppppppuVar12 = (undefined4 *******)appppppuStack_7c[0];
    if (uStack_68 < 0x10) {
      pppppppuVar12 = appppppuStack_7c;
    }
    if (pppppppuVar11 < pppppppuVar12) goto LAB_0145e6ac;
    pppppppuVar12 = (undefined4 *******)appppppuStack_7c[0];
    if (uStack_68 < 0x10) {
      pppppppuVar12 = appppppuStack_7c;
    }
    if ((undefined4 *******)((int)pppppppuVar12 + iStack_6c) < pppppppuVar11) goto LAB_0145e6ac;
  }
  if (uStack_68 < 0x10) {
    pppppppuVar12 = appppppuStack_7c;
LAB_0145e6d5:
    pppppppuVar13 = (undefined4 *******)appppppuStack_7c[0];
    if (uStack_68 < 0x10) {
      pppppppuVar13 = appppppuStack_7c;
    }
    if (pppppppuVar12 < pppppppuVar13) goto LAB_0145e6fb;
    pppppppuVar13 = (undefined4 *******)appppppuStack_7c[0];
    if (uStack_68 < 0x10) {
      pppppppuVar13 = appppppuStack_7c;
    }
    if ((undefined4 *******)(iStack_6c + (int)pppppppuVar13) < pppppppuVar12) goto LAB_0145e6fb;
  }
  else {
    pppppppuVar12 = (undefined4 *******)appppppuStack_7c[0];
    if ((undefined4 *******)appppppuStack_7c[0] != (undefined4 *******)0x0) goto LAB_0145e6d5;
LAB_0145e6fb:
    FUN_00d83c2d();
  }
  local_e0[0] = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                ((uint)local_e0[0] & 0xffffff00);
  FUN_012a26c0(local_e0,pppppppuVar12,pppppppuVar11,abStack_80,local_f8,_toupper,local_e0[0],
               local_e0[0]);
  if (uStack_4c < 0x10) {
    local_f8 = appppppuStack_60;
LAB_0145e748:
    pppppppuVar11 = (undefined4 *******)appppppuStack_60[0];
    if (uStack_4c < 0x10) {
      pppppppuVar11 = appppppuStack_60;
    }
    if (local_f8 < pppppppuVar11) goto LAB_0145e779;
    pppppppuVar11 = (undefined4 *******)appppppuStack_60[0];
    if (uStack_4c < 0x10) {
      pppppppuVar11 = appppppuStack_60;
    }
    if ((undefined4 *******)((int)pppppppuVar11 + iStack_50) < local_f8) goto LAB_0145e779;
  }
  else {
    local_f8 = appppppuStack_60[0];
    if ((undefined4 *******)appppppuStack_60[0] != (undefined4 *******)0x0) goto LAB_0145e748;
LAB_0145e779:
    FUN_00d83c2d();
  }
  pppppppuVar11 = (undefined4 *******)appppppuStack_60[0];
  if (uStack_4c < 0x10) {
    pppppppuVar11 = appppppuStack_60;
  }
  pppppppuVar11 = (undefined4 *******)(iStack_50 + (int)pppppppuVar11);
  if (pppppppuVar11 == (undefined4 *******)0x0) {
LAB_0145e7d5:
    FUN_00d83c2d();
  }
  else {
    pppppppuVar12 = (undefined4 *******)appppppuStack_60[0];
    if (uStack_4c < 0x10) {
      pppppppuVar12 = appppppuStack_60;
    }
    if (pppppppuVar11 < pppppppuVar12) goto LAB_0145e7d5;
    pppppppuVar12 = (undefined4 *******)appppppuStack_60[0];
    if (uStack_4c < 0x10) {
      pppppppuVar12 = appppppuStack_60;
    }
    if ((undefined4 *******)((int)pppppppuVar12 + iStack_50) < pppppppuVar11) goto LAB_0145e7d5;
  }
  if (uStack_4c < 0x10) {
    pppppppuVar12 = appppppuStack_60;
LAB_0145e7fe:
    pppppppuVar13 = (undefined4 *******)appppppuStack_60[0];
    if (uStack_4c < 0x10) {
      pppppppuVar13 = appppppuStack_60;
    }
    if (pppppppuVar13 <= pppppppuVar12) {
      pppppppuVar13 = (undefined4 *******)appppppuStack_60[0];
      if (uStack_4c < 0x10) {
        pppppppuVar13 = appppppuStack_60;
      }
      if (pppppppuVar12 <= (undefined4 *******)(iStack_50 + (int)pppppppuVar13)) goto LAB_0145e829;
    }
  }
  else {
    pppppppuVar12 = (undefined4 *******)appppppuStack_60[0];
    if ((undefined4 *******)appppppuStack_60[0] != (undefined4 *******)0x0) goto LAB_0145e7fe;
  }
  FUN_00d83c2d();
LAB_0145e829:
  local_e0[0] = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                ((uint)local_e0[0] & 0xffffff00);
  FUN_012a26c0(local_e0,pppppppuVar12,pppppppuVar11,abStack_64,local_f8,_toupper,local_e0[0],
               local_e0[0]);
  piVar9 = local_f4;
  local_ec = (void *)0x0;
  if (local_f4[2] == 0) {
    FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x62);
  }
  pvVar4 = StateMachine_getCurrentTurn((void *)piVar9[2]);
  pvVar4 = GameTurn_getCurrentStateMachine(pvVar4);
  if (pvVar4 != (void *)0x0) {
    pvVar4 = (void *)get_field_1c_if_vector_nonempty(pvVar4);
    local_ec = EvaluationEnvironment_getOriginCard(pvVar4);
  }
  pvVar4 = local_e8;
  if (uStack_4c < 0x10) {
    local_e4 = appppppuStack_60;
  }
  else {
    local_e4 = appppppuStack_60[0];
  }
  if (local_f4[2] == 0) {
    FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x4c);
  }
  pcVar15 = "Setting PhaseDialog for player: %d: %s, %s, %s, %s";
  iVar3 = playerId_;
  pvVar14 = (void *)get_field_4((void *)local_f4[2]);
  Game_logGeneral(pvVar14,pcVar15,iVar3);
  local_e0[0] = Mem_Alloc(0x14);
  local_4._0_1_ = 0x13;
  if (local_e0[0] ==
      (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0) {
    pvVar14 = (void *)0x0;
  }
  else {
    pvVar14 = (void *)FUN_012f9eb0();
  }
  local_4 = CONCAT31(local_4._1_3_,8);
  FUN_012f8c70(0x80);
  if (local_f4[2] == 0) {
    FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x4c);
  }
  get_field_4((void *)local_f4[2]);
  iVar3 = StateMachine_getCurrentState();
  DisplayActionBuilder_addIntArg(pvVar14,iVar3);
  DisplayActionBuilder_addStringArg(pvVar14,pvVar4);
  DisplayActionBuilder_addStringArg(pvVar14,abStack_48);
  DisplayActionBuilder_addStringArg(pvVar14,abStack_80);
  DisplayActionBuilder_addStringArg(pvVar14,abStack_64);
  DisplayActionBuilder_addCStringArg(pvVar14,"");
  if (local_ec == (void *)0x0) {
    iVar3 = 0;
  }
  else {
    iVar3 = PlayElement_getId();
  }
  DisplayActionBuilder_addIntArg(pvVar14,iVar3);
  DisplayActionBuilder_addIntArg(pvVar14,local_f0);
  if (local_f4[2] == 0) {
    FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x4c);
  }
  piVar9 = (int *)get_field_4((void *)local_f4[2]);
  (**(code **)(*piVar9 + 0x150))(playerId_,pvVar14);
  (**(code **)(*local_f4 + 0x9c))();
  local_4 = CONCAT31(local_4._1_3_,7);
  if (0xf < uStack_30) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_44);
  }
  uStack_30 = 0xf;
  uStack_34 = 0;
  pvStack_44 = (void *)((uint)pvStack_44 & 0xffffff00);
  local_4 = CONCAT31(local_4._1_3_,4);
  if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_28);
  }
  uStack_14 = 0xf;
  uStack_18 = 0;
  pvStack_28 = (void *)((uint)pvStack_28 & 0xffffff00);
  local_4 = CONCAT31(local_4._1_3_,3);
  if (uStack_4c < 0x10) {
    uStack_4c = 0xf;
    iStack_50 = 0;
    appppppuStack_60[0] = (undefined4 ******)((uint)appppppuStack_60[0] & 0xffffff00);
    local_4 = 0xffffffff;
    if (uStack_68 < 0x10) {
      ExceptionList = local_c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(appppppuStack_7c[0]);
  }
                    /* WARNING: Subroutine does not return */
  _free(appppppuStack_60[0]);
}

