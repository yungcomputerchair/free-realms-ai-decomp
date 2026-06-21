// addr: 0x014a0be0
// name: ActionNode_handleMappedAttributeModTarget
// subsystem: common/common/node
// source (binary assert): common/common/node/ActionNode.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionNode_handleMappedAttributeModTarget(void * this, void *
   environment) */

bool __thiscall ActionNode_handleMappedAttributeModTarget(void *this,void *environment)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  undefined4 uVar5;
  void *pvVar6;
  char *formatText;
  int elementId_;
  int iVar7;
  TypeDescriptor *pTVar8;
  TypeDescriptor *pTVar9;
  undefined4 uVar10;
  TypeDescriptor *card;
  undefined4 uStack_dc;
  int iStack_d8;
  int iStack_d0;
  int *local_c8;
  void *pvStack_c0;
  undefined4 uStack_bc;
  void *pvStack_b8;
  int iStack_b4;
  undefined1 auStack_b0 [8];
  undefined1 auStack_a8 [148];
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Handles a mapped attribute modifier target by resolving target and optional
                       mapped target entries, logging modifier/value, and enqueuing a
                       modify-property command. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016a43ff;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_c8 = this;
  EvaluationEnvironment_tracef
            (environment,"target == MappedAttributeMod",DAT_01b839d8 ^ (uint)&stack0xffffff14);
  piVar4 = (int *)**(int **)((int)this + 8);
  if (piVar4 == *(int **)((int)this + 8)) {
    FUN_00d83c2d();
  }
  iVar7 = piVar4[4];
  if (iVar7 == 0) {
    FUN_012f5a60("value","..\\common\\common\\node\\ActionNode.cpp",0x50c);
  }
  EvaluationEnvironment_tracefWithPrefix(environment,"AttributeMod: ");
  if (*(int *)(iVar7 + 4) != 0xe) {
    FUN_012f5a60("value->isIntValueMapValue()","..\\common\\common\\node\\ActionNode.cpp",0x50e);
  }
  if ((*(int *)(iVar7 + 4) == 0xe) ||
     (FUN_012f5a60("mTypeID == kIntValueMapTypeID",
                   "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                   ,0x141), *(int *)(iVar7 + 4) == 0xe)) {
    iVar7 = *(int *)(iVar7 + 8);
  }
  else {
    iVar7 = 0;
  }
  uStack_dc = 0;
  piVar4 = (int *)FUN_013144f0(auStack_b0,&uStack_dc);
  iVar1 = *piVar4;
  iStack_b4 = *(int *)(iVar7 + 4);
  iVar2 = piVar4[1];
  if ((iVar1 == 0) || (iVar1 != iVar7)) {
    FUN_00d83c2d();
  }
  if (iVar2 == iStack_b4) {
    FUN_012f5a60("finder != intValueMap->end()","..\\common\\common\\node\\ActionNode.cpp",0x513);
  }
  if (iVar1 == 0) {
    FUN_00d83c2d();
  }
  if (iVar2 == *(int *)(iVar1 + 4)) {
    FUN_00d83c2d();
  }
  uVar5 = *(undefined4 *)(iVar2 + 0x10);
  FUN_012fa910();
  uStack_4 = 0;
  FUN_013010e0(uVar5);
  FUN_01301590(environment);
  FUN_01300d70(0);
  if ((pvStack_c0 != (void *)0x2) &&
     (FUN_012f5a60("mTypeID == kIntegerTypeID",
                   "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                   ,0x129), pvStack_c0 != (void *)0x2)) {
    uStack_bc = 0;
  }
  card = &Card::RTTI_Type_Descriptor;
  uVar5 = (**(code **)(*local_c8 + 0x50))
                    (uStack_bc,environment,0,&PlayElement::RTTI_Type_Descriptor,
                     &Card::RTTI_Type_Descriptor,0);
  pvStack_c0 = (void *)FUN_00d8d382(uVar5);
  EvaluationEnvironment_tracef(environment,"Target: %p",pvStack_c0);
  piVar4 = (int *)FUN_013144f0(auStack_b0,&stack0xffffff1c);
  iVar1 = *piVar4;
  iVar2 = piVar4[1];
  iStack_b4 = *(int *)(iVar7 + 4);
  if ((iVar1 == 0) || (iVar1 != iVar7)) {
    FUN_00d83c2d();
  }
  if (iVar2 == iStack_b4) {
    FUN_012f5a60("finder != intValueMap->end()","..\\common\\common\\node\\ActionNode.cpp",0x51d);
  }
  if (iVar1 == 0) {
    FUN_00d83c2d();
  }
  if (iVar2 == *(int *)(iVar1 + 4)) {
    FUN_00d83c2d();
  }
  pvStack_b8 = *(void **)(iVar2 + 0x10);
  piVar4 = (int *)FUN_013144f0(auStack_b0,&stack0xffffff1c);
  iVar1 = *piVar4;
  iVar2 = piVar4[1];
  FUN_012fa910();
  local_c = (void *)CONCAT31(local_c._1_3_,1);
  iVar3 = *(int *)(iVar7 + 4);
  if ((iVar1 == 0) || (iVar1 != iVar7)) {
    FUN_00d83c2d();
  }
  if (iVar2 != iVar3) {
    if (iVar1 == 0) {
      FUN_00d83c2d();
    }
    if (iVar2 == *(int *)(iVar1 + 4)) {
      FUN_00d83c2d();
    }
    FUN_013010e0(*(undefined4 *)(iVar2 + 0x10));
    FUN_01301590(environment);
    FUN_01300d70(0);
    EvaluationEnvironment_tracefWithPrefix(environment,"found mapped target: ");
    if (iStack_d8 != 2) {
      FUN_012f5a60("mTypeID == kIntegerTypeID",
                   "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                   ,0x129);
    }
    uVar10 = 0;
    pTVar9 = &Card::RTTI_Type_Descriptor;
    pTVar8 = &PlayElement::RTTI_Type_Descriptor;
    uVar5 = 0;
    pvVar6 = EvaluationEnvironment_getGame(environment);
    pvVar6 = find_play_element_in_maps(pvVar6,elementId_);
    formatText = (char *)FUN_00d8d382(pvVar6,uVar5,pTVar8,pTVar9,uVar10);
    EvaluationEnvironment_logCardMessage(environment,"mapped target: ",formatText,card);
  }
  EvaluationEnvironment_tracef
            (environment,"Add Attribute Modifier: %d",*(undefined4 *)(iStack_d0 + 0x28));
  pvVar6 = pvStack_b8;
  EvaluationEnvironment_tracefWithPrefix(environment,"With Value: ");
  EvaluationEnvironment_ctor();
  local_c._0_1_ = 2;
  EvaluationEnvironment_copyFrom(auStack_a8,environment,card);
  EvaluationEnvironment_setCurrentTargetFromElement(auStack_a8,pvStack_c0,card);
  pvStack_c0 = Mem_Alloc(0x144);
  local_c._0_1_ = 3;
  if (pvStack_c0 == (void *)0x0) {
    pvVar6 = (void *)0x0;
  }
  else {
    pvVar6 = CommandObjectModifyProperty_ctor
                       (pvStack_c0,true,*(void **)(iStack_d0 + 0x28),pvVar6,&uStack_dc,auStack_a8);
  }
  local_c._0_1_ = 2;
  EvaluationEnvironment_addCommandObject(environment,pvVar6,card);
  local_c._0_1_ = 1;
  FUN_01385460();
  local_c = (void *)((uint)local_c._1_3_ << 8);
  FUN_01300cd0();
  local_c = (void *)0xffffffff;
  FUN_01300cd0();
  ExceptionList = pvStack_14;
  return true;
}

