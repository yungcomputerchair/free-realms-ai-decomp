// addr: 0x014a3300
// name: ActionNode_handleAlternatePlayers
// subsystem: common/common/node
// source (binary assert): common/common/node/ActionNode.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionNode_handleAlternatePlayers(void * this, void * environment) */

bool __thiscall ActionNode_handleAlternatePlayers(void *this,void *environment)

{
  void *commandObject;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *pvVar6;
  int local_20 [4];
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Validates command-object, valid-targets, target-text, and text-message
                       entries, then enqueues an AlternatePlayers command. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016a481b;
  local_c = ExceptionList;
  commandObject = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffd0);
  ExceptionList = &local_c;
  EvaluationEnvironment_tracef(environment,"Adding a AlternatePlayers command\n",commandObject);
  pvVar6 = (void *)((int)this + 4);
  local_20[0] = 0x1d;
  piVar1 = IntPointerMap_getOrInsertValueSlot(pvVar6,local_20);
  if (*piVar1 == 0) {
    FUN_012f5a60("mNodeKeyValueMap[kCommandObjectKey]","..\\common\\common\\node\\ActionNode.cpp",
                 0x498);
  }
  local_20[0] = 0x1e;
  piVar1 = IntPointerMap_getOrInsertValueSlot(pvVar6,local_20);
  if (*piVar1 == 0) {
    FUN_012f5a60("mNodeKeyValueMap[kValidTargetsKey]","..\\common\\common\\node\\ActionNode.cpp",
                 0x499);
  }
  local_20[0] = 0x17;
  piVar1 = IntPointerMap_getOrInsertValueSlot(pvVar6,local_20);
  if (*piVar1 == 0) {
    FUN_012f5a60("mNodeKeyValueMap[kTargetTextKey]","..\\common\\common\\node\\ActionNode.cpp",0x49a
                );
  }
  local_20[0] = 0x21;
  piVar1 = IntPointerMap_getOrInsertValueSlot(pvVar6,local_20);
  if (*piVar1 == 0) {
    FUN_012f5a60("mNodeKeyValueMap[kTextMessageKey]","..\\common\\common\\node\\ActionNode.cpp",
                 0x49b);
  }
  pvStack_10 = Mem_Alloc(0x124);
  uStack_4 = 0;
  if (pvStack_10 == (void *)0x0) {
    pvVar6 = (void *)0x0;
  }
  else {
    local_20[0] = 0x21;
    local_20[1] = 0x17;
    local_20[2] = 0x1e;
    local_20[3] = 0x1d;
    puVar2 = IntPointerMap_getOrInsertValueSlot(pvVar6,local_20);
    puVar3 = IntPointerMap_getOrInsertValueSlot(pvVar6,local_20 + 1);
    puVar4 = IntPointerMap_getOrInsertValueSlot(pvVar6,local_20 + 2);
    puVar5 = IntPointerMap_getOrInsertValueSlot(pvVar6,local_20 + 3);
    pvVar6 = (void *)CommandObject_AlternateMultiAction_ctor
                               (*puVar5,*puVar4,*puVar3,*puVar2,environment);
  }
  uStack_4 = 0xffffffff;
  EvaluationEnvironment_addCommandObject(environment,pvVar6,commandObject);
  ExceptionList = local_c;
  return true;
}

