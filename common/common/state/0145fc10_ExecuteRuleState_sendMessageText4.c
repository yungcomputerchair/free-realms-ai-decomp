// addr: 0x0145fc10
// name: ExecuteRuleState_sendMessageText4
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void ExecuteRuleState_sendMessageText4(void * this, void * title, void *
   titleText, void * body, void * extra, void * footer, void * footerText) */

void ExecuteRuleState_sendMessageText4
               (void *this,void *title,void *titleText,void *body,void *extra,void *footer,
               void *footerText)

{
  int iVar1;
  undefined1 auStack_e4 [3];
  undefined1 local_e1;
  int *local_e0;
  void *local_dc;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_d8;
  undefined1 local_d4 [4];
  void *local_d0;
  undefined4 local_c0;
  uint local_bc;
  undefined1 local_b8 [4];
  int local_b4;
  int local_b0;
  undefined1 local_9c [4];
  void *local_98;
  int local_94;
  undefined4 uStack_88;
  uint uStack_84;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_80 [4];
  void *local_7c;
  int local_6c;
  uint local_68;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_64 [4];
  void *local_60;
  int local_50;
  uint local_4c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_48 [4];
  void *local_44;
  int local_34;
  uint local_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  void *local_28;
  int iStack_20;
  int local_18;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds up to four message-text/string fields with defaults from global text
                       data, sanitizes missing fields, and calls virtual message sender at +0x98. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169d22c;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)auStack_e4;
  ExceptionList = &local_c;
  local_d8 = footer;
  local_dc = footerText;
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_2c,title,0,0xffffffff);
  local_4 = 0;
  MessageText_copy_ctor(local_9c,titleText);
  local_4._0_1_ = 1;
  local_4c = 0xf;
  local_50 = 0;
  local_60 = (void *)((uint)local_60 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_64,body,0,0xffffffff);
  local_4._0_1_ = 2;
  local_68 = 0xf;
  local_6c = 0;
  local_7c = (void *)((uint)local_7c & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_80,extra,0,0xffffffff);
  local_4._0_1_ = 3;
  local_30 = 0xf;
  local_34 = 0;
  local_44 = (void *)((uint)local_44 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_48,local_d8,0,0xffffffff);
  local_4._0_1_ = 4;
  MessageText_copy_ctor(local_b8,local_dc);
  local_4._0_1_ = 5;
  if (local_18 == 0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_2c,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)(local_e0 + 0xe),0,0xffffffff);
  }
  iVar1 = MessageText_formatWithValueData(local_d4);
  local_e1 = *(int *)(iVar1 + 0x14) == 0;
  local_4 = CONCAT31(local_4._1_3_,5);
  if (0xf < local_bc) {
                    /* WARNING: Subroutine does not return */
    _free(local_d0);
  }
  local_bc = 0xf;
  local_c0 = 0;
  local_d0 = (void *)((uint)local_d0 & 0xffffff00);
  if ((bool)local_e1) {
    local_98 = (void *)local_e0[0x16];
    local_94 = local_e0[0x17];
    MessageText_copyFrom(local_e0 + 0x18);
  }
  if (local_50 == 0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_64,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)(local_e0 + 0x23),0,0xffffffff);
  }
  if (local_6c == 0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_80,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)(local_e0 + 0x2a),0,0xffffffff);
  }
  if (local_34 == 0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_48,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                         *)(local_e0 + 0x31),0,0xffffffff);
  }
  iVar1 = MessageText_formatWithValueData(local_d4);
  local_e1 = *(int *)(iVar1 + 0x14) == 0;
  local_4 = CONCAT31((int3)((uint)local_4 >> 8),5);
  if (0xf < local_bc) {
                    /* WARNING: Subroutine does not return */
    _free(local_d0);
  }
  local_bc = 0xf;
  local_c0 = 0;
  local_d0 = (void *)((uint)local_d0 & 0xffffff00);
  if ((bool)local_e1) {
    local_b4 = local_e0[0x1d];
    local_b0 = local_e0[0x1e];
    MessageText_copyFrom(local_e0 + 0x1f);
  }
  iVar1 = FUN_00f942a0(0,local_50,&DAT_0176cfd0,1);
  if (iVar1 == 0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_64,"",0);
  }
  iVar1 = FUN_00f942a0(0,local_6c,&DAT_0176cfd0,1);
  if (iVar1 == 0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_80,"",0);
  }
  iVar1 = FUN_00f942a0(0,local_34,&DAT_0176cfd0,1);
  if (iVar1 == 0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_48,"",0);
  }
  (**(code **)(*local_e0 + 0x98))(this,local_2c,local_9c,local_64,local_80,local_48,local_b8);
  iStack_20._0_1_ = 4;
  MessageText_dtor();
  iStack_20 = CONCAT31(iStack_20._1_3_,3);
  if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
    _free(local_60);
  }
  local_4c = 0xf;
  local_50 = 0;
  local_60 = (void *)((uint)local_60 & 0xffffff00);
  iStack_20 = CONCAT31(iStack_20._1_3_,2);
  if (0xf < uStack_84) {
                    /* WARNING: Subroutine does not return */
    _free(local_98);
  }
  uStack_84 = 0xf;
  uStack_88 = 0;
  local_98 = (void *)((uint)local_98 & 0xffffff00);
  iStack_20 = CONCAT31(iStack_20._1_3_,1);
  if (0xf < local_68) {
                    /* WARNING: Subroutine does not return */
    _free(local_7c);
  }
  local_68 = 0xf;
  local_6c = 0;
  local_7c = (void *)((uint)local_7c & 0xffffff00);
  iStack_20 = (uint)iStack_20._1_3_ << 8;
  MessageText_dtor();
  iStack_20 = 0xffffffff;
  if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
    _free(local_44);
  }
  ExceptionList = local_28;
  return;
}

