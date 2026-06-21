// addr: 0x014a2d60
// name: ActionNode_handleChainedAction
// subsystem: common/common/node
// source (binary assert): common/common/node/ActionNode.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionNode_handleChainedAction(void * this, void * environment) */

bool __thiscall ActionNode_handleChainedAction(void *this,void *environment)

{
  void *this_00;
  void *commandObject;
  int *piVar1;
  void *pvVar2;
  void *env;
  undefined4 *puVar3;
  void *this_01;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  this_00 = environment;
                    /* Builds and enqueues a ChainedAction command after validating the
                       ValueDataList node key. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016a477b;
  local_c = ExceptionList;
  commandObject = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  ExceptionList = &local_c;
  EvaluationEnvironment_tracef(environment,"Adding a ChainedAction command",commandObject);
  this_01 = (void *)((int)this + 4);
  environment = (void *)0x1c;
  piVar1 = IntPointerMap_getOrInsertValueSlot(this_01,(int *)&environment);
  if (*piVar1 == 0) {
    FUN_012f5a60("mNodeKeyValueMap[kValueDataListKey]","..\\common\\common\\node\\ActionNode.cpp",
                 0x3d2);
  }
  environment = (void *)0x1c;
  piVar1 = IntPointerMap_getOrInsertValueSlot(this_01,(int *)&environment);
  if (*(int *)(*piVar1 + 4) != 8) {
    FUN_012f5a60("mNodeKeyValueMap[kValueDataListKey]->isValueDataListValue()",
                 "..\\common\\common\\node\\ActionNode.cpp",0x3d3);
  }
  pvVar2 = Mem_Alloc(0x124);
  env = (void *)0x0;
  uStack_4 = 0;
  if (pvVar2 != (void *)0x0) {
    environment = (void *)0x1c;
    puVar3 = IntPointerMap_getOrInsertValueSlot(this_01,(int *)&environment);
    env = (void *)CommandObject_ChainedAction_ctor(*puVar3,this_00);
  }
  uStack_4 = 0xffffffff;
  EvaluationEnvironment_addCommandObject(this_00,env,commandObject);
  ExceptionList = local_c;
  return true;
}

