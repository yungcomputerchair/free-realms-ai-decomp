// addr: 0x0145ebb0
// name: StateMachineState_setPhaseDialogForSource
// subsystem: common/common/game
// source (binary assert): common/common/state/StateMachineState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void StateMachineState_setPhaseDialogForSource(void * this, int playerId_, int
   phase_, void * title, void * text1, void * text2, void * source) */

void StateMachineState_setPhaseDialogForSource
               (void *this,int playerId_,int phase_,void *title,void *text1,void *text2,void *source
               )

{
  char cVar1;
  uint nameContext_;
  int *piVar2;
  void *pvVar3;
  int iVar4;
  char *pcVar5;
  char *pcVar6;
  undefined4 ****ppppuVar7;
  undefined4 ****ppppuVar8;
  undefined4 ****ppppuVar9;
  void *pvVar10;
  int *piVar11;
  int *in_ECX;
  undefined4 ***local_108;
  void *apvStack_104 [2];
  void *local_fc;
  int *local_f8;
  int iStack_f4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_f0 [4];
  void *pvStack_ec;
  undefined4 uStack_dc;
  uint uStack_d8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_d4 [4];
  void *pvStack_d0;
  undefined4 uStack_c0;
  undefined1 *puStack_bc;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_b8 [4];
  undefined4 ***apppuStack_b4 [2];
  undefined4 uStack_ac;
  uint uStack_a8;
  int iStack_a4;
  undefined1 *puStack_a0;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_9c [4];
  undefined4 ***local_98 [3];
  uint uStack_8c;
  int local_88;
  undefined1 *local_84;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_80 [4];
  undefined4 ***apppuStack_7c [2];
  undefined4 uStack_74;
  uint uStack_70;
  int iStack_6c;
  uint uStack_68;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_64 [4];
  void *pvStack_60;
  int iStack_50;
  undefined1 *puStack_4c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_48 [4];
  undefined1 uStack_44;
  undefined4 uStack_3c;
  uint uStack_38;
  undefined4 uStack_34;
  undefined1 *puStack_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_2c [12];
  undefined4 uStack_20;
  uint uStack_1c;
  void *pvStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Builds and sends phase-dialog text for a StateMachineState, copying
                       title/body strings, resolving actor placeholders such as #actor#/#actor_he#,
                       and asserting mPhase/mMachine are valid. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169d0cd;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_108;
  nameContext_ = DAT_01b839d8 ^ (uint)&stack0xfffffee8;
  ExceptionList = &local_c;
  local_fc = (void *)playerId_;
  local_108 = source;
  local_f8 = in_ECX;
  StateMachineState_setPhaseDialogFields
            ((void *)in_ECX[2],(void *)playerId_,(void *)phase_,title,text1,text2,source);
  if (local_f8[6] == 0) {
    FUN_012f5a60("mPhase != kInvalidPhase","..\\common\\common\\state\\StateMachineState.cpp",0x2d2)
    ;
  }
  local_84 = &DAT_0000000f;
  local_88 = 0;
  local_98[0] = (undefined4 ***)((uint)local_98[0] & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_9c,title,0,0xffffffff);
  uStack_4 = 0;
  puStack_a0 = &DAT_0000000f;
  iStack_a4 = 0;
  apppuStack_b4[0] = (undefined4 ***)((uint)apppuStack_b4[0] & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (abStack_b8,text1,0,0xffffffff);
  uStack_4._0_1_ = 1;
  uStack_68 = 0xf;
  iStack_6c = 0;
  apppuStack_7c[0] = (undefined4 ***)((uint)apppuStack_7c[0] & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (abStack_80,text2,0,0xffffffff);
  uStack_4 = CONCAT31(uStack_4._1_3_,2);
  if (local_f8[2] == 0) {
    FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x4c);
  }
  piVar11 = local_f8;
  piVar2 = (int *)get_field_4((void *)local_f8[2]);
  cVar1 = (**(code **)(*piVar2 + 0x1a0))();
  if (cVar1 != '\0') {
    if (piVar11[2] == 0) {
      FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x62);
    }
    pvVar3 = StateMachine_getCurrentTurn((void *)piVar11[2]);
    get_field_8(pvVar3);
    iVar4 = GamePlayer_getPlayerId();
    if (iVar4 == 2) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_9c,"",0);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(abStack_b8,"",0);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(abStack_80,"",0);
    }
  }
  if (piVar11[2] == 0) {
    FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x62);
  }
  pvVar3 = StateMachine_getCurrentTurn((void *)piVar11[2]);
  apvStack_104[0] = (void *)get_field_8(pvVar3);
  iVar4 = GamePlayer_getPlayerId();
  iStack_f4 = iVar4;
  if (piVar11[2] == 0) {
    FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x4c);
  }
  get_field_4((void *)piVar11[2]);
  iVar4 = Game_getPlayerDisplayName(abStack_64,iVar4);
  uStack_4._0_1_ = 3;
  if (*(uint *)(iVar4 + 0x18) < 0x10) {
    pcVar6 = (char *)(iVar4 + 4);
  }
  else {
    pcVar6 = *(char **)(iVar4 + 4);
  }
  puStack_30 = &DAT_0000000f;
  uStack_34 = 0;
  uStack_44 = 0;
  pcVar5 = pcVar6;
  do {
    cVar1 = *pcVar5;
    pcVar5 = pcVar5 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (abStack_48,pcVar6,(int)pcVar5 - (int)(pcVar6 + 1));
  uStack_4._0_1_ = 5;
  if (0xf < puStack_4c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_60);
  }
  puStack_4c = &DAT_0000000f;
  iStack_50 = 0;
  pvStack_60 = (void *)((uint)pvStack_60 & 0xffffff00);
  MessageText_formatWithValueData(abStack_2c);
  uStack_4._0_1_ = 6;
  uStack_d8 = 0xf;
  uStack_dc = 0;
  pvStack_ec = (void *)((uint)pvStack_ec & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (abStack_f0,"#actor#",7);
  uStack_4._0_1_ = 7;
  String_replaceAll(abStack_2c,abStack_f0,abStack_48);
  uStack_4._0_1_ = 6;
  if (0xf < uStack_d8) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_ec);
  }
  uStack_d8 = 0xf;
  uStack_dc = 0;
  pvStack_ec = (void *)((uint)pvStack_ec & 0xffffff00);
  if (piVar11[2] == 0) {
    FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x4c);
  }
  pvVar3 = (void *)get_field_4((void *)piVar11[2]);
  iVar4 = Game_getMyPlayerID(pvVar3);
  if (iStack_f4 != iVar4) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_9c,"",0);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(abStack_b8,"",0);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(abStack_80,"",0);
    MessageText_formatWithValueData(abStack_64);
    uStack_4._0_1_ = 8;
    if (iStack_50 != 0) {
      uStack_d8 = 0xf;
      uStack_dc = 0;
      pvStack_ec = (void *)((uint)pvStack_ec & 0xffffff00);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (abStack_f0,"#actor#",7);
      uStack_4._0_1_ = 9;
      String_replaceAll(abStack_64,abStack_f0,abStack_48);
      uStack_4._0_1_ = 8;
      if (0xf < uStack_d8) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_ec);
      }
      uStack_d8 = 0xf;
      uStack_dc = 0;
      pvStack_ec = (void *)((uint)pvStack_ec & 0xffffff00);
      puStack_bc = (undefined1 *)0xf;
      uStack_c0 = 0;
      pvStack_d0 = (void *)((uint)pvStack_d0 & 0xffffff00);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (abStack_d4,"#actor_he#",10);
      uStack_4._0_1_ = 10;
      pcVar6 = PlayElement_getDisplayNameVariant((void *)0x1,nameContext_);
      String_replaceAll(abStack_64,abStack_d4,pcVar6);
      uStack_4._0_1_ = 8;
      if (0xf < puStack_bc) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_d0);
      }
      puStack_bc = &DAT_0000000f;
      uStack_c0 = 0;
      pvStack_d0 = (void *)((uint)pvStack_d0 & 0xffffff00);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (abStack_2c,abStack_64,0,0xffffffff);
    }
    uStack_4._0_1_ = 6;
    if (&DAT_0000000f < puStack_4c) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_60);
    }
    puStack_4c = &DAT_0000000f;
    iStack_50 = 0;
    pvStack_60 = (void *)((uint)pvStack_60 & 0xffffff00);
  }
  if (local_84 < &DAT_00000010) {
    local_108 = local_98;
LAB_0145f0e9:
    ppppuVar7 = (undefined4 ****)local_98[0];
    if (local_84 < &DAT_00000010) {
      ppppuVar7 = local_98;
    }
    if (local_108 < ppppuVar7) goto LAB_0145f116;
    ppppuVar7 = (undefined4 ****)local_98[0];
    if (local_84 < &DAT_00000010) {
      ppppuVar7 = local_98;
    }
    if ((undefined4 ****)((int)ppppuVar7 + local_88) < local_108) goto LAB_0145f116;
  }
  else {
    local_108 = local_98[0];
    if ((undefined4 ****)local_98[0] != (undefined4 ****)0x0) goto LAB_0145f0e9;
LAB_0145f116:
    FUN_00d83c2d();
  }
  ppppuVar7 = (undefined4 ****)local_98[0];
  if (local_84 < &DAT_00000010) {
    ppppuVar7 = local_98;
  }
  ppppuVar7 = (undefined4 ****)((int)ppppuVar7 + local_88);
  if (ppppuVar7 == (undefined4 ****)0x0) {
LAB_0145f172:
    FUN_00d83c2d();
  }
  else {
    ppppuVar8 = (undefined4 ****)local_98[0];
    if (local_84 < &DAT_00000010) {
      ppppuVar8 = local_98;
    }
    if (ppppuVar7 < ppppuVar8) goto LAB_0145f172;
    ppppuVar8 = (undefined4 ****)local_98[0];
    if (local_84 < &DAT_00000010) {
      ppppuVar8 = local_98;
    }
    if ((undefined4 ****)((int)ppppuVar8 + local_88) < ppppuVar7) goto LAB_0145f172;
  }
  if (local_84 < &DAT_00000010) {
    ppppuVar8 = local_98;
LAB_0145f19b:
    ppppuVar9 = (undefined4 ****)local_98[0];
    if (local_84 < &DAT_00000010) {
      ppppuVar9 = local_98;
    }
    if (ppppuVar8 < ppppuVar9) goto LAB_0145f1c1;
    ppppuVar9 = (undefined4 ****)local_98[0];
    if (local_84 < &DAT_00000010) {
      ppppuVar9 = local_98;
    }
    if ((undefined4 ****)(local_88 + (int)ppppuVar9) < ppppuVar8) goto LAB_0145f1c1;
  }
  else {
    ppppuVar8 = (undefined4 ****)local_98[0];
    if ((undefined4 ****)local_98[0] != (undefined4 ****)0x0) goto LAB_0145f19b;
LAB_0145f1c1:
    FUN_00d83c2d();
  }
  apvStack_104[0] = (void *)((uint)apvStack_104[0] & 0xffffff00);
  FUN_012a26c0(apvStack_104,ppppuVar8,ppppuVar7,local_9c,local_108,_toupper,local_fc,apvStack_104[0]
              );
  if (puStack_a0 < &DAT_00000010) {
    local_108 = apppuStack_b4;
LAB_0145f210:
    ppppuVar7 = (undefined4 ****)apppuStack_b4[0];
    if (puStack_a0 < &DAT_00000010) {
      ppppuVar7 = apppuStack_b4;
    }
    if (local_108 < ppppuVar7) goto LAB_0145f234;
    ppppuVar7 = (undefined4 ****)apppuStack_b4[0];
    if (puStack_a0 < &DAT_00000010) {
      ppppuVar7 = apppuStack_b4;
    }
    if ((undefined4 ****)((int)ppppuVar7 + iStack_a4) < local_108) goto LAB_0145f234;
  }
  else {
    local_108 = apppuStack_b4[0];
    if ((undefined4 ****)apppuStack_b4[0] != (undefined4 ****)0x0) goto LAB_0145f210;
LAB_0145f234:
    FUN_00d83c2d();
  }
  ppppuVar7 = (undefined4 ****)apppuStack_b4[0];
  if (puStack_a0 < &DAT_00000010) {
    ppppuVar7 = apppuStack_b4;
  }
  ppppuVar7 = (undefined4 ****)((int)ppppuVar7 + iStack_a4);
  if (ppppuVar7 == (undefined4 ****)0x0) {
LAB_0145f27b:
    FUN_00d83c2d();
  }
  else {
    ppppuVar8 = (undefined4 ****)apppuStack_b4[0];
    if (puStack_a0 < &DAT_00000010) {
      ppppuVar8 = apppuStack_b4;
    }
    if (ppppuVar7 < ppppuVar8) goto LAB_0145f27b;
    ppppuVar8 = (undefined4 ****)apppuStack_b4[0];
    if (puStack_a0 < &DAT_00000010) {
      ppppuVar8 = apppuStack_b4;
    }
    if ((undefined4 ****)((int)ppppuVar8 + iStack_a4) < ppppuVar7) goto LAB_0145f27b;
  }
  if (puStack_a0 < &DAT_00000010) {
    ppppuVar8 = apppuStack_b4;
LAB_0145f29b:
    ppppuVar9 = (undefined4 ****)apppuStack_b4[0];
    if (puStack_a0 < &DAT_00000010) {
      ppppuVar9 = apppuStack_b4;
    }
    if (ppppuVar8 < ppppuVar9) goto LAB_0145f2bb;
    ppppuVar9 = (undefined4 ****)apppuStack_b4[0];
    if (puStack_a0 < &DAT_00000010) {
      ppppuVar9 = apppuStack_b4;
    }
    if ((undefined4 ****)(iStack_a4 + (int)ppppuVar9) < ppppuVar8) goto LAB_0145f2bb;
  }
  else {
    ppppuVar8 = (undefined4 ****)apppuStack_b4[0];
    if ((undefined4 ****)apppuStack_b4[0] != (undefined4 ****)0x0) goto LAB_0145f29b;
LAB_0145f2bb:
    FUN_00d83c2d();
  }
  apvStack_104[0] = (void *)((uint)apvStack_104[0] & 0xffffff00);
  FUN_012a26c0(apvStack_104,ppppuVar8,ppppuVar7,abStack_b8,local_108,_toupper,local_fc,
               apvStack_104[0]);
  if (uStack_68 < 0x10) {
    local_108 = apppuStack_7c;
LAB_0145f30a:
    ppppuVar7 = (undefined4 ****)apppuStack_7c[0];
    if (uStack_68 < 0x10) {
      ppppuVar7 = apppuStack_7c;
    }
    if (local_108 < ppppuVar7) goto LAB_0145f337;
    ppppuVar7 = (undefined4 ****)apppuStack_7c[0];
    if (uStack_68 < 0x10) {
      ppppuVar7 = apppuStack_7c;
    }
    if ((undefined4 ****)((int)ppppuVar7 + iStack_6c) < local_108) goto LAB_0145f337;
  }
  else {
    local_108 = apppuStack_7c[0];
    if ((undefined4 ****)apppuStack_7c[0] != (undefined4 ****)0x0) goto LAB_0145f30a;
LAB_0145f337:
    FUN_00d83c2d();
  }
  ppppuVar7 = (undefined4 ****)apppuStack_7c[0];
  if (uStack_68 < 0x10) {
    ppppuVar7 = apppuStack_7c;
  }
  ppppuVar7 = (undefined4 ****)((int)ppppuVar7 + iStack_6c);
  if (ppppuVar7 == (undefined4 ****)0x0) {
LAB_0145f393:
    FUN_00d83c2d();
  }
  else {
    ppppuVar8 = (undefined4 ****)apppuStack_7c[0];
    if (uStack_68 < 0x10) {
      ppppuVar8 = apppuStack_7c;
    }
    if (ppppuVar7 < ppppuVar8) goto LAB_0145f393;
    ppppuVar8 = (undefined4 ****)apppuStack_7c[0];
    if (uStack_68 < 0x10) {
      ppppuVar8 = apppuStack_7c;
    }
    if ((undefined4 ****)((int)ppppuVar8 + iStack_6c) < ppppuVar7) goto LAB_0145f393;
  }
  if (uStack_68 < 0x10) {
    ppppuVar8 = apppuStack_7c;
LAB_0145f3bc:
    ppppuVar9 = (undefined4 ****)apppuStack_7c[0];
    if (uStack_68 < 0x10) {
      ppppuVar9 = apppuStack_7c;
    }
    if (ppppuVar9 <= ppppuVar8) {
      ppppuVar9 = (undefined4 ****)apppuStack_7c[0];
      if (uStack_68 < 0x10) {
        ppppuVar9 = apppuStack_7c;
      }
      if (ppppuVar8 <= (undefined4 ****)(iStack_6c + (int)ppppuVar9)) goto LAB_0145f3e7;
    }
  }
  else {
    ppppuVar8 = (undefined4 ****)apppuStack_7c[0];
    if ((undefined4 ****)apppuStack_7c[0] != (undefined4 ****)0x0) goto LAB_0145f3bc;
  }
  FUN_00d83c2d();
LAB_0145f3e7:
  apvStack_104[0] = (void *)((uint)apvStack_104[0] & 0xffffff00);
  FUN_012a26c0(apvStack_104,ppppuVar8,ppppuVar7,abStack_80,local_108,_toupper,local_fc,
               apvStack_104[0]);
  pvVar3 = (void *)0x0;
  if (local_f8[2] == 0) {
    FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x62);
  }
  pvVar10 = StateMachine_getCurrentTurn((void *)local_f8[2]);
  pvVar10 = GameTurn_getCurrentStateMachine(pvVar10);
  if (pvVar10 != (void *)0x0) {
    pvVar3 = (void *)get_field_1c_if_vector_nonempty(pvVar10);
    pvVar3 = EvaluationEnvironment_getOriginCard(pvVar3);
  }
  apvStack_104[0] = Mem_Alloc(0x14);
  uStack_4._0_1_ = 0xb;
  if (apvStack_104[0] == (void *)0x0) {
    pvVar10 = (void *)0x0;
  }
  else {
    pvVar10 = (void *)FUN_012f9eb0();
  }
  uStack_4 = CONCAT31(uStack_4._1_3_,6);
  FUN_012f8c70(0x80);
  if (local_f8[2] == 0) {
    FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x4c);
  }
  get_field_4((void *)local_f8[2]);
  iVar4 = StateMachine_getCurrentState();
  DisplayActionBuilder_addIntArg(pvVar10,iVar4);
  DisplayActionBuilder_addStringArg(pvVar10,local_fc);
  DisplayActionBuilder_addStringArg(pvVar10,abStack_2c);
  DisplayActionBuilder_addStringArg(pvVar10,local_9c);
  DisplayActionBuilder_addStringArg(pvVar10,abStack_b8);
  DisplayActionBuilder_addStringArg(pvVar10,abStack_80);
  if (pvVar3 == (void *)0x0) {
    iVar4 = 0;
  }
  else {
    iVar4 = PlayElement_getId();
  }
  DisplayActionBuilder_addIntArg(pvVar10,iVar4);
  DisplayActionBuilder_addIntArg(pvVar10,iStack_f4);
  if (local_f8[2] == 0) {
    FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x4c);
  }
  piVar11 = (int *)get_field_4((void *)local_f8[2]);
  (**(code **)(*piVar11 + 0x150))(this,pvVar10);
  (**(code **)(*local_f8 + 0x9c))();
  local_c = (void *)CONCAT31(local_c._1_3_,5);
  if (0xf < uStack_1c) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_30);
  }
  uStack_1c = 0xf;
  uStack_20 = 0;
  puStack_30 = (undefined1 *)((uint)puStack_30 & 0xffffff00);
  local_c = (void *)CONCAT31(local_c._1_3_,2);
  if (0xf < uStack_38) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_4c);
  }
  uStack_38 = 0xf;
  uStack_3c = 0;
  puStack_4c = (undefined1 *)((uint)puStack_4c & 0xffffff00);
  local_c = (void *)CONCAT31(local_c._1_3_,1);
  if (uStack_70 < 0x10) {
    uStack_70 = 0xf;
    uStack_74 = 0;
    local_84 = (undefined1 *)((uint)local_84 & 0xffffff00);
    local_c = (void *)((uint)local_c._1_3_ << 8);
    if (0xf < uStack_a8) {
                    /* WARNING: Subroutine does not return */
      _free(puStack_bc);
    }
    uStack_a8 = 0xf;
    uStack_ac = 0;
    puStack_bc = (undefined1 *)((uint)puStack_bc & 0xffffff00);
    local_c = (void *)0xffffffff;
    if (uStack_8c < 0x10) {
      ExceptionList = pvStack_14;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(puStack_a0);
  }
                    /* WARNING: Subroutine does not return */
  _free(local_84);
}

