// addr: 0x01401f40
// name: MessageText_toString
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
MessageText_toString
          (int param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  uint uVar1;
  void *this;
  undefined1 *outText;
  int messageId_;
  int version_;
  undefined4 local_60;
  undefined1 local_5c [4];
  undefined4 local_58;
  undefined4 local_54;
  undefined4 local_50;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_4c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_48 [4];
  void *local_44;
  undefined4 local_34;
  uint local_30;
  undefined1 local_2c [4];
  void *local_28;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Formats a MessageText into an output string: returns empty if no id is set,
                       otherwise fetches text from MessageDB and applies stored replacements.
                       Evidence is calls to MessageDB_getMessageText and the string replacement
                       helper. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01690c71;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_60;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffff94;
  ExceptionList = &local_c;
  local_60 = 0;
  messageId_ = *(int *)(param_1 + 4);
  local_4c = param_2;
  if (messageId_ == 0) {
    *(undefined4 *)(param_2 + 0x18) = 0xf;
    *(undefined4 *)(param_2 + 0x14) = 0;
    param_2[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(param_2,"",0);
  }
  else {
    version_ = *(int *)(param_1 + 8);
    outText = local_2c;
    this = (void *)FUN_012a84b0();
    MessageDB_getMessageText(this,outText,messageId_,version_);
    local_30 = 0xf;
    local_34 = 0;
    local_44 = (void *)((uint)local_44 & 0xffffff00);
    local_58 = 0;
    local_54 = 0;
    local_50 = 0;
    local_4._1_3_ = 0;
    local_4._0_1_ = 3;
    StringReplacementList_applyAll(local_2c,local_5c,local_48);
    *(undefined4 *)(param_2 + 0x18) = 0xf;
    *(undefined4 *)(param_2 + 0x14) = 0;
    param_2[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_2,local_48,0,0xffffffff);
    local_60 = 1;
    local_4._0_1_ = 2;
    FUN_012ce9d0(uVar1);
    local_4 = CONCAT31(local_4._1_3_,1);
    if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
      _free(local_44);
    }
    local_30 = 0xf;
    local_34 = 0;
    local_44 = (void *)((uint)local_44 & 0xffffff00);
    local_4 = (uint)local_4._1_3_ << 8;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
  }
  ExceptionList = local_c;
  return param_2;
}

