// addr: 0x014a26a0
// name: ActionNode_handleCreateTarget
// subsystem: common/common/node
// source (binary assert): common/common/node/ActionNode.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ActionNode_handleCreateTarget(void * this, void * environment) */

bool __thiscall ActionNode_handleCreateTarget(void *this,void *environment)

{
  int iVar1;
  int *piVar2;
  void *pvVar3;
  void *pvVar4;
  int iVar5;
  int iVar6;
  void *env;
  int iVar7;
  void *sourceEnv;
  char cVar8;
  undefined2 uVar9;
  byte bVar10;
  void *pvStack_178;
  int iStack_174;
  void *apvStack_170 [2];
  undefined4 uStack_168;
  int iStack_164;
  undefined1 auStack_160 [4];
  int *piStack_15c;
  int *piStack_158;
  undefined4 uStack_154;
  int iStack_144;
  void *pvStack_140;
  undefined1 auStack_13c [148];
  undefined1 auStack_a8 [148];
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  void *pvStack_4;
  
                    /* Handles create-target actions by reading an int-value map for object id,
                       owner, and hand/deck flags, selecting the proper player/pile, and enqueuing a
                       create-object command. */
  pvStack_4 = (void *)0xffffffff;
  puStack_8 = &LAB_016a471a;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EvaluationEnvironment_tracef(environment,"target == create",DAT_01b839d8 ^ (uint)&stack0xfffffe78)
  ;
  piVar2 = (int *)**(int **)((int)this + 8);
  if (piVar2 == *(int **)((int)this + 8)) {
    FUN_00d83c2d();
  }
  iVar7 = piVar2[4];
  if (iVar7 == 0) {
    FUN_012f5a60("value","..\\common\\common\\node\\ActionNode.cpp",0x649);
  }
  EvaluationEnvironment_tracefWithPrefix(environment,"CreateObject: ");
  if (*(int *)(iVar7 + 4) != 0xe) {
    FUN_012f5a60("value->isIntValueMapValue()","..\\common\\common\\node\\ActionNode.cpp",0x64b);
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
  iStack_174 = 0;
  piVar2 = (int *)FUN_013144f0(apvStack_170,&iStack_174);
  iVar6 = *piVar2;
  iStack_164 = piVar2[1];
  piStack_15c = *(int **)(iVar7 + 4);
  if ((iVar6 == 0) || (iVar6 != iVar7)) {
    FUN_00d83c2d();
  }
  if ((int *)iStack_164 == piStack_15c) {
    FUN_012f5a60("finder != intValueMap->end()","..\\common\\common\\node\\ActionNode.cpp",0x64f);
  }
  FUN_012fa910();
  pvStack_4 = (void *)0x0;
  if (iVar6 == 0) {
    FUN_00d83c2d();
  }
  if (iStack_164 == *(int *)(iVar6 + 4)) {
    FUN_00d83c2d();
  }
  FUN_013010e0(*(undefined4 *)(iStack_164 + 0x10));
  FUN_01301590(environment);
  if ((iStack_144 != 2) &&
     (FUN_012f5a60("mTypeID == kIntegerTypeID",
                   "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                   ,0x129), iStack_144 != 2)) {
    pvStack_140 = (void *)0x0;
  }
  apvStack_170[0] = (void *)(**(code **)(*(int *)this + 0x50))(pvStack_140,environment);
  piVar2 = (int *)FUN_013144f0(&pvStack_178,&stack0xfffffe84);
  iVar6 = *piVar2;
  iVar1 = piVar2[1];
  iStack_164 = *(int *)(iVar7 + 4);
  if ((iVar6 == 0) || (sourceEnv = pvStack_140, iVar6 != iVar7)) {
    FUN_00d83c2d();
    sourceEnv = pvStack_140;
  }
  if (iVar1 == iStack_164) {
    FUN_012f5a60("finder != intValueMap->end()","..\\common\\common\\node\\ActionNode.cpp",0x657);
  }
  if (iVar6 == 0) {
    FUN_00d83c2d();
  }
  if (iVar1 == *(int *)(iVar6 + 4)) {
    FUN_00d83c2d();
  }
  uStack_168 = *(undefined4 *)(iVar1 + 0x10);
  piVar2 = (int *)FUN_013144f0(&iStack_144,&stack0xfffffe84);
  iVar6 = *piVar2;
  iVar1 = piVar2[1];
  pvVar3 = EvaluationEnvironment_getMember14(environment);
  pvVar4 = EvaluationEnvironment_getOriginCard(environment);
  if (pvVar4 != (void *)0x0) {
    piVar2 = EvaluationEnvironment_getOriginCard(environment);
    iVar5 = (**(code **)(*piVar2 + 0x28))();
    pvVar4 = EvaluationEnvironment_getGame(environment);
    pvVar3 = PlayArea_findPlayerElementById(pvVar4,iVar5);
  }
  iStack_174 = *(int *)(iVar7 + 4);
  if ((iVar6 == 0) || (iVar6 != iVar7)) {
    FUN_00d83c2d();
  }
  if (iVar1 != iStack_174) {
    if (iVar6 == 0) {
      FUN_00d83c2d();
    }
    if (iVar1 == *(int *)(iVar6 + 4)) {
      FUN_00d83c2d();
    }
    EvaluationEnvironment_tracefWithPrefix(environment,"found non-default owner: ");
    piStack_15c = (int *)0x0;
    piStack_158 = (int *)0x0;
    uStack_154 = 0;
    local_c._0_1_ = 1;
    EvaluationEnvironment_ctor();
    local_c = (void *)CONCAT31(local_c._1_3_,2);
    EvaluationEnvironment_copyFrom(auStack_a8,environment,sourceEnv);
    EvaluationEnvironment_setTarget1Return(1);
    FUN_012fb470(auStack_160,auStack_a8);
    piVar2 = piStack_15c;
    if ((piStack_15c != (int *)0x0) && ((int)piStack_158 - (int)piStack_15c >> 2 != 0)) {
      if (piStack_158 < piStack_15c) {
        FUN_00d83c2d();
      }
      if (piStack_158 <= piVar2) {
        FUN_00d83c2d();
      }
      piVar2 = (int *)*piVar2;
      if (piVar2 == (int *)0x0) {
        FUN_012f5a60(&DAT_018778b4,"..\\common\\common\\node\\ActionNode.cpp",0x66b);
      }
      iVar6 = (**(code **)(*piVar2 + 0x28))();
      pvVar4 = EvaluationEnvironment_getGame(environment);
      pvVar3 = PlayArea_findPlayerElementById(pvVar4,iVar6);
    }
    local_c._0_1_ = 1;
    FUN_01385460();
    local_c = (void *)((uint)local_c._1_3_ << 8);
    if (piStack_15c != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(piStack_15c);
    }
    piStack_15c = (int *)0x0;
    piStack_158 = (int *)0x0;
    uStack_154 = 0;
  }
  uVar9 = 0;
  pvStack_178 = (void *)0x3;
  piVar2 = (int *)FUN_013144f0(&iStack_144,&pvStack_178);
  iVar6 = *piVar2;
  iVar1 = piVar2[1];
  iVar5 = *(int *)(iVar7 + 4);
  if ((iVar6 == 0) || (iVar6 != iVar7)) {
    FUN_00d83c2d();
  }
  if (iVar1 != iVar5) {
    if (iVar6 == 0) {
      FUN_00d83c2d();
    }
    if (iVar1 == *(int *)(iVar6 + 4)) {
      FUN_00d83c2d();
    }
    iVar6 = *(int *)(iVar1 + 0x10);
    if ((*(int *)(iVar6 + 4) == 1) ||
       (FUN_012f5a60("mTypeID == kBooleanTypeID",
                     "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                     ,0x12f), *(int *)(iVar6 + 4) == 1)) {
      uVar9 = (undefined2)(((uint)*(byte *)(iVar6 + 8) << 0x18) >> 0x10);
    }
  }
  pvStack_178 = (void *)0x4;
  piVar2 = (int *)FUN_013144f0(&iStack_144,&pvStack_178);
  iVar6 = *piVar2;
  iVar1 = piVar2[1];
  iVar5 = *(int *)(iVar7 + 4);
  if ((iVar6 == 0) || (iVar6 != iVar7)) {
    FUN_00d83c2d();
  }
  if (iVar1 != iVar5) {
    if (iVar6 == 0) {
      FUN_00d83c2d();
    }
    if (iVar1 == *(int *)(iVar6 + 4)) {
      FUN_00d83c2d();
    }
    iVar7 = *(int *)(iVar1 + 0x10);
    bVar10 = (byte)((ushort)uVar9 >> 8);
    if ((*(int *)(iVar7 + 4) == 1) ||
       (FUN_012f5a60("mTypeID == kBooleanTypeID",
                     "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                     ,0x12f), *(int *)(iVar7 + 4) == 1)) {
      uVar9 = CONCAT11(bVar10,*(undefined1 *)(iVar7 + 8));
    }
    else {
      uVar9 = (undefined2)(((uint)bVar10 << 0x18) >> 0x10);
    }
  }
  EvaluationEnvironment_ctor();
  pvVar4 = pvStack_4;
  local_c = (void *)CONCAT31(local_c._1_3_,3);
  EvaluationEnvironment_copyFrom(auStack_13c,pvStack_4,sourceEnv);
  FUN_013815b0(pvVar3);
  cVar8 = (char)uVar9;
  bVar10 = (byte)((ushort)uVar9 >> 8);
  EvaluationEnvironment_tracef(pvVar4,"goingToHand: %d, goingToDeck: %d, player: %p",(uint)bVar10);
  if (((bVar10 != 0) || (cVar8 != '\0')) && (pvVar3 != (void *)0x0)) {
    PlayElement_getGame();
    if (bVar10 == 0) {
      env = (void *)FUN_0139d7a0();
    }
    else {
      env = (void *)FUN_0139d7c0();
    }
    EvaluationEnvironment_setCurrentTargetFromElement(auStack_13c,env,sourceEnv);
    FUN_013815b0(pvVar3);
  }
  pvStack_178 = Mem_Alloc(0x130);
  local_c._0_1_ = 4;
  if (pvStack_178 == (void *)0x0) {
    piVar2 = (int *)0x0;
  }
  else {
    piVar2 = (int *)FUN_0150c8a0(uStack_168,auStack_13c);
  }
  local_c._0_1_ = 3;
  if (bVar10 == 0) {
    if (cVar8 == '\0') {
      CommandObjectCreate_setCreatedElement(piVar2,apvStack_170[0]);
      goto LAB_014a2c41;
    }
LAB_014a2c24:
    if (cVar8 != '\x01') goto LAB_014a2c41;
  }
  else if (bVar10 != 1) goto LAB_014a2c24;
  (**(code **)(*piVar2 + 0x60))(0);
  (**(code **)(*piVar2 + 0x50))(0);
LAB_014a2c41:
  EvaluationEnvironment_addCommandObject(pvVar4,piVar2,sourceEnv);
  iVar7 = FUN_01383460(0x3f);
  set_integer_value_for_key(0x3f,iVar7);
  local_c = (void *)((uint)local_c._1_3_ << 8);
  FUN_01385460();
  local_c = (void *)0xffffffff;
  FUN_01300cd0();
  ExceptionList = pvStack_14;
  return true;
}

