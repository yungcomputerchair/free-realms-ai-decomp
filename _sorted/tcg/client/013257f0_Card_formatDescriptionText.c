// addr: 0x013257f0
// name: Card_formatDescriptionText
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
Card_formatDescriptionText
          (int param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,
          int *param_3)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *replacement;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_80 [4];
  void *local_7c;
  undefined4 local_6c;
  uint local_68;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_64 [4];
  void *local_60;
  undefined4 local_50;
  uint local_4c;
  undefined1 local_48 [4];
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_3c;
  undefined4 local_38;
  int local_34;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_30;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_2c [4];
  void *pvStack_28;
  undefined4 uStack_18;
  uint uStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Builds card description text by replacing tokens such as #title#, #he#,
                       #his#, #him#, #owner#, and #owner_he# using card properties, pronoun helpers,
                       and owner card/player data. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01679689;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_80;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffff70;
  ExceptionList = &local_c;
  local_38 = 0;
  local_30 = param_2;
  local_34 = param_1;
  if (*(int *)(param_1 + 0x1c) == 0) {
    *(undefined4 *)(param_2 + 0x18) = 0xf;
    *(undefined4 *)(param_2 + 0x14) = 0;
    param_2[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(param_2,"",0);
  }
  else {
    local_44 = 0;
    local_40 = 0;
    local_3c = 0;
    local_4 = 1;
    local_4c = 0xf;
    local_50 = 0;
    local_60 = (void *)((uint)local_60 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_64,"#title#",7);
    local_4._0_1_ = 2;
    pvVar2 = (void *)Card_getPropertyMap(uVar1);
    TextReplacementList_addStringPair(local_48,local_64,pvVar2);
    local_4._0_1_ = 1;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      _free(local_60);
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60 = (void *)((uint)local_60 & 0xffffff00);
    CardText_applyPluralSuffixTokens(local_48);
    local_68 = 0xf;
    local_6c = 0;
    local_7c = (void *)((uint)local_7c & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_80,"#he#",4);
    local_4._0_1_ = 3;
    pvVar2 = Card_getDisplayNameForContext(param_3,local_64,1);
    local_4._0_1_ = 4;
    TextReplacementList_addStringPair(local_48,local_80,pvVar2);
    local_4 = CONCAT31(local_4._1_3_,3);
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      _free(local_60);
    }
    local_4c = 0xf;
    local_50 = 0;
    uVar1 = (uint)local_60 >> 8;
    local_60 = (void *)(uVar1 << 8);
    local_4._0_1_ = 1;
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      _free(local_7c);
    }
    local_68 = 0xf;
    local_6c = 0;
    local_7c = (void *)((uint)local_7c & 0xffffff00);
    local_4c = 0xf;
    local_50 = 0;
    local_60 = (void *)(uVar1 << 8);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_64,"#his#",5)
    ;
    local_4._0_1_ = 5;
    pvVar2 = Card_getDisplayNameForContext(param_3,local_80,2);
    local_4._0_1_ = 6;
    TextReplacementList_addStringPair(local_48,local_64,pvVar2);
    local_4 = CONCAT31(local_4._1_3_,5);
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      _free(local_7c);
    }
    local_68 = 0xf;
    local_6c = 0;
    uVar1 = (uint)local_7c >> 8;
    local_7c = (void *)(uVar1 << 8);
    local_4._0_1_ = 1;
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      _free(local_60);
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60 = (void *)((uint)local_60 & 0xffffff00);
    local_68 = 0xf;
    local_6c = 0;
    local_7c = (void *)(uVar1 << 8);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_80,"#him#",5)
    ;
    local_4._0_1_ = 7;
    pvVar2 = Card_getDisplayNameForContext(param_3,local_64,3);
    local_4._0_1_ = 8;
    TextReplacementList_addStringPair(local_48,local_80,pvVar2);
    local_4 = CONCAT31(local_4._1_3_,7);
    if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
      _free(local_60);
    }
    local_4c = 0xf;
    local_50 = 0;
    local_60 = (void *)((uint)local_60 & 0xffffff00);
    local_4._0_1_ = 1;
    if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
      _free(local_7c);
    }
    local_68 = 0xf;
    local_6c = 0;
    local_7c = (void *)((uint)local_7c & 0xffffff00);
    uVar3 = (**(code **)(*param_3 + 0x30))
                      (0,&PlayElement::RTTI_Type_Descriptor,&Card::RTTI_Type_Descriptor,0);
    pvVar2 = (void *)FUN_00d8d382(uVar3);
    if (pvVar2 != (void *)0x0) {
      local_68 = 0xf;
      local_6c = 0;
      local_7c = (void *)((uint)local_7c & 0xffffff00);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (local_80,"#owner#",7);
      local_4._0_1_ = 9;
      replacement = (void *)Card_getPropertyMap();
      TextReplacementList_addStringPair(local_48,local_80,replacement);
      local_4._0_1_ = 1;
      if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
        _free(local_7c);
      }
      local_68 = 0xf;
      local_6c = 0;
      local_7c = (void *)((uint)local_7c & 0xffffff00);
      local_4c = 0xf;
      local_50 = 0;
      local_60 = (void *)((uint)local_60 & 0xffffff00);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (local_64,"#owner_he#",10);
      local_4._0_1_ = 10;
      pvVar2 = Card_getDisplayNameForContext(pvVar2,local_80,3);
      local_4._0_1_ = 0xb;
      TextReplacementList_addStringPair(local_48,local_64,pvVar2);
      local_4 = CONCAT31(local_4._1_3_,10);
      if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
        _free(local_7c);
      }
      local_68 = 0xf;
      local_6c = 0;
      local_7c = (void *)((uint)local_7c & 0xffffff00);
      local_4._0_1_ = 1;
      if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
        _free(local_60);
      }
      local_4c = 0xf;
      local_50 = 0;
      local_60 = (void *)((uint)local_60 & 0xffffff00);
    }
    MessageText_formatWithValueData(abStack_2c,local_48);
    local_4._0_1_ = 0xc;
    String_uppercaseFirstCharInPlace(abStack_2c);
    param_2 = local_30;
    *(undefined4 *)(local_30 + 0x18) = 0xf;
    *(undefined4 *)(local_30 + 0x14) = 0;
    local_30[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_30,abStack_2c,0,0xffffffff);
    local_38 = 1;
    local_4 = CONCAT31(local_4._1_3_,1);
    if (0xf < uStack_14) {
                    /* WARNING: Subroutine does not return */
      _free(pvStack_28);
    }
    uStack_14 = 0xf;
    uStack_18 = 0;
    pvStack_28 = (void *)((uint)pvStack_28 & 0xffffff00);
    local_4 = (uint)local_4._1_3_ << 8;
    FUN_012ce9d0();
  }
  ExceptionList = local_c;
  return param_2;
}

