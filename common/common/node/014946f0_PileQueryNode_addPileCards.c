// addr: 0x014946f0
// name: PileQueryNode_addPileCards
// subsystem: common/common/node
// source (binary assert): common/common/node/PileQueryNode.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PileQueryNode_addPileCards(void * this, void * resultList, void *
   environment) */

bool __thiscall PileQueryNode_addPileCards(void *this,void *resultList,void *environment)

{
  void *pvVar1;
  int *piVar2;
  int playerId_;
  undefined4 unaff_EBX;
  
                    /* Locates the relevant player's pile using origin/current player context and
                       appends matching pile cards to the result list. */
  if (this == (void *)0xfffffff0) {
    FUN_00d83c2d();
  }
  pvVar1 = EvaluationEnvironment_getMember14(environment);
  if (pvVar1 == (void *)0x0) {
    pvVar1 = EvaluationEnvironment_getOriginCard(environment);
    if (pvVar1 == (void *)0x0) {
      FUN_012f5a60("environment->getOriginCard()","..\\common\\common\\node\\PileQueryNode.cpp",
                   0x140);
    }
    piVar2 = EvaluationEnvironment_getOriginCard(environment);
    playerId_ = (**(code **)(*piVar2 + 0x28))();
    pvVar1 = EvaluationEnvironment_getGame(environment);
    pvVar1 = PlayArea_findPlayerElementById(pvVar1,playerId_);
    if (pvVar1 == (void *)0x0) {
      FUN_012f5a60("player","..\\common\\common\\node\\PileQueryNode.cpp",0x142);
    }
    piVar2 = (int *)PlayElement_getGame();
  }
  else {
    EvaluationEnvironment_getMember14(environment);
    piVar2 = (int *)PlayElement_getGame();
  }
  piVar2 = (int *)(**(code **)(*piVar2 + 0x4c))(*(undefined4 *)((int)this + 0x1c),environment);
  if (piVar2 != (int *)0x0) {
    (**(code **)(*piVar2 + 0x34))(unaff_EBX);
  }
  return true;
}

