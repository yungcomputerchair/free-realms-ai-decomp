// addr: 0x014a07c0
// name: ActionNode_handleEventNodeTarget
// subsystem: common/common/node
// source (binary assert): common/common/node/ActionNode.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionNode_handleEventNodeTarget(void * this, void * environment) */

bool __thiscall ActionNode_handleEventNodeTarget(void *this,void *environment)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *this_00;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int iVar7;
  void *pvVar8;
  int unaff_ESI;
  void *commandObject;
  undefined4 uStack_bc;
  undefined1 auStack_b8 [4];
  int iStack_b4;
  undefined1 auStack_b0 [144];
  void *pvStack_20;
  undefined4 uStack_18;
  int iStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Reads an int-value map describing event source/target/id, records source and
                       target in a copied environment, and enqueues a dummy event command. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_016a43a9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EvaluationEnvironment_tracef
            (environment,"handleEventNodeTarget",DAT_01b839d8 ^ (uint)&stack0xffffff34);
  piVar4 = (int *)**(int **)((int)this + 8);
  if (piVar4 == *(int **)((int)this + 8)) {
    FUN_00d83c2d();
  }
  iVar7 = piVar4[4];
  if (iVar7 == 0) {
    FUN_012f5a60("value","..\\common\\common\\node\\ActionNode.cpp",0x3ef);
  }
  if (*(int *)(iVar7 + 4) != 0xe) {
    FUN_012f5a60("value->isIntValueMapValue()","..\\common\\common\\node\\ActionNode.cpp",0x3f0);
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
  uStack_bc = 0;
  piVar4 = (int *)FUN_013144f0(auStack_b0,&uStack_bc);
  iVar1 = *piVar4;
  iVar2 = piVar4[1];
  iStack_b4 = *(int *)(iVar7 + 4);
  if ((iVar1 == 0) || (iVar1 != iVar7)) {
    FUN_00d83c2d();
  }
  if (iVar2 == iStack_b4) {
    FUN_012f5a60("finder != intValueMap->end()","..\\common\\common\\node\\ActionNode.cpp",0x3f4);
  }
  if (iVar1 == 0) {
    FUN_00d83c2d();
  }
  if (iVar2 == *(int *)(iVar1 + 4)) {
    FUN_00d83c2d();
  }
  iVar1 = *(int *)(iVar2 + 0x10);
  if ((*(int *)(iVar1 + 4) == 2) ||
     (FUN_012f5a60("mTypeID == kIntegerTypeID",
                   "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                   ,0x129), *(int *)(iVar1 + 4) == 2)) {
    uVar5 = *(undefined4 *)(iVar1 + 8);
  }
  else {
    uVar5 = 0;
  }
  uVar5 = (**(code **)(*(int *)this + 0x50))
                    (uVar5,environment,0,&PlayElement::RTTI_Type_Descriptor,
                     &Card::RTTI_Type_Descriptor,0);
  FUN_00d8d382(uVar5);
  piVar4 = (int *)FUN_013144f0(auStack_b0,&stack0xffffff3c);
  iVar1 = *piVar4;
  iStack_b4 = *(int *)(iVar7 + 4);
  iVar2 = piVar4[1];
  if ((iVar1 == 0) || (iVar1 != iVar7)) {
    FUN_00d83c2d();
  }
  if (iVar2 == iStack_b4) {
    FUN_012f5a60("finder != intValueMap->end()","..\\common\\common\\node\\ActionNode.cpp",0x3f9);
  }
  if (iVar1 == 0) {
    FUN_00d83c2d();
  }
  if (iVar2 == *(int *)(iVar1 + 4)) {
    FUN_00d83c2d();
  }
  iVar1 = *(int *)(iVar2 + 0x10);
  if ((*(int *)(iVar1 + 4) == 2) ||
     (FUN_012f5a60("mTypeID == kIntegerTypeID",
                   "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                   ,0x129), *(int *)(iVar1 + 4) == 2)) {
    pvVar8 = *(void **)(iVar1 + 8);
  }
  else {
    pvVar8 = (void *)0x0;
  }
  iVar6 = (**(code **)(*(int *)this + 0x50))(pvVar8,uStack_4);
  piVar4 = (int *)FUN_013144f0(auStack_b8,&stack0xffffff40);
  iVar1 = *piVar4;
  iVar2 = piVar4[1];
  iVar3 = *(int *)(iVar7 + 4);
  if ((iVar1 == 0) || (iVar1 != iVar7)) {
    FUN_00d83c2d();
  }
  if (iVar2 == iVar3) {
    FUN_012f5a60("finder != intValueMap->end()","..\\common\\common\\node\\ActionNode.cpp",0x3fe);
  }
  if (iVar1 == 0) {
    FUN_00d83c2d();
  }
  if (iVar2 == *(int *)(iVar1 + 4)) {
    FUN_00d83c2d();
  }
  iVar7 = *(int *)(iVar2 + 0x10);
  if ((*(int *)(iVar7 + 4) == 2) ||
     (FUN_012f5a60("mTypeID == kIntegerTypeID",
                   "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                   ,0x129), *(int *)(iVar7 + 4) == 2)) {
    commandObject = *(void **)(iVar7 + 8);
  }
  else {
    commandObject = (void *)0x0;
  }
  if (unaff_ESI == 0) {
    if (iVar6 == 0) {
      EvaluationEnvironment_tracef(local_c,"Event: %d, source: NULL, target: NULL",commandObject);
    }
    else {
      PlayElement_getId();
      EvaluationEnvironment_tracef(local_c,"Event: %d, source: NULL, target: %d",commandObject);
    }
  }
  else if (iVar6 == 0) {
    PlayElement_getId();
    EvaluationEnvironment_tracef(local_c,"Event: %d, source: %d, target: NULL",commandObject);
  }
  else {
    uVar5 = PlayElement_getId();
    PlayElement_getId(uVar5);
    EvaluationEnvironment_tracef(local_c,"Event: %d, source: %d, target: %d",commandObject);
  }
  EvaluationEnvironment_ctor();
  this_00 = local_c;
  iStack_14 = 0;
  EvaluationEnvironment_copyFrom(auStack_b0,local_c,pvVar8);
  if (unaff_ESI != 0) {
    iVar7 = PlayElement_getId();
    set_integer_value_for_key(0x33,iVar7);
  }
  if (iVar6 != 0) {
    iVar7 = PlayElement_getId();
    set_integer_value_for_key(0x34,iVar7);
  }
  pvVar8 = Mem_Alloc(0x124);
  iStack_14._0_1_ = 1;
  if (pvVar8 == (void *)0x0) {
    piVar4 = (int *)0x0;
  }
  else {
    piVar4 = CommandObject_DummyEvent_ctor(pvVar8,auStack_b0);
  }
  iStack_14 = (uint)iStack_14._1_3_ << 8;
  (**(code **)(*piVar4 + 0x60))();
  EvaluationEnvironment_addCommandObject(this_00,piVar4,commandObject);
  uStack_18 = 0xffffffff;
  FUN_01385460();
  ExceptionList = pvStack_20;
  return true;
}

