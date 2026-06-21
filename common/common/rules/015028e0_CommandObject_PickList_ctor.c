// addr: 0x015028e0
// name: CommandObject_PickList_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * CommandObject_PickList_ctor(void * this, void * environment, void *
   choices, void * choicesEnd) */

void * __thiscall
CommandObject_PickList_ctor(void *this,void *environment,void *choices,void *choicesEnd)

{
  void **ppvVar1;
  void *pvVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 uVar5;
  int *extraout_EAX;
  int *extraout_EAX_00;
  int *extraout_EAX_01;
  int *extraout_EAX_02;
  int *extraout_EAX_03;
  int *extraout_EAX_04;
  int *extraout_EAX_05;
  int *extraout_EAX_06;
  int *extraout_EAX_07;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs CommandObject_PickList, initializes base CommandObject fields and
                       command metadata, creates an auxiliary object, and copies selected entries
                       from a choice list into command parameters. The object name is assigned as
                       'CommandObject_PickList'. */
  pvVar2 = environment;
  puStack_8 = &LAB_016b48ab;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  local_4 = 0;
  CommandObject_ctor(this,environment);
  local_4._0_1_ = 1;
  *(undefined ***)this = CommandObject_PickList::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_PickList::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_PickList",0x16);
  *(undefined1 *)((int)this + 0x118) = 1;
  *(undefined1 *)((int)this + 0x81) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0x13e;
  pvVar4 = EvaluationEnvironment_getOriginCard(pvVar2);
  *(void **)((int)this + 100) = pvVar4;
  environment = Mem_Alloc(0x18);
  local_4._0_1_ = 2;
  if (environment == (void *)0x0) {
    uVar5 = 0;
  }
  else {
    uVar5 = ReturnValueMap_ctor(uVar3);
  }
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 *)((int)this + 0x70) = uVar5;
  EvaluationEnvironment_getMember14(pvVar2);
  uVar5 = GamePlayer_getPlayerId();
  ReturnValueMap_setInteger(4,uVar5);
  EvaluationEnvironment_getOriginCard(pvVar2);
  uVar5 = PlayElement_getId();
  ReturnValueMap_setInteger(3,uVar5);
  environment = (void *)0x2f;
  NodeKeyValueMap_find(&choices,local_14,(int *)&environment);
  pvVar4 = choicesEnd;
  ppvVar1 = (void **)*extraout_EAX;
  pvVar2 = (void *)extraout_EAX[1];
  if ((ppvVar1 == (void **)0x0) || (ppvVar1 != &choices)) {
    FUN_00d83c2d();
  }
  if (pvVar2 != pvVar4) {
    if (ppvVar1 == (void **)0x0) {
      FUN_00d83c2d();
    }
    if (pvVar2 == ppvVar1[1]) {
      FUN_00d83c2d();
    }
    FUN_014181b0(0x2a,*(undefined4 *)((int)pvVar2 + 0x10));
  }
  environment = &DAT_00000030;
  NodeKeyValueMap_find(&choices,local_14,(int *)&environment);
  pvVar4 = choicesEnd;
  ppvVar1 = (void **)*extraout_EAX_00;
  pvVar2 = (void *)extraout_EAX_00[1];
  if ((ppvVar1 == (void **)0x0) || (ppvVar1 != &choices)) {
    FUN_00d83c2d();
  }
  if (pvVar2 != pvVar4) {
    if (ppvVar1 == (void **)0x0) {
      FUN_00d83c2d();
    }
    if (pvVar2 == ppvVar1[1]) {
      FUN_00d83c2d();
    }
    FUN_014181b0(0x2b,*(undefined4 *)((int)pvVar2 + 0x10));
  }
  environment = (void *)0x2;
  NodeKeyValueMap_find(&choices,local_14,(int *)&environment);
  pvVar4 = choicesEnd;
  ppvVar1 = (void **)*extraout_EAX_01;
  pvVar2 = (void *)extraout_EAX_01[1];
  if ((ppvVar1 == (void **)0x0) || (ppvVar1 != &choices)) {
    FUN_00d83c2d();
  }
  if (pvVar2 != pvVar4) {
    if (ppvVar1 == (void **)0x0) {
      FUN_00d83c2d();
    }
    if (pvVar2 == ppvVar1[1]) {
      FUN_00d83c2d();
    }
    FUN_014181b0(5,*(undefined4 *)((int)pvVar2 + 0x10));
  }
  environment = (void *)0x17;
  NodeKeyValueMap_find(&choices,local_14,(int *)&environment);
  pvVar4 = choicesEnd;
  ppvVar1 = (void **)*extraout_EAX_02;
  pvVar2 = (void *)extraout_EAX_02[1];
  if ((ppvVar1 == (void **)0x0) || (ppvVar1 != &choices)) {
    FUN_00d83c2d();
  }
  if (pvVar2 != pvVar4) {
    if (ppvVar1 == (void **)0x0) {
      FUN_00d83c2d();
    }
    if (pvVar2 == ppvVar1[1]) {
      FUN_00d83c2d();
    }
    FUN_014181b0(0xd,*(undefined4 *)((int)pvVar2 + 0x10));
  }
  environment = &DAT_0000002c;
  NodeKeyValueMap_find(&choices,local_14,(int *)&environment);
  pvVar4 = choicesEnd;
  ppvVar1 = (void **)*extraout_EAX_03;
  pvVar2 = (void *)extraout_EAX_03[1];
  if ((ppvVar1 == (void **)0x0) || (ppvVar1 != &choices)) {
    FUN_00d83c2d();
  }
  if (pvVar2 != pvVar4) {
    if (ppvVar1 == (void **)0x0) {
      FUN_00d83c2d();
    }
    if (pvVar2 == ppvVar1[1]) {
      FUN_00d83c2d();
    }
    FUN_014181b0(0x27,*(undefined4 *)((int)pvVar2 + 0x10));
  }
  environment = (void *)0x2b;
  NodeKeyValueMap_find(&choices,local_14,(int *)&environment);
  pvVar4 = choicesEnd;
  ppvVar1 = (void **)*extraout_EAX_04;
  pvVar2 = (void *)extraout_EAX_04[1];
  if ((ppvVar1 == (void **)0x0) || (ppvVar1 != &choices)) {
    FUN_00d83c2d();
  }
  if (pvVar2 != pvVar4) {
    if (ppvVar1 == (void **)0x0) {
      FUN_00d83c2d();
    }
    if (pvVar2 == ppvVar1[1]) {
      FUN_00d83c2d();
    }
    FUN_014181b0(0x28,*(undefined4 *)((int)pvVar2 + 0x10));
  }
  environment = (void *)0x2d;
  NodeKeyValueMap_find(&choices,local_14,(int *)&environment);
  pvVar4 = choicesEnd;
  ppvVar1 = (void **)*extraout_EAX_05;
  pvVar2 = (void *)extraout_EAX_05[1];
  if ((ppvVar1 == (void **)0x0) || (ppvVar1 != &choices)) {
    FUN_00d83c2d();
  }
  if (pvVar2 != pvVar4) {
    if (ppvVar1 == (void **)0x0) {
      FUN_00d83c2d();
    }
    if (pvVar2 == ppvVar1[1]) {
      FUN_00d83c2d();
    }
    FUN_014181b0(0x2d,*(undefined4 *)((int)pvVar2 + 0x10));
  }
  environment = (void *)0x1c;
  NodeKeyValueMap_find(&choices,local_14,(int *)&environment);
  pvVar4 = choicesEnd;
  ppvVar1 = (void **)*extraout_EAX_06;
  pvVar2 = (void *)extraout_EAX_06[1];
  if ((ppvVar1 == (void **)0x0) || (ppvVar1 != &choices)) {
    FUN_00d83c2d();
  }
  if (pvVar2 != pvVar4) {
    if (ppvVar1 == (void **)0x0) {
      FUN_00d83c2d();
    }
    if (pvVar2 == ppvVar1[1]) {
      FUN_00d83c2d();
    }
    FUN_014181b0(0x2c,*(undefined4 *)((int)pvVar2 + 0x10));
  }
  environment = (void *)0x2e;
  NodeKeyValueMap_find(&choices,local_14,(int *)&environment);
  pvVar4 = choicesEnd;
  ppvVar1 = (void **)*extraout_EAX_07;
  pvVar2 = (void *)extraout_EAX_07[1];
  if ((ppvVar1 == (void **)0x0) || (ppvVar1 != &choices)) {
    FUN_00d83c2d();
  }
  if (pvVar2 != pvVar4) {
    if (ppvVar1 == (void **)0x0) {
      FUN_00d83c2d();
    }
    if (pvVar2 == ppvVar1[1]) {
      FUN_00d83c2d();
    }
    FUN_014181b0(0x26,*(undefined4 *)((int)pvVar2 + 0x10));
  }
  local_4 = 0xffffffff;
  FUN_01457440();
  ExceptionList = local_c;
  return this;
}

