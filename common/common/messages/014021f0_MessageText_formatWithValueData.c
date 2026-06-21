// addr: 0x014021f0
// name: MessageText_formatWithValueData
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
MessageText_formatWithValueData
          (int param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,
          undefined4 param_3)

{
  uint uVar1;
  void *pvVar2;
  uint uVar3;
  undefined1 *outText;
  int messageId_;
  int version_;
  undefined4 local_68;
  undefined1 local_64 [4];
  void *local_60;
  void *local_5c;
  uint local_54;
  int local_50;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_4c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_48 [4];
  void *local_44;
  undefined4 local_34;
  uint local_30;
  undefined1 local_2c [4];
  void *local_28;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Formats a MessageText using replacement values built from ValueData, then
                       fetches the text from MessageDB and applies replacements. Evidence is
                       ValueData-related setup, MessageDB_getMessageText, and the replacement loop.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01690d41;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_68;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffff88;
  ExceptionList = &local_c;
  local_68 = 0;
  local_4c = param_2;
  local_50 = param_1;
  if (*(int *)(param_1 + 4) == 0) {
    *(undefined4 *)(param_2 + 0x18) = 0xf;
    *(undefined4 *)(param_2 + 0x14) = 0;
    param_2[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(param_2,"",0);
  }
  else {
    FUN_012cedd0(param_3);
    local_4 = 1;
    local_54 = *(uint *)(param_1 + 0x14);
    if (local_54 < *(uint *)(param_1 + 0x10)) {
      FUN_00d83c2d(uVar1);
    }
    uVar3 = *(uint *)(param_1 + 0x10);
    if (*(uint *)(param_1 + 0x14) < uVar3) {
      FUN_00d83c2d(uVar1);
    }
    while( true ) {
      if (param_1 == -0xc) {
        FUN_00d83c2d(uVar1);
      }
      if (uVar3 == local_54) break;
      if (param_1 == -0xc) {
        FUN_00d83c2d(uVar1);
      }
      if (*(uint *)(param_1 + 0x14) <= uVar3) {
        FUN_00d83c2d();
      }
      FUN_012a5380(uVar3);
      if (*(uint *)(param_1 + 0x14) <= uVar3) {
        FUN_00d83c2d();
      }
      uVar3 = uVar3 + 0x38;
    }
    version_ = *(int *)(local_50 + 8);
    messageId_ = *(int *)(local_50 + 4);
    outText = local_2c;
    pvVar2 = (void *)FUN_012a84b0();
    MessageDB_getMessageText(pvVar2,outText,messageId_,version_);
    local_4._1_3_ = (uint3)((uint)local_4 >> 8);
    local_30 = 0xf;
    local_34 = 0;
    local_44 = (void *)((uint)local_44 & 0xffffff00);
    local_4._0_1_ = 3;
    StringReplacementList_applyAll(local_2c,local_64,local_48);
    *(undefined4 *)(param_2 + 0x18) = 0xf;
    *(undefined4 *)(param_2 + 0x14) = 0;
    param_2[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_2,local_48,0,0xffffffff);
    local_68 = 1;
    local_4 = CONCAT31(local_4._1_3_,2);
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      _free(local_44);
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44 = (void *)((uint)local_44 & 0xffffff00);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
    local_14 = 0xf;
    local_18 = 0;
    local_28 = (void *)((uint)local_28 & 0xffffff00);
    local_4 = (uint)local_4._1_3_ << 8;
    pvVar2 = local_60;
    if (local_60 != (void *)0x0) {
      for (; pvVar2 != local_5c; pvVar2 = (void *)((int)pvVar2 + 0x38)) {
        FUN_012a2730();
      }
                    /* WARNING: Subroutine does not return */
      _free(local_60);
    }
  }
  ExceptionList = local_c;
  return param_2;
}

