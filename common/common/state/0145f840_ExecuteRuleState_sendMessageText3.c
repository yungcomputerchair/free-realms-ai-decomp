// addr: 0x0145f840
// name: ExecuteRuleState_sendMessageText3
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void ExecuteRuleState_sendMessageText3(void * this, void * title, void *
   titleText, void * body, void * footer, void * footerText) */

void ExecuteRuleState_sendMessageText3
               (void *this,void *title,void *titleText,void *body,void *footer,void *footerText)

{
  int iVar1;
  undefined1 auStack_c4 [3];
  undefined1 local_c1;
  int *local_c0;
  void *local_bc;
  undefined1 local_b8 [4];
  void *local_b4;
  undefined4 local_a4;
  uint local_a0;
  undefined1 local_9c [4];
  int local_98;
  int local_94;
  undefined1 local_80 [4];
  int local_7c;
  void *local_78;
  undefined4 uStack_68;
  uint local_64;
  undefined1 local_60;
  void *pvStack_5c;
  int local_50;
  undefined4 local_4c;
  uint local_48;
  undefined1 local_44;
  void *pvStack_40;
  int local_34;
  undefined4 local_30;
  uint local_2c;
  undefined1 local_28;
  void *pvStack_24;
  int iStack_1c;
  int local_18;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Builds up to three message-text/string fields with defaults from global text
                       data, sanitizes missing fields, and calls virtual message sender at +0x94. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169d1b1;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)auStack_c4;
  ExceptionList = &local_c;
  local_bc = footerText;
  local_14 = 0xf;
  local_18 = 0;
  local_28 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_2c,title,0,
             0xffffffff);
  local_4 = 0;
  MessageText_copy_ctor(local_80,titleText);
  local_4._0_1_ = 1;
  local_4c = 0xf;
  local_50 = 0;
  local_60 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_64,body,0,
             0xffffffff);
  local_4._0_1_ = 2;
  local_30 = 0xf;
  local_34 = 0;
  local_44 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_48,footer,0,
             0xffffffff);
  local_4._0_1_ = 3;
  MessageText_copy_ctor(local_9c,local_bc);
  local_4._0_1_ = 4;
  if (local_18 == 0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_2c,
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (local_c0 + 0xe),0,0xffffffff);
  }
  iVar1 = MessageText_formatWithValueData(local_b8);
  local_c1 = *(int *)(iVar1 + 0x14) == 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
    _free(local_b4);
  }
  local_a0 = 0xf;
  local_a4 = 0;
  local_b4 = (void *)((uint)local_b4 & 0xffffff00);
  if ((bool)local_c1) {
    local_78 = (void *)local_c0[0x17];
    local_7c = local_c0[0x16];
    MessageText_copyFrom(local_c0 + 0x18);
  }
  if (local_50 == 0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_64,
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (local_c0 + 0x23),0,0xffffffff);
  }
  if (local_34 == 0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_48,
               (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               (local_c0 + 0x2a),0,0xffffffff);
  }
  iVar1 = MessageText_formatWithValueData(local_b8);
  local_c1 = *(int *)(iVar1 + 0x14) == 0;
  local_4 = CONCAT31((int3)((uint)local_4 >> 8),4);
  if (0xf < local_a0) {
                    /* WARNING: Subroutine does not return */
    _free(local_b4);
  }
  local_a0 = 0xf;
  local_a4 = 0;
  local_b4 = (void *)((uint)local_b4 & 0xffffff00);
  if ((bool)local_c1) {
    local_98 = local_c0[0x1d];
    local_94 = local_c0[0x1e];
    MessageText_copyFrom(local_c0 + 0x1f);
  }
  iVar1 = FUN_00f942a0(0,local_50,&DAT_0176cfd0,1);
  if (iVar1 == 0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_64,"",0);
  }
  iVar1 = FUN_00f942a0(0,local_34,&DAT_0176cfd0,1);
  if (iVar1 == 0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)&local_48,"",0);
  }
  (**(code **)(*local_c0 + 0x94))(this,&local_2c,local_80,&local_64,&local_48,local_9c);
  iStack_1c._0_1_ = 3;
  MessageText_dtor();
  iStack_1c = CONCAT31(iStack_1c._1_3_,2);
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_5c);
  }
  local_48 = 0xf;
  local_4c = 0;
  pvStack_5c = (void *)((uint)pvStack_5c & 0xffffff00);
  iStack_1c = CONCAT31(iStack_1c._1_3_,1);
  if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_78);
  }
  local_64 = 0xf;
  uStack_68 = 0;
  local_78 = (void *)((uint)local_78 & 0xffffff00);
  iStack_1c = (uint)iStack_1c._1_3_ << 8;
  MessageText_dtor();
  iStack_1c = 0xffffffff;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(pvStack_40);
  }
  ExceptionList = pvStack_24;
  return;
}

