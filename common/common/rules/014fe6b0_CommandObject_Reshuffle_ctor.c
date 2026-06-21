// addr: 0x014fe6b0
// name: CommandObject_Reshuffle_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall CommandObject_Reshuffle_ctor(undefined4 *param_1,void *param_2)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Constructs CommandObject_Reshuffle with base CommandObject setup and
                       player/origin return values. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b3d43;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  CommandObject_ctor(param_1,param_2);
  local_4 = 0;
  *param_1 = CommandObject_Reshuffle::vftable;
  param_1[2] = CommandObject_Reshuffle::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x12),
             "CommandObject_Reshuffle",0x17);
  *(undefined1 *)(param_1 + 0x46) = 1;
  *(undefined1 *)((int)param_1 + 0x81) = 0;
  param_1[0x47] = 0x136;
  pvVar2 = EvaluationEnvironment_getOriginCard(param_2);
  param_1[0x19] = pvVar2;
  pvVar2 = Mem_Alloc(0x18);
  local_4._0_1_ = 1;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = ReturnValueMap_ctor(uVar1);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  param_1[0x1c] = uVar3;
  EvaluationEnvironment_getMember14(param_2);
  uVar3 = GamePlayer_getPlayerId();
  ReturnValueMap_setInteger(4,uVar3);
  ExceptionList = local_c;
  return param_1;
}

