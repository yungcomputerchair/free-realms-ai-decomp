// addr: 0x01459320
// name: cwactionnode_sub_01459320
// subsystem: common/rules/node
// source (binary assert): common/rules/node/cwactionnode.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void cwactionnode_sub_01459320(int * param_1, undefined4 param_2_) */

void __thiscall cwactionnode_sub_01459320(void *this,int *param_1,undefined4 param_2_)

{
  void *pvVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  int *piVar5;
  int *extraout_EAX;
  int *extraout_EAX_00;
  undefined4 uVar6;
  void *this_00;
  char *sourceMap;
  undefined1 *local_34;
  int *local_30;
  void *pvStack_2c;
  int iStack_28;
  int iStack_20;
  undefined1 auStack_1c [8];
  undefined1 auStack_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  uint uStack_4;
  
                    /* Is a class method with behavior inferred from its code shape. Evidence:
                       __FILE__ path ..\\common\\rules\\node\\cwactionnode.cpp; strings mTypeID ==
                       kIntegerTypeID, mTypeID == kIntegerTypeID,
                       mNodeKeyValueMap[kPhaseKey]->isIntegerValue(), mNodeKeyValueMap[kPhaseKey],
                       Doing a PushPhase. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0169c533;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  sourceMap = (char *)0x145935c;
  local_30 = this;
  EvaluationEnvironment_tracef(param_1,"Doing a PushPhase",DAT_01b839d8 ^ (uint)&stack0xffffffbc);
  this_00 = (void *)((int)this + 4);
  local_34 = (undefined1 *)0x22;
  piVar5 = IntPointerMap_getOrInsertValueSlot(this_00,(int *)&local_34);
  if (*piVar5 == 0) {
    sourceMap = "mNodeKeyValueMap[kPhaseKey]";
    FUN_012f5a60();
  }
  local_34 = (undefined1 *)0x22;
  piVar5 = IntPointerMap_getOrInsertValueSlot(this_00,(int *)&local_34);
  if (*(int *)(*piVar5 + 4) != 2) {
    sourceMap = "mNodeKeyValueMap[kPhaseKey]->isIntegerValue()";
    FUN_012f5a60();
  }
  pvStack_2c = Mem_Alloc(0x124);
  uStack_4 = 0;
  if (pvStack_2c == (void *)0x0) {
    local_34 = (undefined1 *)0x0;
  }
  else {
    local_34 = &stack0xffffffac;
    IntPointerMap_copyCtorWrapper(&stack0xffffffac,(int)this_00,sourceMap);
    uStack_4 = uStack_4 & 0xffffff00;
    local_34 = (undefined1 *)FUN_015017a0(param_1);
  }
  uStack_4 = 0xffffffff;
  pvStack_2c = (void *)0x2f;
  NodeKeyValueMap_find(this_00,auStack_1c,(int *)&pvStack_2c);
  pvVar1 = (void *)*extraout_EAX;
  iVar2 = extraout_EAX[1];
  pvStack_2c = (void *)0x30;
  NodeKeyValueMap_find(this_00,auStack_14,(int *)&pvStack_2c);
  pvVar3 = (void *)*extraout_EAX_00;
  iStack_28 = extraout_EAX_00[1];
  iStack_20 = *(int *)((int)this + 8);
  if ((pvVar1 == (void *)0x0) || (pvVar1 != this_00)) {
    FUN_00d83c2d();
  }
  piVar5 = local_30;
  if (iVar2 != iStack_20) {
    iStack_20 = *(int *)((int)this + 8);
    if ((pvVar3 == (void *)0x0) || (pvVar3 != this_00)) {
      FUN_00d83c2d();
    }
    piVar5 = local_30;
    if (iStack_28 != iStack_20) {
      if (pvVar1 == (void *)0x0) {
        FUN_00d83c2d();
      }
      if (iVar2 == *(int *)((int)pvVar1 + 4)) {
        FUN_00d83c2d();
      }
      iVar2 = *(int *)(iVar2 + 0x10);
      if ((*(int *)(iVar2 + 4) == 2) || (FUN_012f5a60(), *(int *)(iVar2 + 4) == 2)) {
        uVar6 = *(undefined4 *)(iVar2 + 8);
      }
      else {
        uVar6 = 0;
      }
      piVar5 = local_30;
      uVar6 = (**(code **)(*local_30 + 0x50))(uVar6,param_1,0);
      FUN_00d8d382(uVar6);
      if (pvVar3 == (void *)0x0) {
        FUN_00d83c2d();
      }
      piVar4 = local_30;
      if (local_30 == *(int **)((int)pvVar3 + 4)) {
        FUN_00d83c2d();
      }
      iVar2 = piVar4[4];
      if ((*(int *)(iVar2 + 4) == 2) ||
         (FUN_012f5a60("mTypeID == kIntegerTypeID",
                       "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                      ), *(int *)(iVar2 + 4) == 2)) {
        uVar6 = *(undefined4 *)(iVar2 + 8);
      }
      else {
        uVar6 = 0;
      }
      uVar6 = (**(code **)(*piVar5 + 0x50))
                        (uVar6,param_1,0,&PlayElement::RTTI_Type_Descriptor,
                         &CWCard::RTTI_Type_Descriptor);
      FUN_00d8d382(uVar6);
      FUN_0142a6b0();
    }
  }
  ActionNode_handlePushPhase(piVar5,param_1);
  ExceptionList = local_c;
  return;
}

