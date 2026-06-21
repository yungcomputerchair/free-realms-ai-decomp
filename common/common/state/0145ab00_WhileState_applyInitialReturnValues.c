// addr: 0x0145ab00
// name: WhileState_applyInitialReturnValues
// subsystem: common/common/rules
// source (binary assert): common/common/state/WhileState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall WhileState_applyInitialReturnValues(int *param_1)

{
  char cVar1;
  void *this;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  undefined4 uVar5;
  int key_;
  int key__00;
  
                    /* Applies initial WhileState return values: validates player/condition
                       ValueData, sets the evaluation target/player, copies expression-tree values,
                       and handles the force-return boolean. */
  this = (void *)StateMachine_popReturnValueMap();
  if (this == (void *)0x0) {
    FUN_012f5a60(&DAT_018e3654,"..\\common\\common\\state\\WhileState.cpp",0x34);
  }
  cVar1 = ReturnValueMap_hasIntegerKey(4);
  if (cVar1 == '\0') {
    FUN_012f5a60("rvm->hasIntegerKey(kPlayerReturn)","..\\common\\common\\state\\WhileState.cpp",
                 0x36);
  }
  iVar2 = ReturnValueMap_getInteger(4);
  pvVar3 = (void *)StateMachineState_getGame();
  pvVar3 = PlayArea_findPlayerElementById(pvVar3,iVar2);
  FUN_013815b0(pvVar3);
  piVar4 = (int *)StateMachineState_getCurrentTurn();
  iVar2 = *piVar4;
  pvVar3 = EvaluationEnvironment_getMember14((void *)param_1[0x3a]);
  (**(code **)(iVar2 + 0x48))(pvVar3);
  (**(code **)(*param_1 + 0x9c))();
  pvVar3 = ReturnValueMap_findValueData(this,key_);
  if ((pvVar3 == (void *)0x0) || (*(int *)((int)pvVar3 + 4) != 5)) {
    FUN_012f5a60("vdl && vdl->isExpressionTreeValue()","..\\common\\common\\state\\WhileState.cpp",
                 0x3c);
  }
  FUN_013010e0(pvVar3);
  pvVar3 = ReturnValueMap_findValueData(this,key__00);
  if ((pvVar3 == (void *)0x0) || (*(int *)((int)pvVar3 + 4) != 5)) {
    FUN_012f5a60("vdl2 && vdl2->isExpressionTreeValue()","..\\common\\common\\state\\WhileState.cpp"
                 ,0x41);
  }
  FUN_013010e0(pvVar3);
  cVar1 = PointerVector_iteratorNotAtEnd(0x24);
  if (cVar1 != '\0') {
    cVar1 = ReturnValueMap_hasBooleanKey(0x24);
    if (cVar1 == '\0') {
      FUN_012f5a60("rvm->hasBooleanKey(kForceReturn)","..\\common\\common\\state\\WhileState.cpp",
                   0x46);
    }
    uVar5 = ReturnValueMap_getBoolean(0x24);
    EvaluationEnvironment_setForceReturn(uVar5);
  }
  StateMachine_destroyReturnValueMap(this);
  return;
}

