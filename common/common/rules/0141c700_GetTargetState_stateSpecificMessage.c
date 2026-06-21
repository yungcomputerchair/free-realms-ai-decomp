// addr: 0x0141c700
// name: GetTargetState_stateSpecificMessage
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall GetTargetState_stateSpecificMessage(int *param_1,int param_2)

{
  undefined1 uVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  uint uVar5;
  undefined4 uVar6;
  int *piVar7;
  int iVar8;
  undefined4 uVar9;
  int *piVar10;
  int *piVar11;
  void *pvVar12;
  int value_;
  int elementId_;
  void *unaff_EBP;
  int *unaff_EDI;
  undefined8 uVar13;
  char *fmt;
  int *piStack_100;
  int *piStack_fc;
  uint uStack_f8;
  void *pvStack_f4;
  void *pvStack_f0;
  undefined4 uStack_e4;
  uint uStack_e0;
  uint uStack_dc;
  void *pvStack_d8;
  void *pvStack_d0;
  undefined4 uStack_c8;
  uint uStack_c4;
  uint uStack_c0;
  uint uStack_bc;
  undefined1 uStack_b8;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 *puStack_a0;
  int *piStack_9c;
  undefined4 uStack_98;
  void *pvStack_94;
  void *pvStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  int *piStack_84;
  int *piStack_80;
  void *pvStack_7c;
  undefined4 uStack_78;
  int *piStack_74;
  int *piStack_70;
  undefined4 uStack_6c;
  uint uStack_68;
  void *pvStack_64;
  void *pvStack_58;
  undefined4 uStack_54;
  uint uStack_50;
  undefined4 *puStack_4c;
  int *piStack_48;
  uint auStack_44 [7];
  undefined1 auStack_28 [12];
  undefined1 uStack_1c;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Builds the GetTargetState wait/phase dialog text with target/player/card
                       substitutions. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01693f3f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar4 = (void *)StateMachineState_getCurrentTurn(DAT_01b839d8 ^ (uint)&stack0xfffffeec);
  uVar5 = get_field_8(pvVar4);
  if (uVar5 == 0) {
    ExceptionList = local_c;
    return;
  }
  uVar6 = (**(code **)(*param_1 + 0xb8))
                    (0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
  uVar13 = StateMachineState_getGame(uVar6);
  pvVar4 = find_play_element_in_maps((void *)uVar13,(int)((ulonglong)uVar13 >> 0x20));
  piVar7 = (int *)FUN_00d8d382(pvVar4);
  piStack_fc = piVar7;
  if (piVar7 != (int *)0x0) {
    uStack_c4 = 0xf;
    uStack_c8 = 0;
    pvStack_d8 = (void *)((uint)pvStack_d8 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_dc,
               "#title#",7);
    uStack_4 = 0;
    uVar6 = Card_getPropertyMap();
    FUN_01402480(&uStack_dc,uVar6);
    uStack_4 = 0xffffffff;
    if (0xf < uStack_c4) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_d8);
    }
    uStack_c4 = 0xf;
    uStack_c8 = 0;
    pvStack_d8 = (void *)((uint)pvStack_d8 & 0xffffff00);
    uVar6 = (**(code **)(*piVar7 + 0x30))
                      (0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
    iVar8 = FUN_00d8d382(uVar6);
    if (iVar8 != 0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_f8,
                 "#owner#");
      uStack_4 = 1;
      uVar6 = Card_getPropertyMap();
      FUN_01402480(&uStack_f8,uVar6);
      uStack_4 = 0xffffffff;
      if (0xf < uStack_e0) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_f4);
      }
      uStack_e0 = 0xf;
      uStack_e4 = 0;
      pvStack_f4 = (void *)((uint)pvStack_f4 & 0xffffff00);
    }
  }
  pvStack_94 = (void *)0x0;
  pvStack_90 = (void *)0x0;
  uStack_8c = 0;
  uStack_4 = 2;
  if ((char)param_1[0x43] == '\0') {
    uStack_c0 = *(uint *)(param_2 + 8);
    if (uStack_c0 < *(uint *)(param_2 + 4)) {
      FUN_00d83c2d();
    }
    uVar5 = *(uint *)(param_2 + 4);
    if (*(uint *)(param_2 + 8) < uVar5) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (param_2 == 0) {
        FUN_00d83c2d();
      }
      if (uVar5 == uStack_c0) break;
      if (param_2 == 0) {
        FUN_00d83c2d();
      }
      if (*(uint *)(param_2 + 8) <= uVar5) {
        FUN_00d83c2d();
      }
      piStack_100 = (int *)PlayElement_getId();
      FUN_0042c155(&piStack_100);
      if (*(uint *)(param_2 + 8) <= uVar5) {
        FUN_00d83c2d();
      }
      uVar5 = uVar5 + 4;
    }
  }
  else {
    FUN_005f1e5c(param_1 + 0x44);
  }
  FUN_005f1e5c(&uStack_98);
  iVar8 = MessageText_formatWithValueData(&uStack_f8);
  uStack_4._0_1_ = 3;
  if (*(uint *)(iVar8 + 0x18) < 0x10) {
    iVar8 = iVar8 + 4;
  }
  else {
    iVar8 = *(int *)(iVar8 + 4);
  }
  fmt = "GetTargetState::WaitDialogText: %s";
  pvVar4 = (void *)StateMachineState_getGame();
  Game_logGeneral(pvVar4,fmt,iVar8);
  uStack_4._0_1_ = 2;
  uVar1 = (undefined1)uStack_4;
  uStack_4._0_1_ = 2;
  if (0xf < uStack_e0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_f4);
  }
  uStack_e0 = 0xf;
  uStack_e4 = 0;
  pvStack_f4 = (void *)((uint)pvStack_f4 & 0xffffff00);
  if (((char)param_1[0x48] == '\0') ||
     (bVar2 = EvaluationEnvironment_getPlayAreaReturnBooleanDefaultFalse(),
     uVar1 = (undefined1)uStack_4, bVar2)) {
    uStack_4._0_1_ = uVar1;
    iVar8 = MessageText_formatWithValueData(&uStack_f8);
    uStack_4._0_1_ = 2;
    if (0xf < uStack_e0) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_f4);
    }
    uStack_e0 = 0xf;
    uStack_e4 = 0;
    uVar5 = (uint)pvStack_f4 >> 8;
    pvStack_f4 = (void *)(uVar5 << 8);
    if (*(int *)(iVar8 + 0x14) == 0) {
      MessageText_ctor();
      uStack_4._0_1_ = 0x12;
      uStack_c4 = 0xf;
      uStack_c8 = 0;
      pvStack_d8 = (void *)((uint)pvStack_d8 & 0xffffff00);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_dc,"0",1
                );
      uStack_4._0_1_ = 0x13;
      uStack_a4 = 0xf;
      uStack_a8 = 0;
      uStack_b8 = 0;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_bc,"0",1
                );
      uStack_4._0_1_ = 0x14;
      uStack_e0 = 0xf;
      uStack_e4 = 0;
      pvStack_f4 = (void *)((uint)pvStack_f4 & 0xffffff00);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_f8,
                 "Get Target",10);
      uStack_4._0_1_ = 0x15;
      uVar6 = FUN_0145d850(auStack_44,&uStack_dc);
      uStack_4._0_1_ = 0x16;
      uVar9 = FUN_0145d850(&uStack_68,&uStack_bc);
      uStack_4 = CONCAT31(uStack_4._1_3_,0x17);
      (**(code **)(*param_1 + 0x8c))(0,&uStack_f8,param_1 + 0x15,uVar9,uVar6,auStack_28);
      uStack_1c = 0x16;
      if (0xf < uStack_68) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_7c);
      }
      uStack_68 = 0xf;
      uStack_6c = 0;
      pvStack_7c = (void *)((uint)pvStack_7c & 0xffffff00);
      uStack_1c = 0x15;
      if (0xf < auStack_44[0]) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_58);
      }
      auStack_44[0] = 0xf;
      piStack_48 = (int *)0x0;
      pvStack_58 = (void *)((uint)pvStack_58 & 0xffffff00);
      uStack_1c = 0x14;
      if (0xf < uStack_f8) {
                    /* WARNING: Subroutine does not return */
        _free(unaff_EBP);
      }
      uStack_f8 = 0xf;
      piStack_fc = (int *)0x0;
      uStack_1c = 0x13;
      if (0xf < uStack_bc) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_d0);
      }
      uStack_bc = 0xf;
      uStack_c0 = 0;
      pvStack_d0 = (void *)((uint)pvStack_d0 & 0xffffff00);
      uStack_1c = 0x12;
      if (0xf < uStack_dc) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_f0);
      }
      goto LAB_0141d022;
    }
    uStack_e0 = 0xf;
    uStack_e4 = 0;
    pvStack_f4 = (void *)(uVar5 << 8);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_f8,"0",1);
    uStack_4._0_1_ = 0xd;
    uStack_a4 = 0xf;
    uStack_a8 = 0;
    uStack_b8 = 0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_bc,"0",1);
    uStack_4._0_1_ = 0xe;
    uStack_c4 = 0xf;
    uStack_c8 = 0;
    pvStack_d8 = (void *)((uint)pvStack_d8 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_dc,
               "Get Target",10);
    uStack_4._0_1_ = 0xf;
    uVar6 = FUN_0145d850(&uStack_68,&uStack_f8);
    uStack_4._0_1_ = 0x10;
    uVar9 = FUN_0145d850(auStack_44,&uStack_bc);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x11);
    (**(code **)(*param_1 + 0x8c))(0,&uStack_dc,param_1 + 0x15,uVar9,uVar6,param_1 + 0x1c);
    uStack_1c = 0x10;
    if (0xf < auStack_44[0]) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_58);
    }
    auStack_44[0] = 0xf;
    piStack_48 = (int *)0x0;
    pvStack_58 = (void *)((uint)pvStack_58 & 0xffffff00);
    uStack_1c = 0xf;
    if (0xf < uStack_68) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_7c);
    }
    uStack_68 = 0xf;
    uStack_6c = 0;
    pvStack_7c = (void *)((uint)pvStack_7c & 0xffffff00);
    uStack_1c = 0xe;
    if (0xf < uStack_dc) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_f0);
    }
    uStack_dc = 0xf;
    uStack_e0 = 0;
    pvStack_f0 = (void *)((uint)pvStack_f0 & 0xffffff00);
    uStack_1c = 0xd;
    if (0xf < uStack_bc) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_d0);
    }
    uStack_bc = 0xf;
    uStack_c0 = 0;
    pvStack_d0 = (void *)((uint)pvStack_d0 & 0xffffff00);
    uStack_1c = 2;
    if (0xf < uStack_f8) {
                    /* WARNING: Subroutine does not return */
      _free(unaff_EBP);
    }
    uStack_f8 = 0xf;
    piStack_fc = (int *)0x0;
  }
  else {
    iVar8 = MessageText_formatWithValueData(&uStack_f8);
    uStack_4._0_1_ = 2;
    if (0xf < uStack_e0) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_f4);
    }
    uStack_e0 = 0xf;
    uStack_e4 = 0;
    pvStack_f4 = (void *)((uint)pvStack_f4 & 0xffffff00);
    if (*(int *)(iVar8 + 0x14) == 0) {
      MessageText_ctor();
      uStack_4._0_1_ = 8;
      if ((uint)param_1[0x30] < 0x10) {
        piVar7 = param_1 + 0x2b;
      }
      else {
        piVar7 = (int *)param_1[0x2b];
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_dc,
                 (char *)piVar7);
      uStack_4._0_1_ = 9;
      if ((uint)param_1[0x29] < 0x10) {
        piVar7 = param_1 + 0x24;
      }
      else {
        piVar7 = (int *)param_1[0x24];
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_bc,
                 (char *)piVar7);
      uStack_4._0_1_ = 10;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_f8,
                 "Get Target");
      uStack_4 = CONCAT31(uStack_4._1_3_,0xb);
      (**(code **)(*param_1 + 0x8c))(0,&uStack_f8,param_1 + 0x15,&uStack_bc,&uStack_dc,&uStack_68);
      uStack_1c = 10;
      if (0xf < uStack_f8) {
                    /* WARNING: Subroutine does not return */
        _free(unaff_EBP);
      }
      uStack_f8 = 0xf;
      piStack_fc = (int *)0x0;
      uStack_1c = 9;
      if (0xf < uStack_bc) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_d0);
      }
      uStack_bc = 0xf;
      uStack_c0 = 0;
      pvStack_d0 = (void *)((uint)pvStack_d0 & 0xffffff00);
      uStack_1c = 8;
      if (0xf < uStack_dc) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_f0);
      }
LAB_0141d022:
      uStack_1c = 2;
      uStack_bc = 0xf;
      uStack_c0 = 0;
      uStack_dc = 0xf;
      uStack_e0 = 0;
      pvStack_f0 = (void *)((uint)pvStack_f0 & 0xffffff00);
      uStack_f8 = 0xf;
      piStack_fc = (int *)0x0;
      MessageText_dtor();
    }
    else {
      if ((uint)param_1[0x30] < 0x10) {
        piVar7 = param_1 + 0x2b;
      }
      else {
        piVar7 = (int *)param_1[0x2b];
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_dc,
                 (char *)piVar7);
      uStack_4._0_1_ = 5;
      if ((uint)param_1[0x29] < 0x10) {
        piVar7 = param_1 + 0x24;
      }
      else {
        piVar7 = (int *)param_1[0x24];
      }
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_bc,
                 (char *)piVar7);
      uStack_4._0_1_ = 6;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_f8,
                 "Get Target");
      uStack_4 = CONCAT31(uStack_4._1_3_,7);
      (**(code **)(*param_1 + 0x8c))
                (0,&uStack_f8,param_1 + 0x15,&uStack_bc,&uStack_dc,param_1 + 0x1c);
      uStack_1c = 6;
      if (0xf < uStack_f8) {
                    /* WARNING: Subroutine does not return */
        _free(unaff_EBP);
      }
      uStack_f8 = 0xf;
      piStack_fc = (int *)0x0;
      uStack_1c = 5;
      if (0xf < uStack_bc) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_d0);
      }
      uStack_bc = 0xf;
      uStack_c0 = 0;
      pvStack_d0 = (void *)((uint)pvStack_d0 & 0xffffff00);
      uStack_1c = 2;
      if (0xf < uStack_dc) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_f0);
      }
      uStack_dc = 0xf;
      uStack_e0 = 0;
      pvStack_f0 = (void *)((uint)pvStack_f0 & 0xffffff00);
    }
  }
  if (unaff_EDI != (int *)0x0) {
    PlayElement_getId();
    (**(code **)(*unaff_EDI + 0x15c))(0x472,param_1[0x3a]);
  }
  uStack_8c = 0;
  uStack_88 = 0;
  piStack_84 = (int *)0x0;
  piStack_9c = (int *)0x0;
  uStack_98 = 0;
  pvStack_94 = (void *)0x0;
  uStack_1c = 0x19;
  pvStack_d8 = (void *)((uint)pvStack_d8 & 0xffffff00);
  piVar7 = EvaluationEnvironment_getGame((void *)param_1[0x3a]);
  (**(code **)(*piVar7 + 0x144))(&pvStack_90);
  pvVar4 = EvaluationEnvironment_getGame((void *)param_1[0x3a]);
  iVar8 = Game_getMyPlayerID(pvVar4);
  pvVar4 = EvaluationEnvironment_getGame((void *)param_1[0x3a]);
  PlayArea_findPlayerElementById(pvVar4,iVar8);
  PlayElement_getGame();
  piVar7 = (int *)FUN_0139d7c0();
  (**(code **)(*piVar7 + 0x34))(&uStack_a4);
  iVar8 = (**(code **)(*param_1 + 0xc0))();
  if ((0 < iVar8) && (unaff_EDI != (int *)0x0)) {
    uStack_c0 = CONCAT31(uStack_c0._1_3_,1);
  }
  piVar7 = *(int **)(param_2 + 4);
  if ((piVar7 == (int *)0x0) ||
     (piVar10 = *(int **)(param_2 + 8), (int)piVar10 - (int)piVar7 >> 2 == 0)) {
    piVar10 = (int *)FUN_0139e690();
  }
  if (piVar10 < piVar7) {
    FUN_00d83c2d();
  }
  if ((*(int **)(param_2 + 8) < piVar7) || (piVar7 < *(int **)(param_2 + 4))) {
    FUN_00d83c2d();
  }
  if (*(int **)(param_2 + 8) <= piVar7) {
    FUN_00d83c2d();
  }
  piStack_100 = piStack_70;
  if (piStack_70 < piStack_74) {
    FUN_00d83c2d();
  }
  piVar10 = piStack_74;
  piVar11 = piStack_70;
  if (piStack_70 < piStack_74) {
    FUN_00d83c2d();
    piVar11 = piStack_70;
  }
  puStack_a0 = &uStack_78;
  piStack_48 = piVar10;
  if (piVar10 != piStack_100) {
    piStack_fc = (int *)*piVar7;
    do {
      if ((int *)*piVar10 == piStack_fc) break;
      piVar10 = piVar10 + 1;
    } while (piVar10 != piStack_100);
  }
  piStack_9c = piVar10;
  puStack_4c = puStack_a0;
  if (piVar11 < piStack_74) {
    FUN_00d83c2d();
  }
  if ((puStack_4c == (undefined4 *)0x0) || (puStack_4c != &uStack_78)) {
    FUN_00d83c2d();
  }
  if (piVar10 == piVar11) {
    piStack_100 = piStack_80;
    piVar7 = piStack_84;
    if ((piStack_80 < piStack_84) && (FUN_00d83c2d(), piVar7 = piStack_84, piStack_80 < piStack_84))
    {
      FUN_00d83c2d();
    }
    piVar11 = (int *)FUN_0139e700(0);
    piVar10 = piVar7;
    if (piVar7 != piStack_100) {
      do {
        if (*piVar10 == *piVar11) break;
        piVar10 = piVar10 + 1;
      } while (piVar10 != piStack_100);
    }
    piStack_fc = piStack_80;
    puStack_a0 = &uStack_88;
    piStack_9c = piVar10;
    piStack_48 = piVar7;
    if (piStack_80 < piStack_84) {
      FUN_00d83c2d();
    }
    if (&uStack_88 == (undefined4 *)0x0) {
      FUN_00d83c2d();
    }
    if (piVar10 == piStack_fc) goto LAB_0141d4df;
    piStack_100 = (int *)0x2233e;
  }
  else {
    piStack_100 = (int *)0x2234f;
  }
  pvVar4 = pvStack_94;
  bVar2 = false;
  if (pvStack_90 < pvStack_94) {
    FUN_00d83c2d();
  }
  while( true ) {
    pvVar12 = pvStack_90;
    if (pvStack_90 < pvStack_94) {
      FUN_00d83c2d();
    }
    if (pvVar4 == pvVar12) break;
    if (pvStack_90 <= pvVar4) {
      FUN_00d83c2d();
    }
    pvVar12 = EvaluationEnvironment_getGame((void *)param_1[0x3a]);
    piVar7 = find_play_element_in_maps(pvVar12,elementId_);
    if ((piVar7 != (int *)0x0) && (cVar3 = (**(code **)(*piVar7 + 0x124))(0x14), cVar3 != '\0')) {
      bVar2 = true;
    }
    if (pvStack_90 <= pvVar4) {
      FUN_00d83c2d();
    }
    pvVar4 = (void *)((int)pvVar4 + 4);
  }
  if (puStack_a0 == (undefined4 *)0x0) {
    FUN_00d83c2d();
  }
  if ((int *)puStack_a0[2] <= piStack_9c) {
    FUN_00d83c2d();
  }
  piStack_fc = (int *)(**(code **)(*(int *)*piStack_9c + 0x28))();
  iVar8 = FUN_01383880();
  if (iVar8 < 1) {
    EvaluationEnvironment_getMember14((void *)param_1[0x3a]);
    iVar8 = GamePlayer_getPlayerId();
  }
  else {
    iVar8 = FUN_01383880();
  }
  if (!bVar2) {
    pvVar4 = EvaluationEnvironment_getGame((void *)param_1[0x3a]);
    bVar2 = Game_getFlag_14d(pvVar4);
    if (((bVar2) || ((char)uStack_c0 != '\0')) || (piStack_100 == (int *)0x2234f)) {
      puStack_a0 = Mem_Alloc(0x14);
      uStack_4._0_1_ = 0x1a;
      if (puStack_a0 == (undefined4 *)0x0) {
        pvVar4 = (void *)0x0;
      }
      else {
        pvVar4 = (void *)FUN_012f9eb0();
      }
      uStack_4._0_1_ = 0x19;
      FUN_012f8c70(0xa1);
      EvaluationEnvironment_getGame((void *)param_1[0x3a]);
      value_ = StateMachine_getCurrentState();
      DisplayActionBuilder_addIntArg(pvVar4,value_);
      DisplayActionBuilder_addIntArg(pvVar4,(int)piStack_100);
      DisplayActionBuilder_addIntArg(pvVar4,0);
      DisplayActionBuilder_addIntArg(pvVar4,0);
      DisplayActionBuilder_addIntArg(pvVar4,(int)piStack_fc);
      DisplayActionBuilder_addIntArg(pvVar4,iVar8);
      DisplayActionBuilder_addObjectArg(pvVar4,&uStack_98);
      pvVar12 = (void *)MessageText_formatWithValueData(&uStack_68);
      uStack_4._0_1_ = 0x1b;
      DisplayActionBuilder_addStringArg(pvVar4,pvVar12);
      uStack_4 = CONCAT31(uStack_4._1_3_,0x19);
      if (0xf < uStack_50) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_64);
      }
      uStack_50 = 0xf;
      uStack_54 = 0;
      pvStack_64 = (void *)((uint)pvStack_64 & 0xffffff00);
      DisplayActionBuilder_addBoolArg(pvVar4,SUB41(uStack_c0,0));
      piVar7 = EvaluationEnvironment_getGame((void *)param_1[0x3a]);
      (**(code **)(*piVar7 + 0x154))(pvVar4);
    }
  }
LAB_0141d4df:
  uStack_4 = CONCAT31(uStack_4._1_3_,0x18);
  if (piStack_84 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(piStack_84);
  }
  piStack_84 = (int *)0x0;
  piStack_80 = (int *)0x0;
  pvStack_7c = (void *)0x0;
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
  if (piStack_74 == (int *)0x0) {
    piStack_74 = (int *)0x0;
    piStack_70 = (int *)0x0;
    uStack_6c = 0;
    uStack_4 = 0xffffffff;
    if (pvStack_94 == (void *)0x0) {
      ExceptionList = local_c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(pvStack_94);
  }
                    /* WARNING: Subroutine does not return */
  _free(piStack_74);
}

