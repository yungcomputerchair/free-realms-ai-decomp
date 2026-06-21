// addr: 0x014a0370
// name: ActionNode_handleRemoveInstalledAction
// subsystem: common/common/node
// source (binary assert): common/common/node/ActionNode.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionNode_handleRemoveInstalledAction(void * this, void * environment)
    */

bool __thiscall ActionNode_handleRemoveInstalledAction(void *this,void *environment)

{
  int iVar1;
  int iVar2;
  int *extraout_EAX;
  undefined4 uVar3;
  int *extraout_EAX_00;
  void *env;
  void *pvVar4;
  void *pvVar5;
  TypeDescriptor *element;
  void *local_20;
  undefined1 auStack_1c [4];
  int *local_18;
  void *local_14 [2];
  void *local_c;
  undefined1 *puStack_8;
  void *pvStack_4;
  
                    /* Resolves the install-from card and action id from integer node-map entries,
                       switches the current target, and enqueues a remove-installed-action command.
                        */
  pvStack_4 = (void *)0xffffffff;
  puStack_8 = &LAB_016a433b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_18 = this;
  EvaluationEnvironment_tracef
            (environment,"ActionNode::handleRemoveInstalledAction",
             DAT_01b839d8 ^ (uint)&stack0xffffffd0);
  pvVar5 = (void *)((int)this + 4);
  local_20 = (void *)0x2f;
  NodeKeyValueMap_find(pvVar5,local_14,(int *)&local_20);
  pvVar4 = (void *)*extraout_EAX;
  iVar1 = extraout_EAX[1];
  iVar2 = *(int *)((int)this + 8);
  if ((pvVar4 == (void *)0x0) || (pvVar4 != pvVar5)) {
    FUN_00d83c2d();
  }
  if (iVar1 == iVar2) {
    FUN_012f5a60("finder != this->mNodeKeyValueMap.end()","..\\common\\common\\node\\ActionNode.cpp"
                 ,0x53f);
  }
  if (pvVar4 == (void *)0x0) {
    FUN_00d83c2d();
  }
  if (iVar1 == *(int *)((int)pvVar4 + 4)) {
    FUN_00d83c2d();
  }
  if (*(int *)(*(int *)(iVar1 + 0x10) + 4) != 2) {
    FUN_012f5a60("finder->second->isIntegerValue()","..\\common\\common\\node\\ActionNode.cpp",0x540
                );
  }
  if (iVar1 == *(int *)((int)pvVar4 + 4)) {
    FUN_00d83c2d();
  }
  iVar1 = *(int *)(iVar1 + 0x10);
  if ((*(int *)(iVar1 + 4) == 2) ||
     (FUN_012f5a60("mTypeID == kIntegerTypeID",
                   "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                   ,0x129), *(int *)(iVar1 + 4) == 2)) {
    uVar3 = *(undefined4 *)(iVar1 + 8);
  }
  else {
    uVar3 = 0;
  }
  element = &Card::RTTI_Type_Descriptor;
  uVar3 = (**(code **)(*local_18 + 0x50))
                    (uVar3,environment,0,&PlayElement::RTTI_Type_Descriptor,
                     &Card::RTTI_Type_Descriptor,0);
  local_20 = (void *)FUN_00d8d382(uVar3);
  if (local_20 != (void *)0x0) {
    pvStack_4 = (void *)0x58;
    NodeKeyValueMap_find(pvVar5,auStack_1c,(int *)&pvStack_4);
    pvVar4 = (void *)*extraout_EAX_00;
    iVar1 = extraout_EAX_00[1];
    iVar2 = *(int *)((int)this + 8);
    if ((pvVar4 == (void *)0x0) || (pvVar4 != pvVar5)) {
      FUN_00d83c2d();
    }
    if (iVar1 == iVar2) {
      FUN_012f5a60("finder != this->mNodeKeyValueMap.end()",
                   "..\\common\\common\\node\\ActionNode.cpp",0x549);
    }
    if (pvVar4 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (iVar1 == *(int *)((int)pvVar4 + 4)) {
      FUN_00d83c2d();
    }
    if (*(int *)(*(int *)(iVar1 + 0x10) + 4) != 2) {
      FUN_012f5a60("finder->second->isIntegerValue()","..\\common\\common\\node\\ActionNode.cpp",
                   0x54a);
    }
    if (iVar1 == *(int *)((int)pvVar4 + 4)) {
      FUN_00d83c2d();
    }
    iVar1 = *(int *)(iVar1 + 0x10);
    if ((*(int *)(iVar1 + 4) == 2) ||
       (FUN_012f5a60("mTypeID == kIntegerTypeID",
                     "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                     ,0x129), *(int *)(iVar1 + 4) == 2)) {
      pvVar4 = *(void **)(iVar1 + 8);
    }
    else {
      pvVar4 = (void *)0x0;
    }
    pvVar5 = local_20;
    uVar3 = PlayElement_getId(pvVar4);
    EvaluationEnvironment_tracef(environment,"removeFrom: %d, aId: %d",uVar3);
    env = EvaluationEnvironment_resolveTarget(environment);
    EvaluationEnvironment_setCurrentTargetFromElement(environment,pvVar5,element);
    pvStack_4 = Mem_Alloc(0x128);
    local_c = (void *)0x0;
    if (pvStack_4 == (void *)0x0) {
      pvVar4 = (void *)0x0;
    }
    else {
      pvVar4 = CommandObject_RemoveInstalledAction_ctor(pvStack_4,environment,pvVar4);
    }
    local_c = (void *)0xffffffff;
    EvaluationEnvironment_addCommandObject(environment,pvVar4,element);
    EvaluationEnvironment_setCurrentTargetFromElement(environment,env,element);
    ExceptionList = local_14[0];
    return true;
  }
  EvaluationEnvironment_tracef(environment,"couldn\'t get installFrom!",element);
  ExceptionList = local_14[0];
  return false;
}

