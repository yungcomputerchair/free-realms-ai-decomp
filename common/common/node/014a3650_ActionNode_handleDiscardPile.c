// addr: 0x014a3650
// name: ActionNode_handleDiscardPile
// subsystem: common/common/node
// source (binary assert): common/common/node/ActionNode.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionNode_handleDiscardPile(void * this, void * environment) */

bool __thiscall ActionNode_handleDiscardPile(void *this,void *environment)

{
  void *environment_00;
  void *pvVar1;
  undefined1 uVar2;
  void *commandObject;
  void *pvVar3;
  int *piVar4;
  undefined4 *puVar5;
  int iVar6;
  void *pvVar7;
  int *local_20;
  int iStack_1c;
  undefined4 *local_18;
  void *local_14;
  undefined4 *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  environment_00 = environment;
                    /* Either delegates to matching child targets already in discard/draw piles, or
                       validates discard/count/random keys and enqueues a DiscardPile command. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016a487b;
  local_c = ExceptionList;
  commandObject = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffd0);
  ExceptionList = &local_c;
  local_20 = this;
  EvaluationEnvironment_tracef(environment,"Adding a DiscardPile command",commandObject);
  local_18 = *(undefined4 **)((int)this + 8);
  local_10 = (undefined4 *)*local_18;
  pvVar7 = (void *)((int)this + 4);
  local_14 = pvVar7;
  while( true ) {
    puVar5 = local_10;
    pvVar1 = local_14;
    if ((local_14 == (void *)0x0) || (local_14 != pvVar7)) {
      FUN_00d83c2d();
    }
    if (puVar5 == local_18) break;
    if (pvVar1 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar5 == *(undefined4 **)((int)pvVar1 + 4)) {
      FUN_00d83c2d();
    }
    if (puVar5[3] == 7) {
      pvVar7 = EvaluationEnvironment_resolveTarget(environment_00);
      EvaluationEnvironment_getMember14(environment_00);
      PlayElement_getGame();
      pvVar3 = (void *)Player_getDiscardPile();
      EvaluationEnvironment_setCurrentTargetFromElement(environment_00,pvVar3,commandObject);
      if ((puVar5 == *(undefined4 **)((int)pvVar1 + 4)) &&
         (FUN_00d83c2d(), puVar5 == *(undefined4 **)((int)pvVar1 + 4))) {
        FUN_00d83c2d();
      }
      uVar2 = (**(code **)(*local_20 + 0x54))(puVar5[3],puVar5[4],environment_00,1);
      EvaluationEnvironment_setCurrentTargetFromElement(environment_00,pvVar7,commandObject);
      ExceptionList = local_c;
      return (bool)uVar2;
    }
    if (puVar5 == *(undefined4 **)((int)pvVar1 + 4)) {
      FUN_00d83c2d();
    }
    if (puVar5[3] == 8) {
      pvVar7 = EvaluationEnvironment_resolveTarget(environment_00);
      EvaluationEnvironment_getMember14(environment_00);
      PlayElement_getGame();
      pvVar3 = (void *)Player_getDiscardPile();
      EvaluationEnvironment_setCurrentTargetFromElement(environment_00,pvVar3,commandObject);
      if ((puVar5 == *(undefined4 **)((int)pvVar1 + 4)) &&
         (FUN_00d83c2d(), puVar5 == *(undefined4 **)((int)pvVar1 + 4))) {
        FUN_00d83c2d();
      }
      uVar2 = (**(code **)(*local_20 + 0x54))(puVar5[3],puVar5[4],environment_00,1);
      EvaluationEnvironment_setCurrentTargetFromElement(environment_00,pvVar7,commandObject);
      ExceptionList = local_c;
      return (bool)uVar2;
    }
    STLMapIterator_next(&local_14);
  }
  environment = &DAT_00000004;
  piVar4 = IntPointerMap_getOrInsertValueSlot(pvVar7,(int *)&environment);
  if (*piVar4 == 0) {
    FUN_012f5a60("mNodeKeyValueMap[kDiscardKey]","..\\common\\common\\node\\ActionNode.cpp",0x4cd);
  }
  environment = (void *)0x16;
  piVar4 = IntPointerMap_getOrInsertValueSlot(pvVar7,(int *)&environment);
  if (*piVar4 == 0) {
    FUN_012f5a60("mNodeKeyValueMap[kNumActionsKey]","..\\common\\common\\node\\ActionNode.cpp",0x4ce
                );
  }
  environment = &DAT_00000018;
  piVar4 = IntPointerMap_getOrInsertValueSlot(pvVar7,(int *)&environment);
  if (*piVar4 == 0) {
    FUN_012f5a60("mNodeKeyValueMap[kRandomKey]","..\\common\\common\\node\\ActionNode.cpp",0x4cf);
  }
  environment = &DAT_00000004;
  piVar4 = IntPointerMap_getOrInsertValueSlot(pvVar7,(int *)&environment);
  if (*(int *)(*piVar4 + 4) != 2) {
    FUN_012f5a60("mNodeKeyValueMap[kDiscardKey]->isIntegerValue()",
                 "..\\common\\common\\node\\ActionNode.cpp",0x4d0);
  }
  environment = &DAT_00000018;
  piVar4 = IntPointerMap_getOrInsertValueSlot(pvVar7,(int *)&environment);
  if (*(int *)(*piVar4 + 4) != 1) {
    FUN_012f5a60("mNodeKeyValueMap[kRandomKey]->isBooleanValue()",
                 "..\\common\\common\\node\\ActionNode.cpp",0x4d1);
  }
  local_14 = Mem_Alloc(0x134);
  uStack_4 = 0;
  if (local_14 == (void *)0x0) {
    pvVar7 = (void *)0x0;
  }
  else {
    environment = &DAT_00000018;
    local_20 = (int *)&DAT_00000004;
    iStack_1c = 0x16;
    piVar4 = IntPointerMap_getOrInsertValueSlot(pvVar7,(int *)&environment);
    iVar6 = *piVar4;
    if ((*(int *)(iVar6 + 4) == 1) ||
       (FUN_012f5a60("mTypeID == kBooleanTypeID",
                     "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                     ,0x12f), *(int *)(iVar6 + 4) == 1)) {
      uVar2 = *(undefined1 *)(iVar6 + 8);
    }
    else {
      uVar2 = false;
    }
    piVar4 = IntPointerMap_getOrInsertValueSlot(pvVar7,(int *)&local_20);
    iVar6 = *piVar4;
    if ((*(int *)(iVar6 + 4) == 2) ||
       (FUN_012f5a60("mTypeID == kIntegerTypeID",
                     "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                     ,0x129), *(int *)(iVar6 + 4) == 2)) {
      iVar6 = *(int *)(iVar6 + 8);
    }
    else {
      iVar6 = 0;
    }
    puVar5 = IntPointerMap_getOrInsertValueSlot(pvVar7,&iStack_1c);
    pvVar7 = CommandObjectDiscardPile_ctor
                       (local_14,environment_00,(void *)0x1,(void *)*puVar5,iVar6,(bool)uVar2);
  }
  uStack_4 = 0xffffffff;
  EvaluationEnvironment_addCommandObject(environment_00,pvVar7,commandObject);
  ExceptionList = local_c;
  return true;
}

