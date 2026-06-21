// addr: 0x014a2ff0
// name: ActionNode_handleMultiAction
// subsystem: common/common/node
// source (binary assert): common/common/node/ActionNode.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionNode_handleMultiAction(void * this, void * environment) */

bool __thiscall ActionNode_handleMultiAction(void *this,void *environment)

{
  void *commandObject;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *env;
  undefined4 *this_00;
  int local_30;
  void *pvStack_2c;
  int iStack_28;
  undefined4 *puStack_24;
  undefined4 *puStack_20;
  int iStack_1c;
  int iStack_18;
  undefined4 *puStack_14;
  int iStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Builds a MultiAction command, optionally including a secondary key when
                       present, after validating command-object, valid-targets, num-actions,
                       target-text and validation keys. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016a47e6;
  local_c = ExceptionList;
  commandObject = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffc0);
  ExceptionList = &local_c;
  EvaluationEnvironment_tracef(environment,"Adding a MultiAction command\n",commandObject);
  this_00 = (undefined4 *)((int)this + 4);
  local_30 = 0x1d;
  piVar1 = IntPointerMap_getOrInsertValueSlot(this_00,&local_30);
  if (*piVar1 == 0) {
    FUN_012f5a60("mNodeKeyValueMap[kCommandObjectKey]","..\\common\\common\\node\\ActionNode.cpp",
                 0x473);
  }
  local_30 = 0x1e;
  piVar1 = IntPointerMap_getOrInsertValueSlot(this_00,&local_30);
  if (*piVar1 == 0) {
    FUN_012f5a60("mNodeKeyValueMap[kValidTargetsKey]","..\\common\\common\\node\\ActionNode.cpp",
                 0x474);
  }
  local_30 = 0x16;
  piVar1 = IntPointerMap_getOrInsertValueSlot(this_00,&local_30);
  if (*piVar1 == 0) {
    FUN_012f5a60("mNodeKeyValueMap[kNumActionsKey]","..\\common\\common\\node\\ActionNode.cpp",0x475
                );
  }
  local_30 = 0x17;
  piVar1 = IntPointerMap_getOrInsertValueSlot(this_00,&local_30);
  if (*piVar1 == 0) {
    FUN_012f5a60("mNodeKeyValueMap[kTargetTextKey]","..\\common\\common\\node\\ActionNode.cpp",0x476
                );
  }
  local_30 = 0x1f;
  piVar1 = IntPointerMap_getOrInsertValueSlot(this_00,&local_30);
  if (*piVar1 == 0) {
    FUN_012f5a60("mNodeKeyValueMap[kValidateNumActionKey]",
                 "..\\common\\common\\node\\ActionNode.cpp",0x477);
  }
  local_30 = 0x20;
  NodeKeyValueMap_find(this_00,&puStack_14,&local_30);
  iStack_18 = *(int *)((int)this + 8);
  if ((puStack_14 == (undefined4 *)0x0) || (puStack_14 != this_00)) {
    FUN_00d83c2d();
  }
  if (iStack_10 == iStack_18) {
    pvStack_2c = Mem_Alloc(0x128);
    uStack_4 = 1;
    if (pvStack_2c != (void *)0x0) {
      puStack_14 = (undefined4 *)0x1f;
      iStack_1c = 0x17;
      puStack_20 = (undefined4 *)0x1e;
      puStack_24 = (undefined4 *)0x1d;
      iStack_28 = 0x16;
      puVar2 = IntPointerMap_getOrInsertValueSlot(this_00,(int *)&puStack_14);
      puVar3 = IntPointerMap_getOrInsertValueSlot(this_00,&iStack_1c);
      puVar4 = IntPointerMap_getOrInsertValueSlot(this_00,(int *)&puStack_20);
      puStack_14 = IntPointerMap_getOrInsertValueSlot(this_00,(int *)&puStack_24);
      puVar5 = IntPointerMap_getOrInsertValueSlot(this_00,&iStack_28);
      env = CommandObjectMultiAction_ctor
                      (pvStack_2c,(void *)*puVar5,(void *)*puStack_14,(void *)*puVar4,
                       (void *)*puVar3,(void *)0x0,(void *)*puVar2,this_00,environment);
      goto LAB_014a32d5;
    }
  }
  else {
    puStack_14 = Mem_Alloc(0x128);
    uStack_4 = 0;
    if (puStack_14 != (undefined4 *)0x0) {
      local_30 = 0x1f;
      pvStack_2c = (void *)0x20;
      iStack_28 = 0x17;
      puStack_24 = (undefined4 *)0x1e;
      puStack_20 = (undefined4 *)0x1d;
      iStack_1c = 0x16;
      puVar2 = IntPointerMap_getOrInsertValueSlot(this_00,&local_30);
      puVar3 = IntPointerMap_getOrInsertValueSlot(this_00,(int *)&pvStack_2c);
      puVar4 = IntPointerMap_getOrInsertValueSlot(this_00,&iStack_28);
      puStack_24 = IntPointerMap_getOrInsertValueSlot(this_00,(int *)&puStack_24);
      puStack_20 = IntPointerMap_getOrInsertValueSlot(this_00,(int *)&puStack_20);
      puVar5 = IntPointerMap_getOrInsertValueSlot(this_00,&iStack_1c);
      env = CommandObjectMultiAction_ctor
                      (puStack_14,(void *)*puVar5,(void *)*puStack_20,(void *)*puStack_24,
                       (void *)*puVar4,(void *)*puVar3,(void *)*puVar2,this_00,environment);
      goto LAB_014a32d5;
    }
  }
  env = (void *)0x0;
LAB_014a32d5:
  uStack_4 = 0xffffffff;
  EvaluationEnvironment_addCommandObject(environment,env,commandObject);
  ExceptionList = local_c;
  return true;
}

