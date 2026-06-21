// addr: 0x0147b220
// name: ChainedActionState_applyInitialReturnValues
// subsystem: common/common/rules
// source (binary assert): common/common/state/ChainedActionState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall ChainedActionState_applyInitialReturnValues(int *param_1)

{
  uint uVar1;
  char cVar2;
  void *this;
  int iVar3;
  void *pvVar4;
  int *piVar5;
  undefined4 uVar6;
  int key_;
  
                    /* Applies initial ChainedActionState return values, resolving player/force
                       returns and value-data-list driven effects before the chain continues. */
  this = (void *)StateMachine_popReturnValueMap();
  if (this == (void *)0x0) {
    FUN_012f5a60(&DAT_018e3654,"..\\common\\common\\state\\ChainedActionState.cpp",0x38);
  }
  cVar2 = ReturnValueMap_hasIntegerKey(4);
  if (cVar2 == '\0') {
    FUN_012f5a60("rvm->hasIntegerKey(kPlayerReturn)",
                 "..\\common\\common\\state\\ChainedActionState.cpp",0x3a);
  }
  iVar3 = ReturnValueMap_getInteger(4);
  pvVar4 = (void *)StateMachineState_getGame();
  pvVar4 = PlayArea_findPlayerElementById(pvVar4,iVar3);
  FUN_013815b0(pvVar4);
  piVar5 = (int *)StateMachineState_getCurrentTurn();
  iVar3 = *piVar5;
  pvVar4 = EvaluationEnvironment_getMember14((void *)param_1[0x3a]);
  (**(code **)(iVar3 + 0x48))(pvVar4);
  (**(code **)(*param_1 + 0x9c))();
  pvVar4 = ReturnValueMap_findValueData(this,key_);
  if ((pvVar4 == (void *)0x0) || (*(int *)((int)pvVar4 + 4) != 8)) {
    FUN_012f5a60("vdl && vdl->isValueDataListValue()",
                 "..\\common\\common\\state\\ChainedActionState.cpp",0x40);
  }
  uVar6 = StateMachineState_getGame();
  FUN_01301840(pvVar4,uVar6);
  if (param_1[0x50] != 8) {
    FUN_012f5a60("mTypeID == kValueDataListTypeID",
                 "c:\\dev\\p4\\FreeRealms\\Main\\Code\\External\\TradingCardsClient\\common\\common\\all/ValueData.h"
                 ,0x14d);
    if (param_1[0x50] != 8) {
      iVar3 = 0;
      goto LAB_0147b326;
    }
  }
  iVar3 = param_1[0x51];
LAB_0147b326:
  FUN_012fffa0(iVar3);
  uVar1 = param_1[0x40];
  if ((uint)param_1[0x41] < uVar1) {
    FUN_00d83c2d();
  }
  param_1[0x43] = (int)(param_1 + 0x3f);
  param_1[0x44] = uVar1;
  cVar2 = PointerVector_iteratorNotAtEnd(0x24);
  if (cVar2 != '\0') {
    cVar2 = ReturnValueMap_hasBooleanKey(0x24);
    if (cVar2 == '\0') {
      FUN_012f5a60("rvm->hasBooleanKey(kForceReturn)",
                   "..\\common\\common\\state\\ChainedActionState.cpp",0x47);
    }
    uVar6 = ReturnValueMap_getBoolean(0x24);
    EvaluationEnvironment_setForceReturn(uVar6);
  }
  StateMachine_destroyReturnValueMap(this);
  return;
}

