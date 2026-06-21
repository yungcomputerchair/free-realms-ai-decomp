// addr: 0x01507d50
// name: CommandObject_InfoBox_ctor
// subsystem: common/review2
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
CommandObject_InfoBox_ctor(undefined4 *param_1,undefined4 param_2,void *param_3)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_InfoBox, installs the command-object vtable/name,
                       clears a flag, and stores evaluated ValueData for the info box. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b53b6;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  CommandObject_ctor(param_1,param_3);
  local_4 = 0;
  *param_1 = CommandObject_InfoBox::vftable;
  param_1[2] = CommandObject_InfoBox::vftable;
  FUN_012fa910(uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x12),
             "CommandObject_InfoBox",0x15);
  *(undefined1 *)((int)param_1 + 0x81) = 0;
  FUN_013010e0(param_2);
  ExceptionList = local_c;
  return param_1;
}

