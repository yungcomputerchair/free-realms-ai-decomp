// addr: 0x0150bfe0
// name: CommandObject_CustomChoiceDialog_ctorAlt
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
CommandObject_CustomChoiceDialog_ctorAlt
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          undefined4 param_5,undefined4 param_6,void *param_7)

{
  bool bVar1;
  uint uVar2;
  void *pvVar3;
  undefined4 uVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Constructs an alternate CustomChoiceDialog command object variant with base
                       setup and returns. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b5cc3;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  CommandObject_ctor(param_1,param_7);
  local_4 = 0;
  *param_1 = CommandObject_CustomChoiceDialog::vftable;
  param_1[2] = CommandObject_CustomChoiceDialog::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x12),
             "CommandObject_CustomChoiceDialog",0x20);
  *(undefined1 *)(param_1 + 0x46) = 1;
  *(undefined1 *)((int)param_1 + 0x81) = 0;
  param_1[0x47] = 0x102;
  pvVar3 = EvaluationEnvironment_getOriginCard(param_7);
  param_1[0x19] = pvVar3;
  pvVar3 = Mem_Alloc(0x18);
  local_4._0_1_ = 1;
  if (pvVar3 == (void *)0x0) {
    uVar4 = 0;
  }
  else {
    uVar4 = ReturnValueMap_ctor(uVar2);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[0x1c] = uVar4;
  EvaluationEnvironment_getMember14(param_7);
  uVar4 = GamePlayer_getPlayerId();
  ReturnValueMap_setInteger(4,uVar4);
  FUN_014181b0(0xd,param_2);
  FUN_014181b0(0x19,param_3);
  FUN_014181b0(0x1a,param_4);
  FUN_014181b0(0x1f,param_5);
  FUN_014181b0(0x12,param_6);
  bVar1 = EvaluationEnvironment_getPlayAreaReturnBooleanDefaultFalse();
  if (bVar1) {
    set_value_boolean(0x24,true);
  }
  ExceptionList = local_c;
  return param_1;
}

