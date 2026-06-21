// addr: 0x013efc60
// name: StateMachine_processCurrentTurn
// subsystem: common/common/state
// source (binary assert): common/common/state/StateMachine.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StateMachine_processCurrentTurn(void * this) */

void __fastcall StateMachine_processCurrentTurn(void *this)

{
  void *pvVar1;
  int *piVar2;
  
                    /* Requires mGame and mGame->getCurrentTurn(), then invokes the current turn
                       object's vtable slot 0x50. Evidence is explicit StateMachine.cpp assertions
                       for mGame and getCurrentTurn. */
  if (*(int *)((int)this + 4) == 0) {
    FUN_012f5a60("mGame","..\\common\\common\\state\\StateMachine.cpp",0x19f);
  }
  pvVar1 = Game_getCurrentTurn(*(void **)((int)this + 4));
  if (pvVar1 == (void *)0x0) {
    FUN_012f5a60("mGame->getCurrentTurn()","..\\common\\common\\state\\StateMachine.cpp",0x1a0);
  }
  piVar2 = Game_getCurrentTurn(*(void **)((int)this + 4));
                    /* WARNING: Could not recover jumptable at 0x013efcb3. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(*piVar2 + 0x50))();
  return;
}

