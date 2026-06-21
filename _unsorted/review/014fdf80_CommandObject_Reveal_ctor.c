// addr: 0x014fdf80
// name: CommandObject_Reveal_ctor
// subsystem: common/review2
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
CommandObject_Reveal_ctor
          (undefined4 *param_1,int param_2,undefined4 param_3,int param_4,undefined4 param_5,
          void *param_6)

{
  undefined1 *puVar1;
  int iVar2;
  int iVar3;
  bool bVar4;
  uint uVar5;
  undefined4 uVar6;
  int *extraout_EAX;
  int *extraout_EAX_00;
  int *extraout_EAX_01;
  int *extraout_EAX_02;
  int *extraout_EAX_03;
  int *extraout_EAX_04;
  int *extraout_EAX_05;
  int *extraout_EAX_06;
  int *extraout_EAX_07;
  int *extraout_EAX_08;
  int *extraout_EAX_09;
  void *local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a CommandObject_Reveal, installs its vtable/name string, allocates
                       a ReturnValueMap, and copies reveal-related values out of a NodeKeyValueMap.
                       Called from ActionNode_handleReveal. */
  puStack_8 = &LAB_016b3cab;
  local_c = ExceptionList;
  uVar5 = DAT_01b839d8 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  local_4 = 0;
  CommandObject_ctor(param_1,param_6);
  local_4._0_1_ = 1;
  *param_1 = CommandObject_Reveal::vftable;
  param_1[2] = CommandObject_Reveal::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(param_1 + 0x12),
             "CommandObject_Reveal",0x14);
  *(undefined1 *)(param_1 + 0x46) = 1;
  *(undefined1 *)((int)param_1 + 0x81) = 0;
  param_1[0x47] = 0xff;
  local_14[0] = Mem_Alloc(0x18);
  local_4._0_1_ = 2;
  if (local_14[0] == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = ReturnValueMap_ctor(uVar5);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  param_1[0x1c] = uVar6;
  EvaluationEnvironment_getMember14(param_6);
  uVar6 = GamePlayer_getPlayerId();
  ReturnValueMap_setInteger(4,uVar6);
  ReturnValueMap_setInteger(0xf,param_2);
  param_2 = 0x17;
  NodeKeyValueMap_find(&param_3,local_14,&param_2);
  iVar3 = param_4;
  puVar1 = (undefined1 *)*extraout_EAX;
  iVar2 = extraout_EAX[1];
  if ((puVar1 == (undefined1 *)0x0) || ((undefined4 *)puVar1 != &param_3)) {
    FUN_00d83c2d();
  }
  if (iVar2 != iVar3) {
    if (puVar1 == (undefined1 *)0x0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)(puVar1 + 4)) {
      FUN_00d83c2d();
    }
    FUN_014181b0(0xd,*(undefined4 *)(iVar2 + 0x10));
  }
  param_2 = 0x19;
  NodeKeyValueMap_find(&param_3,local_14,&param_2);
  iVar3 = param_4;
  puVar1 = (undefined1 *)*extraout_EAX_00;
  iVar2 = extraout_EAX_00[1];
  if ((puVar1 == (undefined1 *)0x0) || ((undefined4 *)puVar1 != &param_3)) {
    FUN_00d83c2d();
  }
  if (iVar2 != iVar3) {
    if (puVar1 == (undefined1 *)0x0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)(puVar1 + 4)) {
      FUN_00d83c2d();
    }
    FUN_014181b0(0x14,*(undefined4 *)(iVar2 + 0x10));
  }
  param_2 = 0x16;
  NodeKeyValueMap_find(&param_3,local_14,&param_2);
  iVar3 = param_4;
  puVar1 = (undefined1 *)*extraout_EAX_01;
  iVar2 = extraout_EAX_01[1];
  if ((puVar1 == (undefined1 *)0x0) || ((undefined4 *)puVar1 != &param_3)) {
    FUN_00d83c2d();
  }
  if (iVar2 != iVar3) {
    if (puVar1 == (undefined1 *)0x0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)(puVar1 + 4)) {
      FUN_00d83c2d();
    }
    FUN_014181b0(0x15,*(undefined4 *)(iVar2 + 0x10));
  }
  param_2 = 0x18;
  NodeKeyValueMap_find(&param_3,local_14,&param_2);
  iVar3 = param_4;
  puVar1 = (undefined1 *)*extraout_EAX_02;
  iVar2 = extraout_EAX_02[1];
  if ((puVar1 == (undefined1 *)0x0) || ((undefined4 *)puVar1 != &param_3)) {
    FUN_00d83c2d();
  }
  if (iVar2 != iVar3) {
    if (puVar1 == (undefined1 *)0x0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)(puVar1 + 4)) {
      FUN_00d83c2d();
    }
    FUN_014181b0(0x13,*(undefined4 *)(iVar2 + 0x10));
  }
  param_2 = 0x1b;
  NodeKeyValueMap_find(&param_3,local_14,&param_2);
  iVar3 = param_4;
  puVar1 = (undefined1 *)*extraout_EAX_03;
  iVar2 = extraout_EAX_03[1];
  if ((puVar1 == (undefined1 *)0x0) || ((undefined4 *)puVar1 != &param_3)) {
    FUN_00d83c2d();
  }
  if (iVar2 != iVar3) {
    if (puVar1 == (undefined1 *)0x0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)(puVar1 + 4)) {
      FUN_00d83c2d();
    }
    FUN_014181b0(0x18,*(undefined4 *)(iVar2 + 0x10));
  }
  param_2 = 0x26;
  NodeKeyValueMap_find(&param_3,local_14,&param_2);
  iVar3 = param_4;
  puVar1 = (undefined1 *)*extraout_EAX_04;
  iVar2 = extraout_EAX_04[1];
  if ((puVar1 == (undefined1 *)0x0) || ((undefined4 *)puVar1 != &param_3)) {
    FUN_00d83c2d();
  }
  if (iVar2 != iVar3) {
    if (puVar1 == (undefined1 *)0x0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)(puVar1 + 4)) {
      FUN_00d83c2d();
    }
    FUN_014181b0(0x1b,*(undefined4 *)(iVar2 + 0x10));
  }
  param_2 = 0x27;
  NodeKeyValueMap_find(&param_3,local_14,&param_2);
  iVar3 = param_4;
  puVar1 = (undefined1 *)*extraout_EAX_05;
  iVar2 = extraout_EAX_05[1];
  if ((puVar1 == (undefined1 *)0x0) || ((undefined4 *)puVar1 != &param_3)) {
    FUN_00d83c2d();
  }
  if (iVar2 != iVar3) {
    if (puVar1 == (undefined1 *)0x0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)(puVar1 + 4)) {
      FUN_00d83c2d();
    }
    FUN_014181b0(0x1c,*(undefined4 *)(iVar2 + 0x10));
  }
  bVar4 = EvaluationEnvironment_getPlayAreaReturnBooleanDefaultFalse();
  if (bVar4) {
    set_value_boolean(0x24,true);
  }
  param_6 = (void *)0x28;
  NodeKeyValueMap_find(&param_3,local_14,(int *)&param_6);
  iVar3 = param_4;
  puVar1 = (undefined1 *)*extraout_EAX_06;
  iVar2 = extraout_EAX_06[1];
  if ((puVar1 == (undefined1 *)0x0) || ((undefined4 *)puVar1 != &param_3)) {
    FUN_00d83c2d();
  }
  if (iVar2 != iVar3) {
    if (puVar1 == (undefined1 *)0x0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)(puVar1 + 4)) {
      FUN_00d83c2d();
    }
    FUN_014181b0(0x22,*(undefined4 *)(iVar2 + 0x10));
  }
  param_6 = (void *)0x29;
  NodeKeyValueMap_find(&param_3,local_14,(int *)&param_6);
  iVar3 = param_4;
  puVar1 = (undefined1 *)*extraout_EAX_07;
  iVar2 = extraout_EAX_07[1];
  if ((puVar1 == (undefined1 *)0x0) || ((undefined4 *)puVar1 != &param_3)) {
    FUN_00d83c2d();
  }
  if (iVar2 != iVar3) {
    if (puVar1 == (undefined1 *)0x0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)(puVar1 + 4)) {
      FUN_00d83c2d();
    }
    FUN_014181b0(0x25,*(undefined4 *)(iVar2 + 0x10));
  }
  param_6 = (void *)0x2a;
  NodeKeyValueMap_find(&param_3,local_14,(int *)&param_6);
  iVar3 = param_4;
  puVar1 = (undefined1 *)*extraout_EAX_08;
  iVar2 = extraout_EAX_08[1];
  if ((puVar1 == (undefined1 *)0x0) || ((undefined4 *)puVar1 != &param_3)) {
    FUN_00d83c2d();
  }
  if (iVar2 != iVar3) {
    if (puVar1 == (undefined1 *)0x0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)(puVar1 + 4)) {
      FUN_00d83c2d();
    }
    FUN_014181b0(0x26,*(undefined4 *)(iVar2 + 0x10));
  }
  param_6 = (void *)0x2b;
  NodeKeyValueMap_find(&param_3,local_14,(int *)&param_6);
  iVar3 = param_4;
  puVar1 = (undefined1 *)*extraout_EAX_09;
  iVar2 = extraout_EAX_09[1];
  if ((puVar1 == (undefined1 *)0x0) || ((undefined4 *)puVar1 != &param_3)) {
    FUN_00d83c2d();
  }
  if (iVar2 != iVar3) {
    if (puVar1 == (undefined1 *)0x0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)(puVar1 + 4)) {
      FUN_00d83c2d();
    }
    FUN_014181b0(0x28,*(undefined4 *)(iVar2 + 0x10));
  }
  local_4 = 0xffffffff;
  FUN_01457440();
  ExceptionList = local_c;
  return param_1;
}

