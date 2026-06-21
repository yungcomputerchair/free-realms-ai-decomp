// addr: 0x0141f340
// name: CommandObjectEmitTextMessage_doCommand
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

undefined4 * __thiscall
CommandObjectEmitTextMessage_doCommand
          (undefined4 *param_1,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2,
          undefined4 param_3,undefined4 param_4,void *param_5)

{
  char cVar1;
  undefined4 *puVar2;
  bool bVar3;
  void *valueData;
  void *pvVar4;
  uint uVar5;
  int *piVar6;
  undefined4 uVar7;
  int extraout_EAX;
  int *extraout_EAX_00;
  char *pcVar8;
  undefined4 *list;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar9;
  int iVar10;
  void *local_45c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_458 [4];
  void *pvStack_454;
  undefined4 uStack_444;
  uint uStack_440;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_43c [4];
  void *pvStack_438;
  undefined4 uStack_428;
  uint uStack_424;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_420 [4];
  void *local_41c;
  undefined4 local_40c;
  uint local_408;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_404;
  undefined4 *local_400;
  undefined4 local_3fc;
  char acStack_3f8 [1000];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Executes CommandObject_EmitTextMessage by applying
                       owner/target/player/custom-number substitutions and optionally emitting text.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01694477;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_45c;
  valueData = (void *)(DAT_01b839d8 ^ (uint)&stack0xfffffb94);
  ExceptionList = &local_c;
  local_404 = param_2;
  local_3fc = param_4;
  local_45c = param_5;
  local_400 = param_1;
  CommandObject_ctor(param_1,param_5);
  *param_1 = CommandObject_EmitTextMessage::vftable;
  param_1[2] = CommandObject_EmitTextMessage::vftable;
  param_1[0x4f] = 0xf;
  param_1[0x4e] = 0;
  *(undefined1 *)(param_1 + 0x4a) = 0;
  list = param_1 + 0x51;
  param_1[0x52] = 0;
  param_1[0x53] = 0;
  param_1[0x54] = 0;
  local_4._1_3_ = 0;
  local_4._0_1_ = 2;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(local_400 + 0x12),
             "CommandObject_EmitTextMessage",0x1d);
  local_400[0x50] = param_3;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x49),
             local_404,0,0xffffffff);
  pvVar4 = EvaluationEnvironment_getOriginCard(local_45c);
  puVar2 = local_400;
  local_400[0x19] = pvVar4;
  if (local_400[0x4e] == 0) {
    set_boolean_value_key_14(true);
  }
  pvVar4 = EvaluationEnvironment_getMember14(puVar2 + 0x21);
  if (pvVar4 == (void *)0x0) {
    pvVar4 = Game_getCurrentTurn((void *)puVar2[0xc]);
    uVar5 = get_field_8(pvVar4);
    if (uVar5 != 0) {
      pvVar4 = Game_getCurrentTurn((void *)puVar2[0xc]);
      uVar5 = get_field_8(pvVar4);
      FUN_013815b0(uVar5);
    }
  }
  MessageText_copyFrom(local_3fc);
  if (puVar2[0x19] != 0) {
    local_408 = 0xf;
    local_40c = 0;
    local_41c = (void *)((uint)local_41c & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_420,"#title#",7);
    local_4._0_1_ = 3;
    piVar6 = EvaluationEnvironment_getOriginCard(local_45c);
    pvVar4 = (void *)(**(code **)(*piVar6 + 0x108))(local_43c);
    local_4._0_1_ = 4;
    TextReplacementList_addStringPair(list,local_420,pvVar4);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (0xf < uStack_424) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_438);
    }
    uStack_424 = 0xf;
    uStack_428 = 0;
    pvStack_438 = (void *)((uint)pvStack_438 & 0xffffff00);
    local_4._0_1_ = 2;
    if (0xf < local_408) {
                    /* WARNING: Subroutine does not return */
      _free(local_41c);
    }
    local_408 = 0xf;
    local_40c = 0;
    local_41c = (void *)((uint)local_41c & 0xffffff00);
    uStack_440 = 0xf;
    uStack_444 = 0;
    pvStack_454 = (void *)((uint)pvStack_454 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_458,"#he#",4);
    local_4._0_1_ = 5;
    iVar10 = 1;
    pbVar9 = local_43c;
    pvVar4 = EvaluationEnvironment_getOriginCard(local_45c);
    pvVar4 = Card_getDisplayNameForContext(pvVar4,pbVar9,iVar10);
    local_4._0_1_ = 6;
    TextReplacementList_addStringPair(list,abStack_458,pvVar4);
    local_4 = CONCAT31(local_4._1_3_,5);
    if (0xf < uStack_424) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_438);
    }
    uStack_424 = 0xf;
    uStack_428 = 0;
    pvStack_438 = (void *)((uint)pvStack_438 & 0xffffff00);
    local_4._0_1_ = 2;
    if (0xf < uStack_440) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_454);
    }
    uStack_440 = 0xf;
    uStack_444 = 0;
    pvStack_454 = (void *)((uint)pvStack_454 & 0xffffff00);
    local_408 = 0xf;
    local_40c = 0;
    local_41c = (void *)((uint)local_41c & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_420,"#his#",5);
    local_4._0_1_ = 7;
    iVar10 = 2;
    pbVar9 = local_43c;
    pvVar4 = EvaluationEnvironment_getOriginCard(local_45c);
    pvVar4 = Card_getDisplayNameForContext(pvVar4,pbVar9,iVar10);
    local_4._0_1_ = 8;
    TextReplacementList_addStringPair(list,local_420,pvVar4);
    local_4 = CONCAT31(local_4._1_3_,7);
    if (0xf < uStack_424) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_438);
    }
    uStack_424 = 0xf;
    uStack_428 = 0;
    pvStack_438 = (void *)((uint)pvStack_438 & 0xffffff00);
    local_4._0_1_ = 2;
    if (0xf < local_408) {
                    /* WARNING: Subroutine does not return */
      _free(local_41c);
    }
    local_408 = 0xf;
    local_40c = 0;
    local_41c = (void *)((uint)local_41c & 0xffffff00);
    uStack_440 = 0xf;
    uStack_444 = 0;
    pvStack_454 = (void *)((uint)pvStack_454 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_458,"#him#",5);
    local_4._0_1_ = 9;
    iVar10 = 3;
    pbVar9 = local_43c;
    pvVar4 = EvaluationEnvironment_getOriginCard(local_45c);
    pvVar4 = Card_getDisplayNameForContext(pvVar4,pbVar9,iVar10);
    local_4._0_1_ = 10;
    TextReplacementList_addStringPair(list,abStack_458,pvVar4);
    local_4 = CONCAT31(local_4._1_3_,9);
    if (0xf < uStack_424) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_438);
    }
    uStack_424 = 0xf;
    uStack_428 = 0;
    pvStack_438 = (void *)((uint)pvStack_438 & 0xffffff00);
    local_4._0_1_ = 2;
    if (0xf < uStack_440) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_454);
    }
    uStack_440 = 0xf;
    uStack_444 = 0;
    pvStack_454 = (void *)((uint)pvStack_454 & 0xffffff00);
    local_408 = 0xf;
    local_40c = 0;
    local_41c = (void *)((uint)local_41c & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_420,"#player#",8);
    local_4._0_1_ = 0xb;
    pbVar9 = local_43c;
    EvaluationEnvironment_getOriginCard(local_45c);
    pvVar4 = (void *)FUN_013402b0();
    pvVar4 = Game_copyCommandObjectList(pvVar4,pbVar9);
    local_4._0_1_ = 0xc;
    TextReplacementList_addStringPair(list,local_420,pvVar4);
    local_4 = CONCAT31(local_4._1_3_,0xb);
    if (0xf < uStack_424) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_438);
    }
    uStack_424 = 0xf;
    uStack_428 = 0;
    pvStack_438 = (void *)((uint)pvStack_438 & 0xffffff00);
    local_4._0_1_ = 2;
    if (0xf < local_408) {
                    /* WARNING: Subroutine does not return */
      _free(local_41c);
    }
    local_408 = 0xf;
    local_40c = 0;
    local_41c = (void *)((uint)local_41c & 0xffffff00);
  }
  if ((int *)local_400[0x19] != (int *)0x0) {
    uVar7 = (**(code **)(*(int *)local_400[0x19] + 0x30))
                      (0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
    local_404 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
                FUN_00d8d382(uVar7);
    if (local_404 !=
        (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)0x0) {
      uStack_440 = 0xf;
      uStack_444 = 0;
      pvStack_454 = (void *)((uint)pvStack_454 & 0xffffff00);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (abStack_458,"#owner#",7);
      local_4._0_1_ = 0xd;
      pvVar4 = (void *)(**(code **)(*(int *)local_404 + 0x108))(local_43c);
      local_4._0_1_ = 0xe;
      TextReplacementList_addStringPair(list,abStack_458,pvVar4);
      local_4 = CONCAT31(local_4._1_3_,0xd);
      if (0xf < uStack_424) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_438);
      }
      uStack_424 = 0xf;
      uStack_428 = 0;
      pvStack_438 = (void *)((uint)pvStack_438 & 0xffffff00);
      local_4._0_1_ = 2;
      if (0xf < uStack_440) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_454);
      }
      uStack_440 = 0xf;
      uStack_444 = 0;
      pvStack_454 = (void *)((uint)pvStack_454 & 0xffffff00);
      local_408 = 0xf;
      local_40c = 0;
      local_41c = (void *)((uint)local_41c & 0xffffff00);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (local_420,"#owner_him#",0xb);
      local_4._0_1_ = 0xf;
      pvVar4 = Card_getDisplayNameForContext(local_404,local_43c,3);
      local_4._0_1_ = 0x10;
      TextReplacementList_addStringPair(list,local_420,pvVar4);
      local_4 = CONCAT31(local_4._1_3_,0xf);
      if (0xf < uStack_424) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_438);
      }
      uStack_424 = 0xf;
      uStack_428 = 0;
      pvStack_438 = (void *)((uint)pvStack_438 & 0xffffff00);
      local_4._0_1_ = 2;
      if (0xf < local_408) {
                    /* WARNING: Subroutine does not return */
        _free(local_41c);
      }
      local_408 = 0xf;
      local_40c = 0;
      local_41c = (void *)((uint)local_41c & 0xffffff00);
      uStack_440 = 0xf;
      uStack_444 = 0;
      pvStack_454 = (void *)((uint)pvStack_454 & 0xffffff00);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (abStack_458,"#owner_he#",10);
      local_4._0_1_ = 0x11;
      pvVar4 = Card_getDisplayNameForContext(local_404,local_43c,1);
      local_4._0_1_ = 0x12;
      TextReplacementList_addStringPair(list,abStack_458,pvVar4);
      local_4 = CONCAT31(local_4._1_3_,0x11);
      if (0xf < uStack_424) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_438);
      }
      uStack_424 = 0xf;
      uStack_428 = 0;
      pvStack_438 = (void *)((uint)pvStack_438 & 0xffffff00);
      local_4._0_1_ = 2;
      if (0xf < uStack_440) {
                    /* WARNING: Subroutine does not return */
        _free(pvStack_454);
      }
      uStack_440 = 0xf;
      uStack_444 = 0;
      pvStack_454 = (void *)((uint)pvStack_454 & 0xffffff00);
    }
  }
  pvVar4 = Rules_getVariable7Card();
  if (pvVar4 != (void *)0x0) {
    uStack_440 = 0xf;
    uStack_444 = 0;
    pvStack_454 = (void *)((uint)pvStack_454 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_458,"#lastplayedcard#",0x10);
    local_4._0_1_ = 0x13;
    piVar6 = Rules_getVariable7Card();
    pvVar4 = (void *)(**(code **)(*piVar6 + 0x108))(local_43c);
    local_4._0_1_ = 0x14;
    TextReplacementList_addStringPair(list,abStack_458,pvVar4);
    local_4 = CONCAT31(local_4._1_3_,0x13);
    if (0xf < uStack_424) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_438);
    }
    uStack_424 = 0xf;
    uStack_428 = 0;
    pvStack_438 = (void *)((uint)pvStack_438 & 0xffffff00);
    local_4._0_1_ = 2;
    if (0xf < uStack_440) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_454);
    }
    uStack_440 = 0xf;
    uStack_444 = 0;
    pvStack_454 = (void *)((uint)pvStack_454 & 0xffffff00);
  }
  Game_handleMissingCostCard();
  if (extraout_EAX != 0) {
    uStack_440 = 0xf;
    uStack_444 = 0;
    pvStack_454 = (void *)((uint)pvStack_454 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_458,"#lastowner#",0xb);
    local_4._0_1_ = 0x15;
    Game_handleMissingCostCard();
    pvVar4 = (void *)(**(code **)(*extraout_EAX_00 + 0x108))(local_43c);
    local_4._0_1_ = 0x16;
    TextReplacementList_addStringPair(list,abStack_458,pvVar4);
    local_4 = CONCAT31(local_4._1_3_,0x15);
    if (0xf < uStack_424) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_438);
    }
    uStack_424 = 0xf;
    uStack_428 = 0;
    pvStack_438 = (void *)((uint)pvStack_438 & 0xffffff00);
    local_4._0_1_ = 2;
    if (0xf < uStack_440) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_454);
    }
    uStack_440 = 0xf;
    uStack_444 = 0;
    pvStack_454 = (void *)((uint)pvStack_454 & 0xffffff00);
  }
  iVar10 = FUN_013837c0();
  if (iVar10 != 0) {
    uStack_440 = 0xf;
    uStack_444 = 0;
    pvStack_454 = (void *)((uint)pvStack_454 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_458,"#lasteventcard#",0xf);
    local_4._0_1_ = 0x17;
    piVar6 = (int *)FUN_013837c0();
    pvVar4 = (void *)(**(code **)(*piVar6 + 0x108))(local_43c);
    local_4._0_1_ = 0x18;
    TextReplacementList_addStringPair(list,abStack_458,pvVar4);
    local_4 = CONCAT31(local_4._1_3_,0x17);
    if (0xf < uStack_424) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_438);
    }
    uStack_424 = 0xf;
    uStack_428 = 0;
    pvStack_438 = (void *)((uint)pvStack_438 & 0xffffff00);
    local_4._0_1_ = 2;
    if (0xf < uStack_440) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_454);
    }
    uStack_440 = 0xf;
    uStack_444 = 0;
    pvStack_454 = (void *)((uint)pvStack_454 & 0xffffff00);
  }
  uVar7 = Rules_getIntegerKey16();
  _sprintf(acStack_3f8,"%d",uVar7);
  pcVar8 = acStack_3f8;
  local_408 = 0xf;
  local_40c = 0;
  local_41c = (void *)((uint)local_41c & 0xffffff00);
  do {
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_420,acStack_3f8,(int)pcVar8 - (int)(acStack_3f8 + 1));
  local_4._0_1_ = 0x19;
  uStack_440 = 0xf;
  uStack_444 = 0;
  pvStack_454 = (void *)((uint)pvStack_454 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (abStack_458,"#customnumberkey#",0x11);
  local_4._0_1_ = 0x1a;
  TextReplacementList_addStringPair(list,abStack_458,local_420);
  local_4 = CONCAT31(local_4._1_3_,0x19);
  if (0xf < uStack_440) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_454);
  }
  uStack_440 = 0xf;
  uStack_444 = 0;
  pvStack_454 = (void *)((uint)pvStack_454 & 0xffffff00);
  local_4._0_1_ = 2;
  if (0xf < local_408) {
                    /* WARNING: Subroutine does not return */
    _free(local_41c);
  }
  local_408 = 0xf;
  local_40c = 0;
  local_41c = (void *)((uint)local_41c & 0xffffff00);
  uVar7 = Rules_getIntegerKey16();
  _sprintf(acStack_3f8,"%d",uVar7);
  pcVar8 = acStack_3f8;
  uStack_424 = 0xf;
  uStack_428 = 0;
  pvStack_438 = (void *)((uint)pvStack_438 & 0xffffff00);
  do {
    cVar1 = *pcVar8;
    pcVar8 = pcVar8 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_43c,acStack_3f8,(int)pcVar8 - (int)(acStack_3f8 + 1));
  local_4._0_1_ = 0x1b;
  uStack_440 = 0xf;
  uStack_444 = 0;
  pvStack_454 = (void *)((uint)pvStack_454 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (abStack_458,"#customnumber#",0xe);
  local_4._0_1_ = 0x1c;
  TextReplacementList_addStringPair(list,abStack_458,local_43c);
  local_4 = CONCAT31(local_4._1_3_,0x1b);
  if (uStack_440 < 0x10) {
    uStack_440 = 0xf;
    uStack_444 = 0;
    pvStack_454 = (void *)((uint)pvStack_454 & 0xffffff00);
    local_4._0_1_ = 2;
    if (0xf < uStack_424) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_438);
    }
    uStack_424 = 0xf;
    uStack_428 = 0;
    pvStack_438 = (void *)((uint)pvStack_438 & 0xffffff00);
    uVar7 = Rules_getIntegerKey1B();
    _sprintf(acStack_3f8,"%d",uVar7);
    pcVar8 = acStack_3f8;
    uStack_440 = 0xf;
    uStack_444 = 0;
    pvStack_454 = (void *)((uint)pvStack_454 & 0xffffff00);
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (abStack_458,acStack_3f8,(int)pcVar8 - (int)(acStack_3f8 + 1));
    local_4._0_1_ = 0x1d;
    uStack_424 = 0xf;
    uStack_428 = 0;
    pvStack_438 = (void *)((uint)pvStack_438 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_43c,"#customnumber2key#",0x12);
    local_4._0_1_ = 0x1e;
    TextReplacementList_addStringPair(list,local_43c,abStack_458);
    local_4 = CONCAT31(local_4._1_3_,0x1d);
    if (0xf < uStack_424) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_438);
    }
    uStack_424 = 0xf;
    uStack_428 = 0;
    pvStack_438 = (void *)((uint)pvStack_438 & 0xffffff00);
    local_4._0_1_ = 2;
    if (0xf < uStack_440) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_454);
    }
    uStack_440 = 0xf;
    uStack_444 = 0;
    pvStack_454 = (void *)((uint)pvStack_454 & 0xffffff00);
    uVar7 = Rules_getIntegerKey15();
    _sprintf(acStack_3f8,"%d",uVar7);
    pcVar8 = acStack_3f8;
    local_408 = 0xf;
    local_40c = 0;
    local_41c = (void *)((uint)local_41c & 0xffffff00);
    do {
      cVar1 = *pcVar8;
      pcVar8 = pcVar8 + 1;
    } while (cVar1 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_420,acStack_3f8,(int)pcVar8 - (int)(acStack_3f8 + 1));
    local_4._0_1_ = 0x1f;
    uStack_424 = 0xf;
    uStack_428 = 0;
    pvStack_438 = (void *)((uint)pvStack_438 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_43c,"#numselectedkey#",0x10);
    local_4._0_1_ = 0x20;
    TextReplacementList_addStringPair(list,local_43c,local_420);
    pvVar4 = local_45c;
    local_4 = CONCAT31(local_4._1_3_,0x1f);
    if (uStack_424 < 0x10) {
      uStack_424 = 0xf;
      uStack_428 = 0;
      pvStack_438 = (void *)((uint)pvStack_438 & 0xffffff00);
      local_4 = CONCAT31(local_4._1_3_,2);
      if (local_408 < 0x10) {
        local_408 = 0xf;
        local_40c = 0;
        local_41c = (void *)((uint)local_41c & 0xffffff00);
        bVar3 = ValueData_getBooleanProperty14(valueData);
        EvaluationEnvironment_tracef(pvVar4,"noEmitSet to: %d",(uint)bVar3);
        ExceptionList = local_c;
        return local_400;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_41c);
    }
                    /* WARNING: Subroutine does not return */
    _free(pvStack_438);
  }
                    /* WARNING: Subroutine does not return */
  _free(pvStack_454);
}

