// addr: 0x013f3b20
// name: StateMachine_processStateResult
// subsystem: common/common/state
// source (binary assert): common/common/state/StateMachine.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int StateMachine_processStateResult(void * this, int stateResult_) */

int __thiscall StateMachine_processStateResult(void *this,int stateResult_)

{
  bool bVar1;
  void *pvVar2;
  int *piVar3;
  undefined3 extraout_var;
  int iVar4;
  uint extraout_EAX;
  uint extraout_EAX_00;
  
  while( true ) {
    while (stateResult_ == 1) {
      stateResult_ = StateMachine_popState(this);
    }
    if (stateResult_ != 3) break;
    StateMachine_popState(this);
    FUN_0135f0a0();
    if (*(int *)((int)this + 4) == 0) {
      FUN_012f5a60("mGame","..\\common\\common\\state\\StateMachine.cpp",0x19f);
    }
    pvVar2 = Game_getCurrentTurn(*(void **)((int)this + 4));
    if (pvVar2 == (void *)0x0) {
      FUN_012f5a60("mGame->getCurrentTurn()","..\\common\\common\\state\\StateMachine.cpp",0x1a0);
    }
    piVar3 = Game_getCurrentTurn(*(void **)((int)this + 4));
    stateResult_ = (**(code **)(*piVar3 + 0x50))();
  }
  FUN_0135f0a0();
  iVar4 = *(int *)((int)this + 0xc);
  if ((iVar4 == 0) || (*(int *)((int)this + 0x10) - iVar4 >> 2 == 0)) {
    bVar1 = unknown_getGameGuardFlag(*(void **)((int)this + 4));
    iVar4 = CONCAT31(extraout_var,bVar1);
    if (!bVar1) {
      iVar4 = FUN_012f5dc0("popped off with nothing on stack!");
    }
  }
  if (stateResult_ == 0) {
    Game_logGeneral(*(void **)((int)this + 4),"state returned invalid %d",0);
    return extraout_EAX & 0xffffff00;
  }
  if (stateResult_ == 2) {
    return CONCAT31((int3)((uint)iVar4 >> 8),1);
  }
  Game_logGeneral(*(void **)((int)this + 4),"returned invalid %d",stateResult_);
  return extraout_EAX_00 & 0xffffff00;
}

