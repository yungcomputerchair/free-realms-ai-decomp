// addr: 0x014a2e70
// name: ActionNode_handleWhile
// subsystem: common/common/node
// source (binary assert): common/common/node/ActionNode.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionNode_handleWhile(void * this, void * environment) */

bool __thiscall ActionNode_handleWhile(void *this,void *environment)

{
  void *this_00;
  void *commandObject;
  int *piVar1;
  void *env;
  undefined4 *puVar2;
  undefined4 *puVar3;
  void *this_01;
  int iStack_14;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  this_00 = environment;
                    /* Builds and enqueues a While command from action and check expression-tree
                       values. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016a47ab;
  local_c = ExceptionList;
  commandObject = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffdc);
  ExceptionList = &local_c;
  EvaluationEnvironment_tracef(environment,"Adding a While command",commandObject);
  this_01 = (void *)((int)this + 4);
  environment = (void *)0x58;
  piVar1 = IntPointerMap_getOrInsertValueSlot(this_01,(int *)&environment);
  if (*piVar1 == 0) {
    FUN_012f5a60("mNodeKeyValueMap[kActionKey]","..\\common\\common\\node\\ActionNode.cpp",0x3de);
  }
  environment = (void *)0x58;
  piVar1 = IntPointerMap_getOrInsertValueSlot(this_01,(int *)&environment);
  if (*(int *)(*piVar1 + 4) != 5) {
    FUN_012f5a60("mNodeKeyValueMap[kActionKey]->isExpressionTreeValue()",
                 "..\\common\\common\\node\\ActionNode.cpp",0x3df);
  }
  environment = (void *)0x59;
  piVar1 = IntPointerMap_getOrInsertValueSlot(this_01,(int *)&environment);
  if (*piVar1 == 0) {
    FUN_012f5a60("mNodeKeyValueMap[kCheckKey]","..\\common\\common\\node\\ActionNode.cpp",0x3e0);
  }
  environment = (void *)0x59;
  piVar1 = IntPointerMap_getOrInsertValueSlot(this_01,(int *)&environment);
  if (*(int *)(*piVar1 + 4) != 5) {
    FUN_012f5a60("mNodeKeyValueMap[kCheckKey]->isExpressionTreeValue()",
                 "..\\common\\common\\node\\ActionNode.cpp",0x3e1);
  }
  pvStack_10 = Mem_Alloc(0x124);
  env = (void *)0x0;
  uStack_4 = 0;
  if (pvStack_10 != (void *)0x0) {
    environment = (void *)0x59;
    iStack_14 = 0x58;
    puVar2 = IntPointerMap_getOrInsertValueSlot(this_01,(int *)&environment);
    puVar3 = IntPointerMap_getOrInsertValueSlot(this_01,&iStack_14);
    env = (void *)CommandObject_While_ctor(*puVar3,*puVar2,this_00);
  }
  uStack_4 = 0xffffffff;
  EvaluationEnvironment_addCommandObject(this_00,env,commandObject);
  ExceptionList = local_c;
  return true;
}

