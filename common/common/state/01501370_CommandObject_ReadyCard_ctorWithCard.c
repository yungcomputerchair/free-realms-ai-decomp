// addr: 0x01501370
// name: CommandObject_ReadyCard_ctorWithCard
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall CommandObject_ReadyCard_ctorWithCard(undefined4 *param_1,void *param_2)

{
  uint uVar1;
  undefined1 local_18 [8];
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Constructs CommandObject_ReadyCard as a SetProperty-derived command for
                       property 0x309, sets its name, prepares a true ValueData, and records command
                       id/field 0x18a. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b4500;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  CommandObject_SetProperty_ctor(param_1,0x309,(void *)0x0,param_2);
  local_4 = 0;
  *param_1 = CommandObject_ReadyCard::vftable;
  param_1[2] = CommandObject_ReadyCard::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x12),
             "CommandObject_ReadyCard",0x17);
  FUN_012fa910(uVar1);
  local_4._0_1_ = 1;
  FUN_01300680(2);
  local_10 = 1;
  FUN_014fc330(local_18);
  param_1[0x1f] = 0x18a;
  local_4 = (uint)local_4._1_3_ << 8;
  FUN_01300cd0();
  ExceptionList = local_c;
  return param_1;
}

