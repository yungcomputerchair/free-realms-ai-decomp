// addr: 0x014a3ab0
// name: ActionNode_handleCustomDialog
// subsystem: common/common/node
// source (binary assert): common/common/node/ActionNode.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionNode_handleCustomDialog(void * this, void * environment) */

bool __thiscall ActionNode_handleCustomDialog(void *this,void *environment)

{
  void *commandObject;
  int *piVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  undefined4 *puVar5;
  void *env;
  int *extraout_EAX;
  void *this_00;
  int iVar6;
  int local_2c;
  void *pvStack_28;
  int iStack_24;
  undefined4 *puStack_20;
  int aiStack_1c [2];
  void *pvStack_14;
  int iStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Creates a CustomDialog command from target text, two button texts, and a
                       value-data list; handles optional continuation/list key variants. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016a48e6;
  local_c = ExceptionList;
  commandObject = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffc4);
  ExceptionList = &local_c;
  EvaluationEnvironment_tracef(environment,"Doing a CustomDialog",commandObject);
  this_00 = (void *)((int)this + 4);
  local_2c = 0x1c;
  piVar1 = IntPointerMap_getOrInsertValueSlot(this_00,&local_2c);
  if (*piVar1 == 0) {
    FUN_012f5a60("mNodeKeyValueMap[kValueDataListKey]","..\\common\\common\\node\\ActionNode.cpp",
                 0x4ea);
  }
  local_2c = 0x1c;
  piVar1 = IntPointerMap_getOrInsertValueSlot(this_00,&local_2c);
  if (*(int *)(*piVar1 + 4) != 8) {
    FUN_012f5a60("mNodeKeyValueMap[kValueDataListKey]->isValueDataListValue()",
                 "..\\common\\common\\node\\ActionNode.cpp",0x4eb);
  }
  local_2c = 0x1c;
  piVar1 = IntPointerMap_getOrInsertValueSlot(this_00,&local_2c);
  iVar6 = *piVar1;
  if (*(int *)(iVar6 + 4) == 8) {
LAB_014a3b87:
    iVar6 = *(int *)(iVar6 + 8);
  }
  else {
    FUN_012f5a60("mTypeID == kValueDataListTypeID",
                 "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                 ,0x14d);
    if (*(int *)(iVar6 + 4) == 8) goto LAB_014a3b87;
    iVar6 = 0;
  }
  if ((*(int *)(iVar6 + 4) == 0) || ((uint)(*(int *)(iVar6 + 8) - *(int *)(iVar6 + 4) >> 2) < 2)) {
    FUN_012f5a60("mNodeKeyValueMap[kValueDataListKey]->getValueAsValueDataList()->size() >= 2",
                 "..\\common\\common\\node\\ActionNode.cpp",0x4ec);
  }
  local_2c = 0x17;
  piVar1 = IntPointerMap_getOrInsertValueSlot(this_00,&local_2c);
  if (*piVar1 == 0) {
    FUN_012f5a60("mNodeKeyValueMap[kTargetTextKey]","..\\common\\common\\node\\ActionNode.cpp",0x4ed
                );
  }
  local_2c = 0x23;
  piVar1 = IntPointerMap_getOrInsertValueSlot(this_00,&local_2c);
  if (*piVar1 == 0) {
    FUN_012f5a60("mNodeKeyValueMap[kButton1TextKey]","..\\common\\common\\node\\ActionNode.cpp",
                 0x4ee);
  }
  local_2c = 0x24;
  piVar1 = IntPointerMap_getOrInsertValueSlot(this_00,&local_2c);
  if (*piVar1 == 0) {
    FUN_012f5a60("mNodeKeyValueMap[kButton2TextKey]","..\\common\\common\\node\\ActionNode.cpp",
                 0x4ef);
  }
  local_2c = 0x25;
  NodeKeyValueMap_find(this_00,&pvStack_14,&local_2c);
  iVar6 = *(int *)((int)this + 8);
  if ((pvStack_14 == (void *)0x0) || (pvStack_14 != this_00)) {
    FUN_00d83c2d();
  }
  pvStack_14 = Mem_Alloc(0x124);
  if (iStack_10 == iVar6) {
    uStack_4 = 1;
    pvStack_28 = pvStack_14;
    if (pvStack_14 != (void *)0x0) {
      pvStack_14 = (void *)0x1c;
      aiStack_1c[0] = 0x24;
      puStack_20 = (undefined4 *)0x23;
      iStack_24 = 0x17;
      puVar2 = IntPointerMap_getOrInsertValueSlot(this_00,(int *)&pvStack_14);
      puVar3 = IntPointerMap_getOrInsertValueSlot(this_00,aiStack_1c);
      puVar4 = IntPointerMap_getOrInsertValueSlot(this_00,(int *)&puStack_20);
      puVar5 = IntPointerMap_getOrInsertValueSlot(this_00,&iStack_24);
      env = (void *)CommandObject_CustomChoiceDialog_ctor
                              (*puVar5,*puVar4,*puVar3,*puVar2,environment);
      goto LAB_014a3db1;
    }
  }
  else {
    uStack_4 = 0;
    if (pvStack_14 != (void *)0x0) {
      local_2c = 0x1c;
      pvStack_28 = (void *)0x25;
      iStack_24 = 0x24;
      puStack_20 = (undefined4 *)0x23;
      aiStack_1c[0] = 0x17;
      puVar2 = IntPointerMap_getOrInsertValueSlot(this_00,&local_2c);
      puVar3 = IntPointerMap_getOrInsertValueSlot(this_00,(int *)&pvStack_28);
      puVar4 = IntPointerMap_getOrInsertValueSlot(this_00,&iStack_24);
      puStack_20 = IntPointerMap_getOrInsertValueSlot(this_00,(int *)&puStack_20);
      puVar5 = IntPointerMap_getOrInsertValueSlot(this_00,aiStack_1c);
      env = (void *)CommandObject_CustomChoiceDialog_ctorAlt
                              (*puVar5,*puStack_20,*puVar4,*puVar3,*puVar2,environment);
      goto LAB_014a3db1;
    }
  }
  env = (void *)0x0;
LAB_014a3db1:
  uStack_4 = 0xffffffff;
  iVar6 = *(int *)((int)this + 8);
  pvStack_14 = (void *)0x2a;
  NodeKeyValueMap_find(this_00,aiStack_1c,(int *)&pvStack_14);
  if (((void *)*extraout_EAX == (void *)0x0) || ((void *)*extraout_EAX != this_00)) {
    FUN_00d83c2d();
  }
  if (extraout_EAX[1] != iVar6) {
    CommandObject_CustomChoiceDialog_setKey26Flag(true);
  }
  EvaluationEnvironment_addCommandObject(environment,env,commandObject);
  ExceptionList = local_c;
  return true;
}

