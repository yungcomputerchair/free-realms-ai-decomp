// addr: 0x014a39a0
// name: ActionNode_handlePushPhase
// subsystem: common/common/node
// source (binary assert): common/common/node/ActionNode.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionNode_handlePushPhase(void * this, void * environment) */

bool __thiscall ActionNode_handlePushPhase(void *this,void *environment)

{
  void *this_00;
  void *commandObject;
  int *piVar1;
  void *pvVar2;
  char *sourceMap;
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
  this_00 = environment;
                    /* Validates an integer phase key and enqueues a PushPhase command. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016a48b3;
  local_c = ExceptionList;
  commandObject = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  ExceptionList = &local_c;
  sourceMap = (char *)0x14a39d5;
  EvaluationEnvironment_tracef(environment,"Doing a PushPhase",commandObject);
  pvVar2 = (void *)((int)this + 4);
  environment = (void *)0x22;
  piVar1 = IntPointerMap_getOrInsertValueSlot(pvVar2,(int *)&environment);
  if (*piVar1 == 0) {
    sourceMap = "mNodeKeyValueMap[kPhaseKey]";
    FUN_012f5a60();
  }
  environment = (void *)0x22;
  piVar1 = IntPointerMap_getOrInsertValueSlot(pvVar2,(int *)&environment);
  if (*(int *)(*piVar1 + 4) != 2) {
    sourceMap = "mNodeKeyValueMap[kPhaseKey]->isIntegerValue()";
    FUN_012f5a60();
  }
  environment = Mem_Alloc(0x124);
  uStack_4 = 0;
  if (environment == (void *)0x0) {
    pvVar2 = (void *)0x0;
  }
  else {
    IntPointerMap_copyCtorWrapper(&stack0xffffffd4,(int)pvVar2,sourceMap);
    uStack_4 = uStack_4 & 0xffffff00;
    pvVar2 = (void *)FUN_015017a0(this_00);
  }
  uStack_4 = 0xffffffff;
  EvaluationEnvironment_addCommandObject(this_00,pvVar2,commandObject);
  ExceptionList = local_c;
  return true;
}

