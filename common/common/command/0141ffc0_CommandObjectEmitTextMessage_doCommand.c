// addr: 0x0141ffc0
// name: CommandObjectEmitTextMessage_doCommand
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectEmitTextMessage.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void CommandObjectEmitTextMessage_doCommand(void *this) */

void __fastcall CommandObjectEmitTextMessage_doCommand(void *this)

{
  void *env;
  uint3 uVar1;
  bool bVar2;
  char cVar3;
  void *pvVar4;
  void *pvVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 uVar9;
  void *pvVar10;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar11;
  char *pcVar12;
  uint uVar13;
  undefined4 *puVar14;
  char *******pppppppcVar15;
  void *unaff_EBX;
  void *pvVar16;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar17;
  undefined1 *puVar18;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_290 [4];
  void *pvStack_28c;
  undefined4 uStack_288;
  undefined4 uStack_284;
  uint uStack_280;
  undefined4 uStack_27c;
  uint uStack_278;
  undefined4 uStack_274;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_270 [4];
  void *pvStack_26c;
  undefined4 uStack_268;
  undefined4 uStack_264;
  uint uStack_260;
  undefined4 uStack_25c;
  uint uStack_258;
  undefined1 auStack_254 [3];
  char cStack_251;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_250 [20];
  int iStack_23c;
  void *local_234 [2];
  undefined1 auStack_22c [4];
  undefined4 uStack_228;
  undefined4 uStack_224;
  undefined4 uStack_220;
  void *pvStack_21c;
  int *piStack_218;
  undefined1 auStack_214 [4];
  undefined4 uStack_210;
  undefined4 uStack_20c;
  undefined4 uStack_208;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_204 [28];
  void *local_1e8;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_1e0 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_1c4 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_1a8 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_18c [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_170 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_154 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_138 [28];
  undefined1 auStack_11c [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_100 [4];
  void *pvStack_fc;
  undefined4 uStack_ec;
  uint uStack_e8;
  undefined1 auStack_e4 [4];
  char ******appppppcStack_e0 [4];
  undefined4 uStack_d0;
  uint uStack_cc;
  undefined1 auStack_c8 [4];
  char ******appppppcStack_c4 [4];
  undefined4 uStack_b4;
  uint uStack_b0;
  void *pvStack_a8;
  undefined4 uStack_98;
  uint uStack_94;
  void *pvStack_8c;
  char acStack_7c [4];
  uint uStack_78;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Emits a text message with pronoun/token substitution (#target_him#,
                       #actor_poss#, ...). From CommandObjectEmitTextMessage.cpp */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01694c09;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)abStack_290;
  pvVar4 = (void *)(DAT_01b839d8 ^ (uint)&stack0xfffffd60);
  ExceptionList = &local_c;
  env = (void *)((int)this + 0x84);
  local_234[0] = this;
  bVar2 = ValueData_getBooleanProperty14(pvVar4);
  EvaluationEnvironment_tracef(env,"noEmitSet to: %d",(uint)bVar2);
  local_1e8 = (void *)((int)this + 0x124);
  if (*(uint *)((int)this + 0x13c) < 0x10) {
    iVar7 = (int)this + 0x128;
  }
  else {
    iVar7 = *(int *)((int)this + 0x128);
  }
  EvaluationEnvironment_tracef(env,"EmitTextMessage %s",iVar7);
  bVar2 = ValueData_getBooleanProperty14(pvVar4);
  if (bVar2) {
    ExceptionList = local_c;
    return;
  }
  pvVar5 = EvaluationEnvironment_getTargetCard(env);
  if ((pvVar5 == (void *)0x0) ||
     (pvVar5 = EvaluationEnvironment_getTargetCard(env), *(int *)((int)pvVar5 + 100) == 0)) {
    pvVar5 = EvaluationEnvironment_getTargetCard(env);
    if (pvVar5 != (void *)0x0) {
      piVar6 = EvaluationEnvironment_getTargetCard(env);
      cVar3 = (**(code **)(*piVar6 + 0x1e8))();
      if (cVar3 != '\0') {
        piVar6 = EvaluationEnvironment_getTargetCard(env);
        iVar7 = Game_getMyPlayerID(*(void **)((int)local_234[0] + 0x30));
        iVar8 = (**(code **)(*piVar6 + 0x28))();
        this = local_234[0];
        if (iVar8 != iVar7) goto LAB_014200d1;
      }
    }
  }
  else {
LAB_014200d1:
    piVar6 = EvaluationEnvironment_getTargetCard(env);
    cVar3 = (**(code **)(*piVar6 + 0x1e8))();
    if (cVar3 == '\0') {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_290,"#target#");
      uStack_4 = 2;
      piVar6 = EvaluationEnvironment_getTargetCard(env);
      pvVar5 = (void *)(**(code **)(*piVar6 + 0x108))(abStack_250);
      puStack_8._0_1_ = 3;
      TextReplacementList_addStringPair((void *)((int)this + 0x144),&stack0xfffffd6c,pvVar5);
      puStack_8 = (undefined1 *)CONCAT31(puStack_8._1_3_,2);
      FUN_0041f1d7();
      puStack_8 = (undefined1 *)0xffffffff;
      FUN_0041f1d7();
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0xfffffd6c
                 ,"#target1#");
      puStack_8 = (undefined1 *)0x4;
      piVar6 = EvaluationEnvironment_getTargetCard(env);
      pvVar5 = (void *)(**(code **)(*piVar6 + 0x108))(auStack_254);
      uStack_4._0_1_ = 5;
      TextReplacementList_addStringPair((void *)((int)this + 0x144),abStack_290,pvVar5);
      uStack_4 = CONCAT31(uStack_4._1_3_,4);
      FUN_0041f1d7();
    }
    else {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_290,"#target#");
      uStack_4 = 0;
      EvaluationEnvironment_getTargetCard(env);
      pvVar5 = (void *)Card_getPropertyMap();
      TextReplacementList_addStringPair((void *)((int)this + 0x144),abStack_290,pvVar5);
      uStack_4 = 0xffffffff;
      FUN_0041f1d7();
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_290,"#target1#");
      uStack_4 = 1;
      EvaluationEnvironment_getTargetCard(env);
      pvVar5 = (void *)Card_getPropertyMap();
      TextReplacementList_addStringPair((void *)((int)this + 0x144),abStack_290,pvVar5);
    }
    pvVar16 = (void *)((int)this + 0x144);
    uStack_4 = 0xffffffff;
    FUN_0041f1d7();
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_290,"#target_he#");
    uStack_4 = 6;
    iVar7 = 1;
    pbVar17 = abStack_270;
    pvVar5 = EvaluationEnvironment_getTargetCard(env);
    pvVar5 = Card_getDisplayNameForContext(pvVar5,pbVar17,iVar7);
    uStack_4._0_1_ = 7;
    TextReplacementList_addStringPair(pvVar16,abStack_290,pvVar5);
    uStack_4 = CONCAT31(uStack_4._1_3_,6);
    if (0xf < uStack_258) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_26c);
    }
    uStack_258 = 0xf;
    uStack_25c = 0;
    pvStack_26c = (void *)((uint)pvStack_26c & 0xffffff00);
    uStack_4 = 0xffffffff;
    if (0xf < uStack_278) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_28c);
    }
    uStack_278 = 0xf;
    uStack_27c = 0;
    pvStack_28c = (void *)((uint)pvStack_28c & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_290,"#target_his#");
    uStack_4 = 8;
    iVar7 = 2;
    pbVar17 = abStack_270;
    pvVar5 = EvaluationEnvironment_getTargetCard(env);
    pvVar5 = Card_getDisplayNameForContext(pvVar5,pbVar17,iVar7);
    uStack_4._0_1_ = 9;
    TextReplacementList_addStringPair(pvVar16,abStack_290,pvVar5);
    uStack_4 = CONCAT31(uStack_4._1_3_,8);
    if (0xf < uStack_258) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_26c);
    }
    uStack_258 = 0xf;
    uStack_25c = 0;
    pvStack_26c = (void *)((uint)pvStack_26c & 0xffffff00);
    uStack_4 = 0xffffffff;
    if (0xf < uStack_278) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_28c);
    }
    uStack_278 = 0xf;
    uStack_27c = 0;
    pvStack_28c = (void *)((uint)pvStack_28c & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_290,"#target_him#");
    uStack_4 = 10;
    iVar7 = 3;
    pbVar17 = abStack_270;
    pvVar5 = EvaluationEnvironment_getTargetCard(env);
    pvVar5 = Card_getDisplayNameForContext(pvVar5,pbVar17,iVar7);
    uStack_4._0_1_ = 0xb;
    TextReplacementList_addStringPair(pvVar16,abStack_290,pvVar5);
    uStack_4 = CONCAT31(uStack_4._1_3_,10);
    if (0xf < uStack_258) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_26c);
    }
    uStack_258 = 0xf;
    uStack_25c = 0;
    pvStack_26c = (void *)((uint)pvStack_26c & 0xffffff00);
    uStack_4 = 0xffffffff;
    if (0xf < uStack_278) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_28c);
    }
    uStack_278 = 0xf;
    uStack_27c = 0;
    pvStack_28c = (void *)((uint)pvStack_28c & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_290,"#target1_he#");
    uStack_4 = 0xc;
    iVar7 = 1;
    pbVar17 = abStack_270;
    pvVar5 = EvaluationEnvironment_getTargetCard(env);
    pvVar5 = Card_getDisplayNameForContext(pvVar5,pbVar17,iVar7);
    uStack_4._0_1_ = 0xd;
    TextReplacementList_addStringPair(pvVar16,abStack_290,pvVar5);
    uStack_4 = CONCAT31(uStack_4._1_3_,0xc);
    if (0xf < uStack_258) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_26c);
    }
    uStack_258 = 0xf;
    uStack_25c = 0;
    pvStack_26c = (void *)((uint)pvStack_26c & 0xffffff00);
    uStack_4 = 0xffffffff;
    if (0xf < uStack_278) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_28c);
    }
    uStack_278 = 0xf;
    uStack_27c = 0;
    pvStack_28c = (void *)((uint)pvStack_28c & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_290,"#target1_his#");
    uStack_4 = 0xe;
    iVar7 = 2;
    pbVar17 = abStack_270;
    pvVar5 = EvaluationEnvironment_getTargetCard(env);
    pvVar5 = Card_getDisplayNameForContext(pvVar5,pbVar17,iVar7);
    uStack_4._0_1_ = 0xf;
    TextReplacementList_addStringPair(pvVar16,abStack_290,pvVar5);
    uStack_4 = CONCAT31(uStack_4._1_3_,0xe);
    if (0xf < uStack_258) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_26c);
    }
    uStack_258 = 0xf;
    uStack_25c = 0;
    pvStack_26c = (void *)((uint)pvStack_26c & 0xffffff00);
    uStack_4 = 0xffffffff;
    if (0xf < uStack_278) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_28c);
    }
    uStack_278 = 0xf;
    uStack_27c = 0;
    pvStack_28c = (void *)((uint)pvStack_28c & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_290,"#target1_him#");
    uStack_4 = 0x10;
    iVar7 = 3;
    pbVar17 = abStack_270;
    pvVar5 = EvaluationEnvironment_getTargetCard(env);
    pvVar5 = Card_getDisplayNameForContext(pvVar5,pbVar17,iVar7);
    uStack_4._0_1_ = 0x11;
    TextReplacementList_addStringPair(pvVar16,abStack_290,pvVar5);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x10);
    if (0xf < uStack_258) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_26c);
    }
    uStack_258 = 0xf;
    uStack_25c = 0;
    pvStack_26c = (void *)((uint)pvStack_26c & 0xffffff00);
    uStack_4 = 0xffffffff;
    if (0xf < uStack_278) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_28c);
    }
    uStack_278 = 0xf;
    uStack_27c = 0;
    pvStack_28c = (void *)((uint)pvStack_28c & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_290,"#target1_poss#");
    uStack_4 = 0x12;
    pbVar17 = abStack_270;
    EvaluationEnvironment_getTargetCard(env);
    pvVar5 = (void *)CommandObjectEmitTextMessage_buildMessageText(pbVar17);
    uStack_4._0_1_ = 0x13;
    TextReplacementList_addStringPair(pvVar16,abStack_290,pvVar5);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x12);
    if (0xf < uStack_258) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_26c);
    }
    uStack_258 = 0xf;
    uStack_25c = 0;
    pvStack_26c = (void *)((uint)pvStack_26c & 0xffffff00);
    uStack_4 = 0xffffffff;
    if (0xf < uStack_278) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_28c);
    }
    uStack_278 = 0xf;
    uStack_27c = 0;
    pvStack_28c = (void *)((uint)pvStack_28c & 0xffffff00);
    piVar6 = EvaluationEnvironment_getTargetCard(env);
    uVar9 = (**(code **)(*piVar6 + 0x15c))(0x240,env);
    _sprintf(acStack_7c,"%d",uVar9);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&uStack_278,
               acStack_7c);
    local_c = (void *)0x14;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0xfffffd68,
               "#target1_cost#");
    local_c._0_1_ = 0x15;
    TextReplacementList_addStringPair(pvVar16,&stack0xfffffd68,&uStack_278);
    local_c = (void *)CONCAT31(local_c._1_3_,0x14);
    if (0xf < uStack_280) {
                    /* WARNING: Subroutine does not return */
      _free(unaff_EBX);
    }
    uStack_280 = 0xf;
    uStack_284 = 0;
    local_c = (void *)0xffffffff;
    if (0xf < uStack_260) {
                    /* WARNING: Subroutine does not return */
      _free(uStack_274);
    }
    uStack_260 = 0xf;
    uStack_264 = 0;
    uStack_274 = (void *)((uint)uStack_274 & 0xffffff00);
    piVar6 = EvaluationEnvironment_getTargetCard(env);
    iVar7 = (**(code **)(*piVar6 + 0x28))();
    pvVar5 = PlayArea_findPlayerElementById(*(void **)(iStack_23c + 0x30),iVar7);
    if (pvVar5 != (void *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0xfffffd68
                 ,"#target1_playerowner#");
      local_c = (void *)0x16;
      pvVar10 = Game_copyCommandObjectList(pvVar5,&uStack_258);
      local_c._0_1_ = 0x17;
      TextReplacementList_addStringPair(pvVar16,&stack0xfffffd68,pvVar10);
      local_c = (void *)CONCAT31(local_c._1_3_,0x16);
      FUN_0041f1d7();
      local_c = (void *)0xffffffff;
      FUN_0041f1d7();
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&stack0xfffffd68
                 ,"#target_playerowner#");
      local_c = (void *)0x18;
      pvVar5 = Game_copyCommandObjectList(pvVar5,&uStack_258);
      local_c._0_1_ = 0x19;
      TextReplacementList_addStringPair(pvVar16,&stack0xfffffd68,pvVar5);
      local_c = (void *)CONCAT31(local_c._1_3_,0x18);
      FUN_0041f1d7();
      local_c = (void *)0xffffffff;
      FUN_0041f1d7();
    }
    piVar6 = EvaluationEnvironment_getTargetCard(env);
    uVar9 = (**(code **)(*piVar6 + 0x30))
                      (0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
    piVar6 = (int *)FUN_00d8d382(uVar9);
    if (piVar6 != (int *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                (abStack_290,"#target1_bearer#");
      uStack_4 = 0x1a;
      pvVar5 = (void *)(**(code **)(*piVar6 + 0x108))(abStack_250);
      uStack_4._0_1_ = 0x1b;
      TextReplacementList_addStringPair(pvVar16,abStack_290,pvVar5);
      uStack_4 = CONCAT31(uStack_4._1_3_,0x1a);
      FUN_0041f1d7();
      uStack_4 = 0xffffffff;
      FUN_0041f1d7();
    }
  }
  pvVar5 = EvaluationEnvironment_getTarget2Card(env);
  if ((pvVar5 == (void *)0x0) ||
     (pvVar5 = EvaluationEnvironment_getTarget2Card(env), *(int *)((int)pvVar5 + 100) == 0)) {
    pvVar5 = EvaluationEnvironment_getTarget2Card(env);
    if (pvVar5 != (void *)0x0) {
      piVar6 = EvaluationEnvironment_getTarget2Card(env);
      cVar3 = (**(code **)(*piVar6 + 0x1e8))();
      if (cVar3 != '\0') {
        piVar6 = EvaluationEnvironment_getTarget2Card(env);
        iVar7 = Game_getMyPlayerID(*(void **)((int)local_234[0] + 0x30));
        iVar8 = (**(code **)(*piVar6 + 0x28))();
        if (iVar8 != iVar7) goto LAB_01420943;
      }
    }
  }
  else {
LAB_01420943:
    piVar6 = EvaluationEnvironment_getTarget2Card(env);
    cVar3 = (**(code **)(*piVar6 + 0x1e8))();
    if (cVar3 == '\0') {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_290,"#target2#");
      uStack_4 = 0x1d;
      piVar6 = EvaluationEnvironment_getTarget2Card(env);
      pvVar5 = (void *)(**(code **)(*piVar6 + 0x108))(abStack_250);
      uStack_4._0_1_ = 0x1e;
      pvVar16 = (void *)((int)local_234[0] + 0x144);
      TextReplacementList_addStringPair(pvVar16,abStack_290,pvVar5);
      uStack_4 = CONCAT31(uStack_4._1_3_,0x1d);
      FUN_0041f1d7();
    }
    else {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_290,"#target2#");
      uStack_4 = 0x1c;
      pvVar16 = (void *)((int)local_234[0] + 0x144);
      EvaluationEnvironment_getTarget2Card(env);
      pvVar5 = (void *)Card_getPropertyMap();
      TextReplacementList_addStringPair(pvVar16,abStack_290,pvVar5);
    }
    uStack_4 = 0xffffffff;
    FUN_0041f1d7();
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_290,"#target2_he#");
    uStack_4 = 0x1f;
    iVar7 = 1;
    pbVar17 = abStack_270;
    pvVar5 = EvaluationEnvironment_getTarget2Card(env);
    pvVar5 = Card_getDisplayNameForContext(pvVar5,pbVar17,iVar7);
    uStack_4._0_1_ = 0x20;
    TextReplacementList_addStringPair(pvVar16,abStack_290,pvVar5);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x1f);
    if (0xf < uStack_258) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_26c);
    }
    uStack_258 = 0xf;
    uStack_25c = 0;
    pvStack_26c = (void *)((uint)pvStack_26c & 0xffffff00);
    uStack_4 = 0xffffffff;
    if (0xf < uStack_278) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_28c);
    }
    uStack_278 = 0xf;
    uStack_27c = 0;
    pvStack_28c = (void *)((uint)pvStack_28c & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_290,"#target2_his#");
    uStack_4 = 0x21;
    iVar7 = 2;
    pbVar17 = abStack_270;
    pvVar5 = EvaluationEnvironment_getTarget2Card(env);
    pvVar5 = Card_getDisplayNameForContext(pvVar5,pbVar17,iVar7);
    uStack_4._0_1_ = 0x22;
    TextReplacementList_addStringPair(pvVar16,abStack_290,pvVar5);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x21);
    if (0xf < uStack_258) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_26c);
    }
    uStack_258 = 0xf;
    uStack_25c = 0;
    pvStack_26c = (void *)((uint)pvStack_26c & 0xffffff00);
    uStack_4 = 0xffffffff;
    if (0xf < uStack_278) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_28c);
    }
    uStack_278 = 0xf;
    uStack_27c = 0;
    pvStack_28c = (void *)((uint)pvStack_28c & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_290,"#target2_him#");
    uStack_4 = 0x23;
    iVar7 = 3;
    pbVar17 = abStack_270;
    pvVar5 = EvaluationEnvironment_getTarget2Card(env);
    pvVar5 = Card_getDisplayNameForContext(pvVar5,pbVar17,iVar7);
    uStack_4._0_1_ = 0x24;
    TextReplacementList_addStringPair(pvVar16,abStack_290,pvVar5);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x23);
    if (0xf < uStack_258) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_26c);
    }
    uStack_258 = 0xf;
    uStack_25c = 0;
    pvStack_26c = (void *)((uint)pvStack_26c & 0xffffff00);
    uStack_4 = 0xffffffff;
    if (0xf < uStack_278) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_28c);
    }
    uStack_278 = 0xf;
    uStack_27c = 0;
    pvStack_28c = (void *)((uint)pvStack_28c & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_290,"#target2_poss#");
    uStack_4 = 0x25;
    pbVar17 = abStack_270;
    EvaluationEnvironment_getTarget2Card(env);
    pvVar5 = (void *)CommandObjectEmitTextMessage_buildMessageText(pbVar17);
    uStack_4._0_1_ = 0x26;
    TextReplacementList_addStringPair(pvVar16,abStack_290,pvVar5);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x25);
    if (0xf < uStack_258) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_26c);
    }
    uStack_258 = 0xf;
    uStack_25c = 0;
    pvStack_26c = (void *)((uint)pvStack_26c & 0xffffff00);
    uStack_4 = 0xffffffff;
    if (0xf < uStack_278) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_28c);
    }
    uStack_278 = 0xf;
    uStack_27c = 0;
    pvStack_28c = (void *)((uint)pvStack_28c & 0xffffff00);
    piVar6 = EvaluationEnvironment_getTarget2Card(env);
    iVar7 = (**(code **)(*piVar6 + 0x28))();
    pvVar5 = PlayArea_findPlayerElementById(*(void **)((int)local_234[0] + 0x30),iVar7);
    if (pvVar5 != (void *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                (abStack_290,"#target2_playerowner#");
      uStack_4 = 0x27;
      pvVar5 = Game_copyCommandObjectList(pvVar5,abStack_250);
      uStack_4._0_1_ = 0x28;
      TextReplacementList_addStringPair(pvVar16,abStack_290,pvVar5);
      uStack_4 = CONCAT31(uStack_4._1_3_,0x27);
      FUN_0041f1d7();
      uStack_4 = 0xffffffff;
      FUN_0041f1d7();
    }
    piVar6 = EvaluationEnvironment_getTarget2Card(env);
    uVar9 = (**(code **)(*piVar6 + 0x30))
                      (0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
    piVar6 = (int *)FUN_00d8d382(uVar9);
    if (piVar6 != (int *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                (abStack_290,"#target2_bearer#");
      uStack_4 = 0x29;
      pvVar5 = (void *)(**(code **)(*piVar6 + 0x108))(abStack_250);
      uStack_4._0_1_ = 0x2a;
      TextReplacementList_addStringPair(pvVar16,abStack_290,pvVar5);
      uStack_4 = CONCAT31(uStack_4._1_3_,0x29);
      FUN_0041f1d7();
      uStack_4 = 0xffffffff;
      FUN_0041f1d7();
    }
  }
  iVar7 = Rules_getDynamicCardReturnCard();
  if ((iVar7 == 0) || (iVar7 = Rules_getDynamicCardReturnCard(), *(int *)(iVar7 + 100) == 0)) {
    iVar7 = Rules_getDynamicCardReturnCard();
    if (iVar7 != 0) {
      piVar6 = (int *)Rules_getDynamicCardReturnCard();
      cVar3 = (**(code **)(*piVar6 + 0x1e8))();
      if (cVar3 != '\0') {
        piVar6 = (int *)Rules_getDynamicCardReturnCard();
        pvStack_21c = (void *)Game_getMyPlayerID(*(void **)((int)local_234[0] + 0x30));
        pvVar5 = (void *)(**(code **)(*piVar6 + 0x28))();
        if (pvVar5 != pvStack_21c) goto LAB_01420dfd;
      }
    }
  }
  else {
LAB_01420dfd:
    piVar6 = (int *)Rules_getDynamicCardReturnCard();
    cVar3 = (**(code **)(*piVar6 + 0x1e8))();
    if (cVar3 == '\0') {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                (abStack_290,"#dynamiccardkey#");
      uStack_4 = 0x2c;
      piVar6 = (int *)Rules_getDynamicCardReturnCard();
      pvVar5 = (void *)(**(code **)(*piVar6 + 0x108))(abStack_250);
      uStack_4._0_1_ = 0x2d;
      pvVar16 = (void *)((int)local_234[0] + 0x144);
      TextReplacementList_addStringPair(pvVar16,abStack_290,pvVar5);
      uStack_4 = CONCAT31(uStack_4._1_3_,0x2c);
      FUN_0041f1d7();
    }
    else {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                (abStack_290,"#dynamiccardkey#");
      uStack_4 = 0x2b;
      pvVar16 = (void *)((int)local_234[0] + 0x144);
      Rules_getDynamicCardReturnCard();
      pvVar5 = (void *)Card_getPropertyMap();
      TextReplacementList_addStringPair(pvVar16,abStack_290,pvVar5);
    }
    uStack_4 = 0xffffffff;
    FUN_0041f1d7();
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (abStack_290,"#dynamiccardkey_he#");
    uStack_4 = 0x2e;
    iVar7 = 1;
    pbVar17 = abStack_270;
    pvVar5 = (void *)Rules_getDynamicCardReturnCard();
    pvVar5 = Card_getDisplayNameForContext(pvVar5,pbVar17,iVar7);
    uStack_4._0_1_ = 0x2f;
    TextReplacementList_addStringPair(pvVar16,abStack_290,pvVar5);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x2e);
    if (0xf < uStack_258) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_26c);
    }
    uStack_258 = 0xf;
    uStack_25c = 0;
    pvStack_26c = (void *)((uint)pvStack_26c & 0xffffff00);
    uStack_4 = 0xffffffff;
    if (0xf < uStack_278) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_28c);
    }
    uStack_278 = 0xf;
    uStack_27c = 0;
    pvStack_28c = (void *)((uint)pvStack_28c & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (abStack_290,"#dynamiccardkey_his#");
    uStack_4 = 0x30;
    iVar7 = 2;
    pbVar17 = abStack_270;
    pvVar5 = (void *)Rules_getDynamicCardReturnCard();
    pvVar5 = Card_getDisplayNameForContext(pvVar5,pbVar17,iVar7);
    uStack_4._0_1_ = 0x31;
    TextReplacementList_addStringPair(pvVar16,abStack_290,pvVar5);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x30);
    if (0xf < uStack_258) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_26c);
    }
    uStack_258 = 0xf;
    uStack_25c = 0;
    pvStack_26c = (void *)((uint)pvStack_26c & 0xffffff00);
    uStack_4 = 0xffffffff;
    if (0xf < uStack_278) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_28c);
    }
    uStack_278 = 0xf;
    uStack_27c = 0;
    pvStack_28c = (void *)((uint)pvStack_28c & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (abStack_290,"#dynamiccardkey_him#");
    uStack_4 = 0x32;
    iVar7 = 3;
    pbVar17 = abStack_270;
    pvVar5 = (void *)Rules_getDynamicCardReturnCard();
    pvVar5 = Card_getDisplayNameForContext(pvVar5,pbVar17,iVar7);
    uStack_4._0_1_ = 0x33;
    TextReplacementList_addStringPair(pvVar16,abStack_290,pvVar5);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x32);
    if (0xf < uStack_258) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_26c);
    }
    uStack_258 = 0xf;
    uStack_25c = 0;
    pvStack_26c = (void *)((uint)pvStack_26c & 0xffffff00);
    uStack_4 = 0xffffffff;
    if (0xf < uStack_278) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_28c);
    }
    uStack_278 = 0xf;
    uStack_27c = 0;
    pvStack_28c = (void *)((uint)pvStack_28c & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>
              (abStack_290,"#dynamiccardkey_poss#");
    uStack_4 = 0x34;
    pbVar17 = abStack_270;
    Rules_getDynamicCardReturnCard(pbVar17);
    pvVar5 = (void *)CommandObjectEmitTextMessage_buildMessageText(pbVar17);
    uStack_4._0_1_ = 0x35;
    TextReplacementList_addStringPair(pvVar16,abStack_290,pvVar5);
    uStack_4 = CONCAT31(uStack_4._1_3_,0x34);
    if (0xf < uStack_258) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_26c);
    }
    uStack_258 = 0xf;
    uStack_25c = 0;
    pvStack_26c = (void *)((uint)pvStack_26c & 0xffffff00);
    uStack_4 = 0xffffffff;
    if (0xf < uStack_278) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_28c);
    }
    uStack_278 = 0xf;
    uStack_27c = 0;
    pvStack_28c = (void *)((uint)pvStack_28c & 0xffffff00);
    piVar6 = (int *)Rules_getDynamicCardReturnCard();
    iVar7 = (**(code **)(*piVar6 + 0x28))();
    pvVar5 = PlayArea_findPlayerElementById(*(void **)((int)local_234[0] + 0x30),iVar7);
    if (pvVar5 != (void *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>
                (abStack_290,"#dynamiccardkey_playerowner#");
      uStack_4 = 0x36;
      pvVar5 = Game_copyCommandObjectList(pvVar5,abStack_250);
      uStack_4._0_1_ = 0x37;
      TextReplacementList_addStringPair(pvVar16,abStack_290,pvVar5);
      uStack_4 = CONCAT31(uStack_4._1_3_,0x36);
      FUN_0041f1d7();
      uStack_4 = 0xffffffff;
      FUN_0041f1d7();
    }
  }
  piVar6 = EvaluationEnvironment_getIntegerAsObject((void *)0x36);
  if (piVar6 != (int *)0x0) {
    if (piVar6[0x19] == 0) {
      cVar3 = (**(code **)(*piVar6 + 0x1e8))();
      if (cVar3 != '\0') {
        iVar7 = Game_getMyPlayerID(*(void **)((int)local_234[0] + 0x30));
        iVar8 = (**(code **)(*piVar6 + 0x28))();
        if (iVar8 != iVar7) goto LAB_01421209;
      }
    }
    else {
LAB_01421209:
      cVar3 = (**(code **)(*piVar6 + 0x1e8))();
      if (cVar3 == '\0') {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_290,"#target3#");
        uStack_4 = 0x39;
        pvVar5 = (void *)(**(code **)(*piVar6 + 0x108))(abStack_250);
        uStack_4._0_1_ = 0x3a;
        pvVar16 = (void *)((int)local_234[0] + 0x144);
        TextReplacementList_addStringPair(pvVar16,abStack_290,pvVar5);
        uStack_4 = CONCAT31(uStack_4._1_3_,0x39);
        FUN_0041f1d7();
      }
      else {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_290,"#target3#");
        uStack_4 = 0x38;
        pvVar16 = (void *)((int)local_234[0] + 0x144);
        pvVar5 = (void *)Card_getPropertyMap();
        TextReplacementList_addStringPair(pvVar16,abStack_290,pvVar5);
      }
      uStack_4 = 0xffffffff;
      FUN_0041f1d7();
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_290,"#target3_he#");
      uStack_4 = 0x3b;
      pvVar5 = Card_getDisplayNameForContext(piVar6,abStack_270,1);
      uStack_4._0_1_ = 0x3c;
      TextReplacementList_addStringPair(pvVar16,abStack_290,pvVar5);
      uStack_4 = CONCAT31(uStack_4._1_3_,0x3b);
      if (0xf < uStack_258) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_26c);
      }
      uStack_258 = 0xf;
      uStack_25c = 0;
      pvStack_26c = (void *)((uint)pvStack_26c & 0xffffff00);
      uStack_4 = 0xffffffff;
      if (0xf < uStack_278) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_28c);
      }
      uStack_278 = 0xf;
      uStack_27c = 0;
      pvStack_28c = (void *)((uint)pvStack_28c & 0xffffff00);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_290,"#target3_his#");
      uStack_4 = 0x3d;
      pvVar5 = Card_getDisplayNameForContext(piVar6,abStack_270,2);
      uStack_4._0_1_ = 0x3e;
      TextReplacementList_addStringPair(pvVar16,abStack_290,pvVar5);
      uStack_4 = CONCAT31(uStack_4._1_3_,0x3d);
      if (0xf < uStack_258) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_26c);
      }
      uStack_258 = 0xf;
      uStack_25c = 0;
      pvStack_26c = (void *)((uint)pvStack_26c & 0xffffff00);
      uStack_4 = 0xffffffff;
      if (0xf < uStack_278) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_28c);
      }
      uStack_278 = 0xf;
      uStack_27c = 0;
      pvStack_28c = (void *)((uint)pvStack_28c & 0xffffff00);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_290,"#target3_him#");
      uStack_4 = 0x3f;
      pvVar5 = Card_getDisplayNameForContext(piVar6,abStack_270,3);
      uStack_4._0_1_ = 0x40;
      TextReplacementList_addStringPair(pvVar16,abStack_290,pvVar5);
      uStack_4 = CONCAT31(uStack_4._1_3_,0x3f);
      if (0xf < uStack_258) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_26c);
      }
      uStack_258 = 0xf;
      uStack_25c = 0;
      pvStack_26c = (void *)((uint)pvStack_26c & 0xffffff00);
      uStack_4 = 0xffffffff;
      if (0xf < uStack_278) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_28c);
      }
      uStack_278 = 0xf;
      uStack_27c = 0;
      pvStack_28c = (void *)((uint)pvStack_28c & 0xffffff00);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_270,"#target3_poss#");
      uStack_4 = 0x41;
      pvVar5 = (void *)CommandObjectEmitTextMessage_buildMessageText(abStack_290);
      uStack_4._0_1_ = 0x42;
      TextReplacementList_addStringPair(pvVar16,abStack_270,pvVar5);
      uStack_4 = CONCAT31(uStack_4._1_3_,0x41);
      if (0xf < uStack_278) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_28c);
      }
      uStack_278 = 0xf;
      uStack_27c = 0;
      pvStack_28c = (void *)((uint)pvStack_28c & 0xffffff00);
      uStack_4 = 0xffffffff;
      FUN_0041f1d7();
      iVar7 = (**(code **)(*piVar6 + 0x28))();
      pvVar5 = PlayArea_findPlayerElementById(*(void **)((int)local_234[0] + 0x30),iVar7);
      if (pvVar5 != (void *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  (abStack_290,"#target3_playerowner#");
        uStack_4 = 0x43;
        pvVar5 = Game_copyCommandObjectList(pvVar5,abStack_250);
        uStack_4._0_1_ = 0x44;
        TextReplacementList_addStringPair(pvVar16,abStack_290,pvVar5);
        uStack_4 = CONCAT31(uStack_4._1_3_,0x43);
        FUN_0041f1d7();
        uStack_4 = 0xffffffff;
        FUN_0041f1d7();
      }
    }
  }
  piVar6 = EvaluationEnvironment_getIntegerAsObject((void *)0x37);
  if (piVar6 != (int *)0x0) {
    if (piVar6[0x19] == 0) {
      cVar3 = (**(code **)(*piVar6 + 0x1e8))();
      if (cVar3 != '\0') {
        iVar7 = Game_getMyPlayerID(*(void **)((int)local_234[0] + 0x30));
        iVar8 = (**(code **)(*piVar6 + 0x28))();
        if (iVar8 != iVar7) goto LAB_014215ca;
      }
    }
    else {
LAB_014215ca:
      cVar3 = (**(code **)(*piVar6 + 0x1e8))();
      if (cVar3 == '\0') {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_290,"#target4#");
        uStack_4 = 0x46;
        pvVar5 = (void *)(**(code **)(*piVar6 + 0x108))(abStack_250);
        uStack_4._0_1_ = 0x47;
        pvVar16 = (void *)((int)local_234[0] + 0x144);
        TextReplacementList_addStringPair(pvVar16,abStack_290,pvVar5);
        uStack_4 = CONCAT31(uStack_4._1_3_,0x46);
        FUN_0041f1d7();
      }
      else {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_290,"#target4#");
        uStack_4 = 0x45;
        pvVar16 = (void *)((int)local_234[0] + 0x144);
        pvVar5 = (void *)Card_getPropertyMap();
        TextReplacementList_addStringPair(pvVar16,abStack_290,pvVar5);
      }
      uStack_4 = 0xffffffff;
      FUN_0041f1d7();
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_290,"#target4_he#");
      uStack_4 = 0x48;
      pvVar5 = Card_getDisplayNameForContext(piVar6,abStack_250,1);
      uStack_4._0_1_ = 0x49;
      TextReplacementList_addStringPair(pvVar16,abStack_290,pvVar5);
      uStack_4 = CONCAT31(uStack_4._1_3_,0x48);
      FUN_0041f1d7();
      uStack_4 = 0xffffffff;
      FUN_0041f1d7();
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_270,"#target4_his#");
      uStack_4 = 0x4a;
      pvVar5 = Card_getDisplayNameForContext(piVar6,abStack_250,2);
      uStack_4._0_1_ = 0x4b;
      TextReplacementList_addStringPair(pvVar16,abStack_270,pvVar5);
      uStack_4 = CONCAT31(uStack_4._1_3_,0x4a);
      FUN_0041f1d7();
      uStack_4 = 0xffffffff;
      FUN_0041f1d7();
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_154,"#target4_him#");
      uStack_4 = 0x4c;
      pvVar5 = Card_getDisplayNameForContext(piVar6,abStack_250,3);
      uStack_4._0_1_ = 0x4d;
      TextReplacementList_addStringPair(pvVar16,abStack_154,pvVar5);
      uStack_4 = CONCAT31(uStack_4._1_3_,0x4c);
      FUN_0041f1d7();
      uStack_4 = 0xffffffff;
      FUN_0041f1d7();
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_204,"#target4_poss#");
      uStack_4 = 0x4e;
      pvVar5 = (void *)CommandObjectEmitTextMessage_buildMessageText(abStack_250);
      uStack_4._0_1_ = 0x4f;
      TextReplacementList_addStringPair(pvVar16,abStack_204,pvVar5);
      uStack_4 = CONCAT31(uStack_4._1_3_,0x4e);
      FUN_0041f1d7();
      uStack_4 = 0xffffffff;
      FUN_0041f1d7();
      iVar7 = (**(code **)(*piVar6 + 0x28))();
      pvVar5 = PlayArea_findPlayerElementById(*(void **)((int)local_234[0] + 0x30),iVar7);
      if (pvVar5 != (void *)0x0) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  (abStack_204,"#target4_playerowner#");
        uStack_4 = 0x50;
        pvVar5 = Game_copyCommandObjectList(pvVar5,abStack_250);
        uStack_4._0_1_ = 0x51;
        TextReplacementList_addStringPair(pvVar16,abStack_204,pvVar5);
        uStack_4 = CONCAT31(uStack_4._1_3_,0x50);
        FUN_0041f1d7();
        uStack_4 = 0xffffffff;
        FUN_0041f1d7();
      }
    }
  }
  pvVar16 = EvaluationEnvironment_getTargetCard(env);
  pvVar5 = local_234[0];
  if (pvVar16 != (void *)0x0) {
    piVar6 = EvaluationEnvironment_getTargetCard(env);
    cVar3 = (**(code **)(*piVar6 + 0x1e8))();
    pvVar5 = local_234[0];
    if (cVar3 != '\0') {
      piVar6 = EvaluationEnvironment_getTargetCard(env);
      pvVar5 = local_234[0];
      pvStack_21c = (void *)Game_getMyPlayerID(*(void **)((int)local_234[0] + 0x30));
      pvVar16 = (void *)(**(code **)(*piVar6 + 0x28))();
      if (pvVar16 == pvStack_21c) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_154,"you");
        uStack_4 = 0x52;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_204,"#target1#");
        uStack_4._0_1_ = 0x53;
        pvVar16 = (void *)((int)pvVar5 + 0x144);
        TextReplacementList_addStringPair(pvVar16,abStack_204,abStack_154);
        uStack_4 = CONCAT31(uStack_4._1_3_,0x52);
        FUN_0041f1d7();
        uStack_4 = 0xffffffff;
        FUN_0041f1d7();
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_290,"you");
        uStack_4 = 0x54;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_204,"#target1_he#");
        uStack_4._0_1_ = 0x55;
        TextReplacementList_addStringPair(pvVar16,abStack_204,abStack_290);
        uStack_4 = CONCAT31(uStack_4._1_3_,0x54);
        FUN_0041f1d7();
        uStack_4 = 0xffffffff;
        FUN_0041f1d7();
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_270,"your");
        uStack_4 = 0x56;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_204,"#target1_his#")
        ;
        uStack_4._0_1_ = 0x57;
        TextReplacementList_addStringPair(pvVar16,abStack_204,abStack_270);
        uStack_4 = CONCAT31(uStack_4._1_3_,0x56);
        FUN_0041f1d7();
        uStack_4 = 0xffffffff;
        FUN_0041f1d7();
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_138,"you");
        uStack_4 = 0x58;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_204,"#target1_him#")
        ;
        uStack_4._0_1_ = 0x59;
        TextReplacementList_addStringPair(pvVar16,abStack_204,abStack_138);
        uStack_4 = CONCAT31(uStack_4._1_3_,0x58);
        FUN_0041f1d7();
        uStack_4 = 0xffffffff;
        FUN_0041f1d7();
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_1c4,"you");
        uStack_4 = 0x5a;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_138,"#target#");
        uStack_4._0_1_ = 0x5b;
        TextReplacementList_addStringPair(pvVar16,abStack_138,abStack_1c4);
        uStack_4 = CONCAT31(uStack_4._1_3_,0x5a);
        FUN_0041f1d7();
        uStack_4 = 0xffffffff;
        FUN_0041f1d7();
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_1a8,"you");
        uStack_4 = 0x5c;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_1c4,"#target_he#");
        uStack_4._0_1_ = 0x5d;
        TextReplacementList_addStringPair(pvVar16,abStack_1c4,abStack_1a8);
        uStack_4 = CONCAT31(uStack_4._1_3_,0x5c);
        FUN_0041f1d7();
        uStack_4 = 0xffffffff;
        FUN_0041f1d7();
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_170,"your");
        uStack_4 = 0x5e;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_1a8,"#target_his#");
        uStack_4._0_1_ = 0x5f;
        TextReplacementList_addStringPair(pvVar16,abStack_1a8,abStack_170);
        uStack_4 = CONCAT31(uStack_4._1_3_,0x5e);
        FUN_0041f1d7();
        uStack_4 = 0xffffffff;
        FUN_0041f1d7();
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_18c,"you");
        uStack_4 = 0x60;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_170,"#target_him#");
        uStack_4._0_1_ = 0x61;
        TextReplacementList_addStringPair(pvVar16,abStack_170,abStack_18c);
        uStack_4 = CONCAT31(uStack_4._1_3_,0x60);
        FUN_0041f1d7();
        uStack_4 = 0xffffffff;
        FUN_0041f1d7();
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_1e0,"your");
        uStack_4 = 0x62;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  (abStack_18c,"#target1_poss#");
        uStack_4._0_1_ = 99;
        TextReplacementList_addStringPair(pvVar16,abStack_18c,abStack_1e0);
        uStack_4 = CONCAT31(uStack_4._1_3_,0x62);
        FUN_0041f1d7();
        uStack_4 = 0xffffffff;
        FUN_0041f1d7();
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_250,"your");
        uStack_4 = 100;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_1e0,"#target_poss#")
        ;
        uStack_4._0_1_ = 0x65;
        TextReplacementList_addStringPair(pvVar16,abStack_1e0,abStack_250);
        uStack_4 = CONCAT31(uStack_4._1_3_,100);
        FUN_0041f1d7();
        uStack_4 = 0xffffffff;
        FUN_0041f1d7();
      }
    }
  }
  pvVar16 = EvaluationEnvironment_getTarget2Card(env);
  if (pvVar16 != (void *)0x0) {
    piVar6 = EvaluationEnvironment_getTarget2Card(env);
    cVar3 = (**(code **)(*piVar6 + 0x1e8))();
    if (cVar3 != '\0') {
      piVar6 = EvaluationEnvironment_getTarget2Card(env);
      pvStack_21c = (void *)Game_getMyPlayerID(*(void **)((int)pvVar5 + 0x30));
      pvVar16 = (void *)(**(code **)(*piVar6 + 0x28))();
      if (pvVar16 == pvStack_21c) {
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_1e0,"you");
        uStack_4 = 0x66;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_250,"#target2#");
        uStack_4._0_1_ = 0x67;
        pvVar16 = (void *)((int)pvVar5 + 0x144);
        TextReplacementList_addStringPair(pvVar16,abStack_250,abStack_1e0);
        uStack_4 = CONCAT31(uStack_4._1_3_,0x66);
        FUN_0041f1d7();
        uStack_4 = 0xffffffff;
        FUN_0041f1d7();
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_18c,"you");
        uStack_4 = 0x68;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_250,"#target2_he#");
        uStack_4._0_1_ = 0x69;
        TextReplacementList_addStringPair(pvVar16,abStack_250,abStack_18c);
        uStack_4 = CONCAT31(uStack_4._1_3_,0x68);
        FUN_0041f1d7();
        uStack_4 = 0xffffffff;
        FUN_0041f1d7();
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_170,"your");
        uStack_4 = 0x6a;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_250,"#target2_his#")
        ;
        uStack_4._0_1_ = 0x6b;
        TextReplacementList_addStringPair(pvVar16,abStack_250,abStack_170);
        uStack_4 = CONCAT31(uStack_4._1_3_,0x6a);
        FUN_0041f1d7();
        uStack_4 = 0xffffffff;
        FUN_0041f1d7();
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_1a8,"you");
        uStack_4 = 0x6c;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_250,"#target2_him#")
        ;
        uStack_4._0_1_ = 0x6d;
        TextReplacementList_addStringPair(pvVar16,abStack_250,abStack_1a8);
        uStack_4 = CONCAT31(uStack_4._1_3_,0x6c);
        FUN_0041f1d7();
        uStack_4 = 0xffffffff;
        FUN_0041f1d7();
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_1c4,"your");
        uStack_4 = 0x6e;
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>
                  (abStack_250,"#target2_poss#");
        uStack_4._0_1_ = 0x6f;
        TextReplacementList_addStringPair(pvVar16,abStack_250,abStack_1c4);
        uStack_4 = CONCAT31(uStack_4._1_3_,0x6e);
        FUN_0041f1d7();
        uStack_4 = 0xffffffff;
        FUN_0041f1d7();
      }
    }
  }
  uStack_cc = 0xf;
  uStack_d0 = 0;
  appppppcStack_e0[0] = (char ******)((uint)appppppcStack_e0[0] & 0xffffff00);
  uStack_94 = 0xf;
  uStack_98 = 0;
  pvStack_a8 = (void *)((uint)pvStack_a8 & 0xffffff00);
  uStack_b0 = 0xf;
  uStack_b4 = 0;
  appppppcStack_c4[0] = (char ******)((uint)appppppcStack_c4[0] & 0xffffff00);
  uStack_78 = 0xf;
  acStack_7c[0] = '\0';
  acStack_7c[1] = '\0';
  acStack_7c[2] = '\0';
  acStack_7c[3] = '\0';
  pvStack_8c = (void *)((uint)pvStack_8c & 0xffffff00);
  uStack_e8 = 0xf;
  uStack_ec = 0;
  pvStack_fc = (void *)((uint)pvStack_fc & 0xffffff00);
  uStack_228 = 0;
  uStack_224 = 0;
  uStack_220 = 0;
  pvStack_28c = (void *)0x0;
  uStack_288 = 0;
  uStack_284 = 0;
  uStack_4._1_3_ = 0;
  uStack_210 = 0;
  uStack_20c = 0;
  uStack_208 = 0;
  uStack_4._0_1_ = 0x77;
  uVar1 = (uint3)uStack_274;
  switch(*(undefined4 *)((int)pvVar5 + 0x140)) {
  case 0:
    goto switchD_0142212a_caseD_0;
  case 1:
    uStack_274._0_3_ = uVar1 & 0xffff;
    break;
  case 2:
    uStack_274._0_3_ = CONCAT12(1,(undefined2)uStack_274);
    break;
  case 3:
    uStack_274._0_3_ = uVar1 & 0xffff;
    cStack_251 = '\x01';
    goto LAB_0142213e;
  case 4:
    uStack_274 = (void *)((uint)uStack_274 & 0xffff);
    goto LAB_01422ac5;
  default:
    FUN_012f5a60("!\"Unknown message target class in CommandObject_EmitTextMessage::doCommand()\"",
                 "..\\common\\common\\command\\CommandObjectEmitTextMessage.cpp",0x168);
    goto switchD_0142212a_caseD_0;
  }
  cStack_251 = '\0';
LAB_0142213e:
  uStack_274 = (void *)CONCAT13(1,(uint3)uStack_274);
  MessageText_copyFrom((int)pvVar5 + 0x144);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_1e0,"You");
  uStack_4._0_1_ = 0x78;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_250,"#actor#");
  uStack_4._0_1_ = 0x79;
  TextReplacementList_addStringPair(auStack_22c,abStack_250,abStack_1e0);
  uStack_4._0_1_ = 0x78;
  FUN_0041f1d7();
  uStack_4._0_1_ = 0x77;
  FUN_0041f1d7();
  CardText_applyPluralSuffixTokens(auStack_22c);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_18c,"you");
  uStack_4._0_1_ = 0x7a;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_250,"#player_he#");
  uStack_4._0_1_ = 0x7b;
  TextReplacementList_addStringPair(auStack_22c,abStack_250,abStack_18c);
  uStack_4._0_1_ = 0x7a;
  FUN_0041f1d7();
  uStack_4._0_1_ = 0x77;
  FUN_0041f1d7();
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_170,"your");
  uStack_4._0_1_ = 0x7c;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_250,"#player_his#");
  uStack_4._0_1_ = 0x7d;
  TextReplacementList_addStringPair(auStack_22c,abStack_250,abStack_170);
  uStack_4._0_1_ = 0x7c;
  FUN_0041f1d7();
  uStack_4._0_1_ = 0x77;
  FUN_0041f1d7();
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_1a8,"you");
  uStack_4._0_1_ = 0x7e;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_250,"#player_him#");
  uStack_4._0_1_ = 0x7f;
  TextReplacementList_addStringPair(auStack_22c,abStack_250,abStack_1a8);
  uStack_4._0_1_ = 0x7e;
  FUN_0041f1d7();
  uStack_4._0_1_ = 0x77;
  FUN_0041f1d7();
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_1c4,"you");
  uStack_4._0_1_ = 0x80;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_250,"#actor_he#");
  uStack_4._0_1_ = 0x81;
  TextReplacementList_addStringPair(auStack_22c,abStack_250,abStack_1c4);
  uStack_4._0_1_ = 0x80;
  FUN_0041f1d7();
  uStack_4._0_1_ = 0x77;
  FUN_0041f1d7();
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_138,"your");
  uStack_4._0_1_ = 0x82;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_250,"#actor_his#");
  uStack_4._0_1_ = 0x83;
  TextReplacementList_addStringPair(auStack_22c,abStack_250,abStack_138);
  uStack_4._0_1_ = 0x82;
  FUN_0041f1d7();
  uStack_4._0_1_ = 0x77;
  FUN_0041f1d7();
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_204,"your");
  uStack_4._0_1_ = 0x84;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_250,"#actor_poss#");
  uStack_4._0_1_ = 0x85;
  TextReplacementList_addStringPair(auStack_22c,abStack_250,abStack_204);
  uStack_4._0_1_ = 0x84;
  FUN_0041f1d7();
  uStack_4._0_1_ = 0x77;
  FUN_0041f1d7();
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_154,"Your");
  uStack_4._0_1_ = 0x86;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_250,"#Actor_poss#");
  uStack_4._0_1_ = 0x87;
  TextReplacementList_addStringPair(auStack_22c,abStack_250,abStack_154);
  uStack_4._0_1_ = 0x86;
  FUN_0041f1d7();
  uStack_4._0_1_ = 0x77;
  FUN_0041f1d7();
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_270,"you");
  uStack_4._0_1_ = 0x88;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
  basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_250,"#actor_him#");
  uStack_4._0_1_ = 0x89;
  TextReplacementList_addStringPair(auStack_22c,abStack_250,abStack_270);
  uStack_4._0_1_ = 0x88;
  FUN_0041f1d7();
  uStack_4._0_1_ = 0x77;
  FUN_0041f1d7();
  pvVar16 = EvaluationEnvironment_resolveTarget(env);
  if ((pvVar16 != (void *)0x0) &&
     (pvVar16 = EvaluationEnvironment_getTargetPlayer(env), pvVar16 != (void *)0x0)) {
    pbVar17 = abStack_1e0;
    pvVar16 = EvaluationEnvironment_getTargetPlayer(env);
    pbVar11 = Game_copyCommandObjectList(pvVar16,pbVar17);
    uStack_4._0_1_ = 0x8a;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_100,pbVar11,0,0xffffffff);
    uStack_4._0_1_ = 0x77;
    FUN_0041f1d7();
    FUN_01241fc0(&DAT_01861a80);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_250,"#targetplayer#");
    uStack_4._0_1_ = 0x8b;
    TextReplacementList_addStringPair(auStack_22c,abStack_250,abStack_100);
    uStack_4._0_1_ = 0x77;
    FUN_0041f1d7();
  }
  StringReplacementList_applyAll(local_1e8,auStack_22c,auStack_e4);
  pvVar16 = EvaluationEnvironment_getMember14(env);
  if (pvVar16 != (void *)0x0) {
    pppppppcVar15 = (char *******)appppppcStack_e0[0];
    if (uStack_cc < 0x10) {
      pppppppcVar15 = appppppcStack_e0;
    }
    pvVar16 = EvaluationEnvironment_getMember14(env);
    pvVar10 = EvaluationEnvironment_getGame(env);
    GamePlayer_logFormattedMessage(pvVar10,(int)pvVar16,(char *)pppppppcVar15);
  }
  if ((uStack_274._2_1_ != '\0') &&
     (pvVar16 = EvaluationEnvironment_getMember14(env), pvVar16 != (void *)0x0)) {
    MessageText_copyFrom((int)pvVar5 + 0x144);
    pbVar17 = abStack_270;
    pvVar16 = EvaluationEnvironment_getMember14(env);
    pbVar11 = Game_copyCommandObjectList(pvVar16,pbVar17);
    uStack_4._0_1_ = 0x8c;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_100,pbVar11,0,0xffffffff);
    uStack_4._0_1_ = 0x77;
    FUN_0041f1d7();
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_250,"#actor#");
    uStack_4._0_1_ = 0x8d;
    TextReplacementList_addStringPair(auStack_22c,abStack_250,abStack_100);
    uStack_4._0_1_ = 0x77;
    FUN_0041f1d7();
    CommandObjectEmitTextMessage_expandPluralTokens(auStack_22c);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_1e0,"#player_he#");
    uStack_4._0_1_ = 0x8e;
    pvVar16 = (void *)0x1;
    EvaluationEnvironment_getMember14(env);
    pcVar12 = PlayElement_getDisplayNameVariant(pvVar16,(int)pvVar4);
    TextReplacementList_addStringPair(auStack_22c,abStack_1e0,pcVar12);
    uStack_4._0_1_ = 0x77;
    FUN_0041f1d7();
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_18c,"#player_his#");
    uStack_4._0_1_ = 0x8f;
    pvVar16 = (void *)0x2;
    EvaluationEnvironment_getMember14(env);
    pcVar12 = PlayElement_getDisplayNameVariant(pvVar16,(int)pvVar4);
    TextReplacementList_addStringPair(auStack_22c,abStack_18c,pcVar12);
    uStack_4._0_1_ = 0x77;
    FUN_0041f1d7();
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_170,"#player_him#");
    uStack_4._0_1_ = 0x90;
    pvVar16 = (void *)0x3;
    EvaluationEnvironment_getMember14(env);
    pcVar12 = PlayElement_getDisplayNameVariant(pvVar16,(int)pvVar4);
    TextReplacementList_addStringPair(auStack_22c,abStack_170,pcVar12);
    uStack_4._0_1_ = 0x77;
    FUN_0041f1d7();
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_1a8,"#actor_he#");
    uStack_4._0_1_ = 0x91;
    pvVar16 = (void *)0x1;
    EvaluationEnvironment_getMember14(env);
    pcVar12 = PlayElement_getDisplayNameVariant(pvVar16,(int)pvVar4);
    TextReplacementList_addStringPair(auStack_22c,abStack_1a8,pcVar12);
    uStack_4._0_1_ = 0x77;
    FUN_0041f1d7();
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_1c4,"#actor_his#");
    uStack_4._0_1_ = 0x92;
    pvVar16 = (void *)0x2;
    EvaluationEnvironment_getMember14(env);
    pcVar12 = PlayElement_getDisplayNameVariant(pvVar16,(int)pvVar4);
    TextReplacementList_addStringPair(auStack_22c,abStack_1c4,pcVar12);
    uStack_4._0_1_ = 0x77;
    FUN_0041f1d7();
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_138,"#actor_him#");
    uStack_4._0_1_ = 0x93;
    pvVar16 = (void *)0x3;
    EvaluationEnvironment_getMember14(env);
    pcVar12 = PlayElement_getDisplayNameVariant(pvVar16,(int)pvVar4);
    TextReplacementList_addStringPair(auStack_22c,abStack_138,pcVar12);
    uStack_4._0_1_ = 0x77;
    FUN_0041f1d7();
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_204,"#actor_poss#");
    uStack_4._0_1_ = 0x94;
    pbVar17 = abStack_250;
    pvVar16 = EvaluationEnvironment_getMember14(env);
    pvVar16 = Game_formatCommandObjectListText(pvVar16,pbVar17);
    uStack_4._0_1_ = 0x95;
    TextReplacementList_addStringPair(auStack_22c,abStack_204,pvVar16);
    uStack_4._0_1_ = 0x94;
    FUN_0041f1d7();
    uStack_4._0_1_ = 0x77;
    FUN_0041f1d7();
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_154,"#Actor_poss#");
    uStack_4._0_1_ = 0x96;
    pbVar17 = abStack_250;
    pvVar16 = EvaluationEnvironment_getMember14(env);
    pvVar16 = Game_formatCommandObjectListText(pvVar16,pbVar17);
    uStack_4._0_1_ = 0x97;
    TextReplacementList_addStringPair(auStack_22c,abStack_154,pvVar16);
    uStack_4._0_1_ = 0x96;
    FUN_0041f1d7();
    uStack_4._0_1_ = 0x77;
    FUN_0041f1d7();
    pvVar16 = EvaluationEnvironment_resolveTarget(env);
    if (pvVar16 != (void *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_1e0,"your");
      uStack_4._0_1_ = 0x98;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_250,"#targetplayer#");
      uStack_4._0_1_ = 0x99;
      TextReplacementList_addStringPair(auStack_22c,abStack_250,abStack_1e0);
      uStack_4._0_1_ = 0x98;
      FUN_0041f1d7();
      uStack_4._0_1_ = 0x77;
      FUN_0041f1d7();
    }
    StringReplacementList_applyAll(local_1e8,auStack_22c,auStack_e4);
    pppppppcVar15 = (char *******)appppppcStack_e0[0];
    if (uStack_cc < 0x10) {
      pppppppcVar15 = appppppcStack_e0;
    }
    pvVar16 = EvaluationEnvironment_getMember14(env);
    pvVar10 = EvaluationEnvironment_getGame(env);
    GamePlayer_logFormattedMessage(pvVar10,(int)pvVar16,(char *)pppppppcVar15);
  }
  if (cStack_251 == '\0') goto switchD_0142212a_caseD_0;
LAB_01422ac5:
  pvStack_26c = (void *)0x0;
  uStack_268 = 0;
  uStack_264 = 0;
  uStack_4._0_1_ = 0x9a;
  pbVar17 = abStack_270;
  EvaluationEnvironment_getGame(env);
  FUN_013630f0(pbVar17);
  piVar6 = (int *)FUN_01269090(local_234);
  pvStack_21c = (void *)*piVar6;
  piStack_218 = (int *)piVar6[1];
  MessageText_copyFrom((int)pvVar5 + 0x144);
  pvVar16 = EvaluationEnvironment_getMember14(env);
  if (pvVar16 == (void *)0x0) {
    pvVar4 = Game_getCurrentTurn(*(void **)((int)pvVar5 + 0x30));
    uVar13 = get_field_8(pvVar4);
    if (uVar13 != 0) {
      puVar18 = auStack_11c;
      pvVar4 = Game_getCurrentTurn(*(void **)((int)pvVar5 + 0x30));
      pvVar4 = (void *)get_field_8(pvVar4);
      pbVar11 = Game_copyCommandObjectList(pvVar4,puVar18);
      uStack_4._0_1_ = 0xa7;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (abStack_100,pbVar11,0,0xffffffff);
      uStack_4._0_1_ = 0x9a;
      FUN_0041f1d7();
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_250,"#actor#");
      uStack_4._0_1_ = 0xa8;
      TextReplacementList_addStringPair(auStack_214,abStack_250,abStack_100);
      goto LAB_01422f94;
    }
  }
  else {
    puVar18 = auStack_11c;
    pvVar5 = EvaluationEnvironment_getMember14(env);
    pbVar11 = Game_copyCommandObjectList(pvVar5,puVar18);
    uStack_4._0_1_ = 0x9b;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_100,pbVar11,0,0xffffffff);
    uStack_4._0_1_ = 0x9a;
    FUN_0041f1d7();
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_250,"#actor#");
    uStack_4._0_1_ = 0x9c;
    TextReplacementList_addStringPair(auStack_214,abStack_250,abStack_100);
    uStack_4._0_1_ = 0x9a;
    FUN_0041f1d7();
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_1e0,"#player_he#");
    uStack_4._0_1_ = 0x9d;
    pvVar5 = (void *)0x1;
    EvaluationEnvironment_getMember14(env);
    pcVar12 = PlayElement_getDisplayNameVariant(pvVar5,(int)pvVar4);
    TextReplacementList_addStringPair(auStack_214,abStack_1e0,pcVar12);
    uStack_4._0_1_ = 0x9a;
    FUN_0041f1d7();
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_18c,"#player_his#");
    uStack_4._0_1_ = 0x9e;
    pvVar5 = (void *)0x2;
    EvaluationEnvironment_getMember14(env);
    pcVar12 = PlayElement_getDisplayNameVariant(pvVar5,(int)pvVar4);
    TextReplacementList_addStringPair(auStack_214,abStack_18c,pcVar12);
    uStack_4._0_1_ = 0x9a;
    FUN_0041f1d7();
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_170,"#player_him#");
    uStack_4._0_1_ = 0x9f;
    pvVar5 = (void *)0x3;
    EvaluationEnvironment_getMember14(env);
    pcVar12 = PlayElement_getDisplayNameVariant(pvVar5,(int)pvVar4);
    TextReplacementList_addStringPair(auStack_214,abStack_170,pcVar12);
    uStack_4._0_1_ = 0x9a;
    FUN_0041f1d7();
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_1a8,"#actor_he#");
    uStack_4._0_1_ = 0xa0;
    pvVar5 = (void *)0x1;
    EvaluationEnvironment_getMember14(env);
    pcVar12 = PlayElement_getDisplayNameVariant(pvVar5,(int)pvVar4);
    TextReplacementList_addStringPair(auStack_214,abStack_1a8,pcVar12);
    uStack_4._0_1_ = 0x9a;
    FUN_0041f1d7();
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_1c4,"#actor_his#");
    uStack_4._0_1_ = 0xa1;
    pvVar5 = (void *)0x2;
    EvaluationEnvironment_getMember14(env);
    pcVar12 = PlayElement_getDisplayNameVariant(pvVar5,(int)pvVar4);
    TextReplacementList_addStringPair(auStack_214,abStack_1c4,pcVar12);
    uStack_4._0_1_ = 0x9a;
    FUN_0041f1d7();
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_138,"#actor_him#");
    uStack_4._0_1_ = 0xa2;
    pvVar5 = (void *)0x3;
    EvaluationEnvironment_getMember14(env);
    pcVar12 = PlayElement_getDisplayNameVariant(pvVar5,(int)pvVar4);
    TextReplacementList_addStringPair(auStack_214,abStack_138,pcVar12);
    uStack_4._0_1_ = 0x9a;
    FUN_0041f1d7();
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_204,"#actor_poss#");
    uStack_4._0_1_ = 0xa3;
    puVar18 = auStack_11c;
    pvVar4 = EvaluationEnvironment_getMember14(env);
    pvVar4 = Game_formatCommandObjectListText(pvVar4,puVar18);
    uStack_4._0_1_ = 0xa4;
    TextReplacementList_addStringPair(auStack_214,abStack_204,pvVar4);
    uStack_4._0_1_ = 0xa3;
    FUN_0041f1d7();
    uStack_4._0_1_ = 0x9a;
    FUN_0041f1d7();
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_154,"#Actor_poss#");
    uStack_4._0_1_ = 0xa5;
    puVar18 = auStack_11c;
    pvVar4 = EvaluationEnvironment_getMember14(env);
    pvVar4 = Game_formatCommandObjectListText(pvVar4,puVar18);
    uStack_4._0_1_ = 0xa6;
    TextReplacementList_addStringPair(auStack_214,abStack_154,pvVar4);
    uStack_4._0_1_ = 0xa5;
    FUN_0041f1d7();
LAB_01422f94:
    uStack_4._0_1_ = 0x9a;
    FUN_0041f1d7();
  }
  CommandObjectEmitTextMessage_expandPluralTokens(auStack_214);
  pvVar4 = EvaluationEnvironment_resolveTarget(env);
  if ((pvVar4 != (void *)0x0) &&
     (pvVar4 = EvaluationEnvironment_getTargetPlayer(env), pvVar4 != (void *)0x0)) {
    puVar18 = auStack_11c;
    pvVar4 = EvaluationEnvironment_getTargetPlayer(env);
    pbVar11 = Game_copyCommandObjectList(pvVar4,puVar18);
    uStack_4._0_1_ = 0xa9;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_100,pbVar11,0,0xffffffff);
    uStack_4._0_1_ = 0x9a;
    FUN_0041f1d7();
    FUN_01241fc0(&DAT_01861a80);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_250,"#targetplayer#");
    uStack_4._0_1_ = 0xaa;
    TextReplacementList_addStringPair(auStack_22c,abStack_250,abStack_100);
    uStack_4._0_1_ = 0x9a;
    FUN_0041f1d7();
  }
  StringReplacementList_applyAll(local_1e8,auStack_214,auStack_c8);
  puVar14 = (undefined4 *)FUN_01269060(local_234);
  local_1e8 = (void *)*puVar14;
  piVar6 = (int *)puVar14[1];
  while( true ) {
    pvVar4 = local_1e8;
    if ((local_1e8 == (void *)0x0) || (local_1e8 != pvStack_21c)) {
      FUN_00d83c2d();
    }
    if (piVar6 == piStack_218) break;
    if (pvVar4 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (*(int **)((int)pvVar4 + 8) <= piVar6) {
      FUN_00d83c2d();
    }
    pvVar4 = (void *)*piVar6;
    if (((uStack_274._3_1_ == '\0') ||
        (pvVar5 = EvaluationEnvironment_getMember14(env), pvVar4 != pvVar5)) &&
       ((uStack_274._2_1_ == '\0' ||
        (pvVar5 = EvaluationEnvironment_getTargetPlayer(env), pvVar4 != pvVar5)))) {
      pppppppcVar15 = (char *******)appppppcStack_c4[0];
      if (uStack_b0 < 0x10) {
        pppppppcVar15 = appppppcStack_c4;
      }
      pvVar5 = EvaluationEnvironment_getGame(env);
      GamePlayer_logFormattedMessage(pvVar5,(int)pvVar4,(char *)pppppppcVar15);
    }
    if (*(int **)((int)local_1e8 + 8) <= piVar6) {
      FUN_00d83c2d();
    }
    piVar6 = piVar6 + 1;
  }
  uStack_4._0_1_ = 0x77;
  if (pvStack_26c != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_26c);
  }
  pvStack_26c = (void *)0x0;
  uStack_268 = 0;
  uStack_264 = 0;
switchD_0142212a_caseD_0:
  uStack_4._0_1_ = 0x76;
  FUN_012ce9d0();
  uStack_4._0_1_ = 0x75;
  FUN_012ce9d0();
  uStack_4._0_1_ = 0x74;
  FUN_012ce9d0();
  uStack_4 = CONCAT31(uStack_4._1_3_,0x73);
  if (0xf < uStack_e8) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_fc);
  }
  uStack_e8 = 0xf;
  uStack_ec = 0;
  pvStack_fc = (void *)((uint)pvStack_fc & 0xffffff00);
  uStack_4 = CONCAT31(uStack_4._1_3_,0x72);
  if (0xf < uStack_78) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_8c);
  }
  uStack_78 = 0xf;
  acStack_7c[0] = '\0';
  acStack_7c[1] = '\0';
  acStack_7c[2] = '\0';
  acStack_7c[3] = '\0';
  pvStack_8c = (void *)((uint)pvStack_8c & 0xffffff00);
  uStack_4 = CONCAT31(uStack_4._1_3_,0x71);
  if (0xf < uStack_b0) {
                    /* WARNING: Subroutine does not return */
    _free(appppppcStack_c4[0]);
  }
  uStack_b0 = 0xf;
  uStack_b4 = 0;
  appppppcStack_c4[0] = (char ******)((uint)appppppcStack_c4[0] & 0xffffff00);
  uStack_4 = CONCAT31(uStack_4._1_3_,0x70);
  if (uStack_94 < 0x10) {
    uStack_94 = 0xf;
    uStack_98 = 0;
    pvStack_a8 = (void *)((uint)pvStack_a8 & 0xffffff00);
    uStack_4 = 0xffffffff;
    if (uStack_cc < 0x10) {
      ExceptionList = local_c;
      return;
    }
                    /* WARNING: Subroutine does not return */
    _free(appppppcStack_e0[0]);
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_a8);
}

