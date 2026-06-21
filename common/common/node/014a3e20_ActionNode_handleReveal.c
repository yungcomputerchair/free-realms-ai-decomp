// addr: 0x014a3e20
// name: ActionNode_handleReveal
// subsystem: common/common/node
// source (binary assert): common/common/node/ActionNode.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionNode_handleReveal(void * this, void * environment) */

bool __thiscall ActionNode_handleReveal(void *this,void *environment)

{
  int iVar1;
  void *commandObject;
  int *piVar2;
  void *env;
  void *this_00;
  undefined4 uVar3;
  void *in_stack_ffffffcc;
  int local_18;
  void *pvStack_14;
  undefined1 *puStack_10;
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* Builds a Reveal command after validating num-actions, target-text,
                       random/get-target/alt-play-area/show-all fields. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016a4923;
  local_c = ExceptionList;
  commandObject = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe0);
  ExceptionList = &local_c;
  EvaluationEnvironment_tracef(environment,"Adding a Reveal command",commandObject);
  this_00 = (void *)((int)this + 4);
  local_18 = 0x16;
  piVar2 = IntPointerMap_getOrInsertValueSlot(this_00,&local_18);
  if (*piVar2 == 0) {
    in_stack_ffffffcc = (void *)0x14a3e89;
    FUN_012f5a60();
  }
  local_18 = 0x17;
  piVar2 = IntPointerMap_getOrInsertValueSlot(this_00,&local_18);
  if (*piVar2 == 0) {
    in_stack_ffffffcc = (void *)0x14a3eb9;
    FUN_012f5a60();
  }
  local_18 = 0x18;
  piVar2 = IntPointerMap_getOrInsertValueSlot(this_00,&local_18);
  if (*piVar2 == 0) {
    in_stack_ffffffcc = (void *)0x14a3ee9;
    FUN_012f5a60();
  }
  local_18 = 0x19;
  piVar2 = IntPointerMap_getOrInsertValueSlot(this_00,&local_18);
  if (*piVar2 == 0) {
    in_stack_ffffffcc = (void *)0x14a3f19;
    FUN_012f5a60();
  }
  local_18 = 0x1a;
  piVar2 = IntPointerMap_getOrInsertValueSlot(this_00,&local_18);
  if (*piVar2 == 0) {
    in_stack_ffffffcc = (void *)0x14a3f49;
    FUN_012f5a60();
  }
  local_18 = 0x1b;
  piVar2 = IntPointerMap_getOrInsertValueSlot(this_00,&local_18);
  if (*piVar2 == 0) {
    in_stack_ffffffcc = (void *)0x14a3f79;
    FUN_012f5a60();
  }
  local_18 = 0x1a;
  piVar2 = IntPointerMap_getOrInsertValueSlot(this_00,&local_18);
  if (*(int *)(*piVar2 + 4) != 2) {
    in_stack_ffffffcc = (void *)0x14a3fae;
    FUN_012f5a60();
  }
  pvStack_14 = Mem_Alloc(0x124);
  env = (void *)0x0;
  uStack_4 = 0;
  if (pvStack_14 == (void *)0x0) goto LAB_014a4034;
  puStack_10 = &stack0xffffffcc;
  local_18 = 0x1a;
  IntPointerMap_copyCtorWrapper(&stack0xffffffcc,(int)this_00,in_stack_ffffffcc);
  uStack_4 = CONCAT31(uStack_4._1_3_,1);
  piVar2 = IntPointerMap_getOrInsertValueSlot(this_00,&local_18);
  iVar1 = *piVar2;
  if (*(int *)(iVar1 + 4) == 2) {
LAB_014a4020:
    uVar3 = *(undefined4 *)(iVar1 + 8);
  }
  else {
    FUN_012f5a60("mTypeID == kIntegerTypeID",
                 "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                 ,0x129);
    if (*(int *)(iVar1 + 4) == 2) goto LAB_014a4020;
    uVar3 = 0;
  }
  uStack_4 = uStack_4 & 0xffffff00;
  env = (void *)CommandObject_Reveal_ctor(uVar3);
LAB_014a4034:
  uStack_4 = 0xffffffff;
  EvaluationEnvironment_addCommandObject(environment,env,commandObject);
  ExceptionList = local_c;
  return true;
}

