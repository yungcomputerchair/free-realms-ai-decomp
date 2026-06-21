// addr: 0x014a34c0
// name: ActionNode_handleGetTarget
// subsystem: common/common/node
// source (binary assert): common/common/node/ActionNode.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionNode_handleGetTarget(void * this, void * environment) */

bool __thiscall ActionNode_handleGetTarget(void *this,void *environment)

{
  int iVar1;
  void *commandObject;
  int *piVar2;
  void *env;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *this_00;
  undefined4 uVar5;
  int local_1c [3];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Creates a GetTarget command using valid-target and target-text values plus an
                       integer get-target selector. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016a484b;
  local_c = ExceptionList;
  commandObject = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffd4);
  ExceptionList = &local_c;
  EvaluationEnvironment_tracef(environment,"Adding a GetTarget command\n",commandObject);
  this_00 = (void *)((int)this + 4);
  local_1c[0] = 0x1e;
  piVar2 = IntPointerMap_getOrInsertValueSlot(this_00,local_1c);
  if (*piVar2 == 0) {
    FUN_012f5a60("mNodeKeyValueMap[kValidTargetsKey]","..\\common\\common\\node\\ActionNode.cpp",
                 0x4ac);
  }
  local_1c[0] = 0x17;
  piVar2 = IntPointerMap_getOrInsertValueSlot(this_00,local_1c);
  if (*piVar2 == 0) {
    FUN_012f5a60("mNodeKeyValueMap[kTargetTextKey]","..\\common\\common\\node\\ActionNode.cpp",0x4ad
                );
  }
  local_1c[0] = 0x19;
  piVar2 = IntPointerMap_getOrInsertValueSlot(this_00,local_1c);
  if (*piVar2 == 0) {
    FUN_012f5a60("mNodeKeyValueMap[kGetTargetKey]","..\\common\\common\\node\\ActionNode.cpp",0x4ae)
    ;
  }
  pvStack_10 = Mem_Alloc(0x124);
  env = (void *)0x0;
  uStack_4 = 0;
  if (pvStack_10 == (void *)0x0) goto LAB_014a3625;
  local_1c[0] = 0x19;
  local_1c[1] = 0x17;
  local_1c[2] = 0x1e;
  piVar2 = IntPointerMap_getOrInsertValueSlot(this_00,local_1c);
  iVar1 = *piVar2;
  if (*(int *)(iVar1 + 4) == 2) {
LAB_014a35f1:
    uVar5 = *(undefined4 *)(iVar1 + 8);
  }
  else {
    FUN_012f5a60("mTypeID == kIntegerTypeID",
                 "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                 ,0x129);
    if (*(int *)(iVar1 + 4) == 2) goto LAB_014a35f1;
    uVar5 = 0;
  }
  puVar3 = IntPointerMap_getOrInsertValueSlot(this_00,local_1c + 1);
  puVar4 = IntPointerMap_getOrInsertValueSlot(this_00,local_1c + 2);
  env = (void *)CommandObject_GetTarget_ctor(*puVar4,*puVar3,uVar5,environment);
LAB_014a3625:
  uStack_4 = 0xffffffff;
  EvaluationEnvironment_addCommandObject(environment,env,commandObject);
  ExceptionList = local_c;
  return true;
}

