// addr: 0x01503790
// name: CommandObjectMultiAction_ctor
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectMultiAction.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x01503822) */
/* Setting prototype: void * CommandObjectMultiAction_ctor(void * this, void * arg1, void *
   actionValue, void * arg3, void * arg4, void * customCommands, void * dependentValue, void *
   targets, void * environment) */

void * __thiscall
CommandObjectMultiAction_ctor
          (void *this,void *arg1,void *actionValue,void *arg3,void *arg4,void *customCommands,
          void *dependentValue,void *targets,void *environment)

{
  int iVar1;
  int iVar2;
  bool bVar3;
  uint uVar4;
  void *pvVar5;
  undefined4 uVar6;
  void *pvVar7;
  int *extraout_EAX;
  int *extraout_EAX_00;
  undefined1 auStack_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  pvVar7 = environment;
                    /* Constructs CommandObject_MultiAction: initializes base CommandObject fields,
                       records action/custom-command/target values, and populates the
                       expression-tree value map. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b4af3;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  CommandObject_ctor(this,environment);
  local_4 = 0;
  *(undefined ***)this = CommandObject_MultiAction::vftable;
  *(undefined ***)((int)this + 8) = CommandObject_MultiAction::vftable;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)this + 0x48),
             "CommandObject_MultiAction",0x19);
  *(undefined1 *)((int)this + 0x118) = 1;
  *(undefined1 *)((int)this + 0x81) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0xfe;
  pvVar5 = EvaluationEnvironment_getOriginCard(pvVar7);
  *(void **)((int)this + 100) = pvVar5;
  if (*(int *)((int)dependentValue + 4) == 1) {
    *(undefined1 *)((int)this + 0x124) = *(undefined1 *)((int)dependentValue + 8);
  }
  environment = Mem_Alloc(0x18);
  local_4._0_1_ = 1;
  if (environment == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = ReturnValueMap_ctor(uVar4);
  }
  local_4 = (uint)local_4._1_3_ << 8;
  *(undefined4 *)((int)this + 0x70) = uVar6;
  uVar6 = 0;
  pvVar5 = EvaluationEnvironment_getMember14(pvVar7);
  if (pvVar5 != (void *)0x0) {
    EvaluationEnvironment_getMember14(pvVar7);
    uVar6 = GamePlayer_getPlayerId();
  }
  ReturnValueMap_setInteger(4,uVar6);
  uVar6 = 0;
  pvVar5 = EvaluationEnvironment_getOriginCard(pvVar7);
  if (pvVar5 != (void *)0x0) {
    EvaluationEnvironment_getOriginCard(pvVar7);
    uVar6 = PlayElement_getId();
  }
  ReturnValueMap_setInteger(3,uVar6);
  uVar6 = 0;
  pvVar5 = CommandObject_getActionFromEnvironment(pvVar7);
  if (pvVar5 != (void *)0x0) {
    CommandObject_getActionFromEnvironment(pvVar7);
    uVar6 = FUN_01321f20();
  }
  ReturnValueMap_setInteger(5,uVar6);
  FUN_014181b0(10,arg1);
  FUN_014181b0(0xb,actionValue);
  if (*(int *)((int)actionValue + 4) != 2) {
    FUN_012f5a60("mTypeID == kIntegerTypeID",
                 "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                 ,0x129);
  }
  if (*(int *)((int)actionValue + 4) == 2) {
    if (*(int *)((int)actionValue + 8) != 3) goto LAB_01503933;
  }
  else {
    FUN_012f5a60("mTypeID == kIntegerTypeID",
                 "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                 ,0x129);
LAB_01503933:
    if ((*(int *)((int)actionValue + 4) != 2) || (*(int *)((int)actionValue + 8) != 6))
    goto LAB_0150397f;
  }
  if (customCommands == (void *)0x0) {
    FUN_012f5a60("customCommands","..\\common\\common\\command\\CommandObjectMultiAction.cpp",0x44);
  }
  if (*(int *)((int)customCommands + 4) != 5) {
    FUN_012f5a60("customCommands->isExpressionTreeValue()",
                 "..\\common\\common\\command\\CommandObjectMultiAction.cpp",0x45);
  }
  FUN_014181b0(0x17,customCommands);
LAB_0150397f:
  FUN_014181b0(0xc,arg3);
  FUN_014181b0(0xd,arg4);
  bVar3 = EvaluationEnvironment_getPlayAreaReturnBooleanDefaultFalse();
  if (bVar3) {
    set_value_boolean(0x24,true);
  }
  pvVar7 = EvaluationEnvironment_getAction(pvVar7);
  if (pvVar7 == (void *)0x1) {
    set_value_boolean(0x29,true);
  }
  environment = (void *)0x26;
  NodeKeyValueMap_find(targets,auStack_14,(int *)&environment);
  pvVar7 = (void *)*extraout_EAX;
  iVar1 = *(int *)((int)targets + 4);
  iVar2 = extraout_EAX[1];
  if ((pvVar7 == (void *)0x0) || (pvVar7 != targets)) {
    FUN_00d83c2d();
  }
  if (iVar2 != iVar1) {
    if (pvVar7 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)((int)pvVar7 + 4)) {
      FUN_00d83c2d();
    }
    FUN_014181b0(0x1b,*(undefined4 *)(iVar2 + 0x10));
  }
  environment = &DAT_0000002c;
  NodeKeyValueMap_find(targets,auStack_14,(int *)&environment);
  pvVar7 = (void *)*extraout_EAX_00;
  iVar1 = extraout_EAX_00[1];
  iVar2 = *(int *)((int)targets + 4);
  if ((pvVar7 == (void *)0x0) || (pvVar7 != targets)) {
    FUN_00d83c2d();
  }
  if (iVar1 != iVar2) {
    if (pvVar7 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (iVar1 == *(int *)((int)pvVar7 + 4)) {
      FUN_00d83c2d();
    }
    FUN_014181b0(0x27,*(undefined4 *)(iVar1 + 0x10));
  }
  ExceptionList = local_c;
  return this;
}

