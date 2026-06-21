// addr: 0x013ef9e0
// name: StateMachine_beginCardPlayed
// subsystem: common/common/game
// source (binary assert): common/common/state/StateMachine.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: undefined4 StateMachine_beginCardPlayed(void * this, undefined4) */

int __fastcall StateMachine_beginCardPlayed(void *this,undefined4 param_2)

{
  bool bVar1;
  uint3 extraout_var;
  undefined4 uVar2;
  
                    /* Checks a global guard, then forwards Game_beginCardPlayed to the current
                       StateMachineState after asserting mCurrentState. Evidence is StateMachine.cpp
                       and caller Game_beginCardPlayed. */
  bVar1 = unknown_getGameGuardFlag(*(void **)((int)this + 4));
  if (bVar1) {
    return (uint)extraout_var << 8;
  }
  if (*(int *)((int)this + 0x18) == 0) {
    FUN_012f5a60("mCurrentState","..\\common\\common\\state\\StateMachine.cpp",0x14b);
  }
                    /* WARNING: Could not recover jumptable at 0x013efa1b. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  uVar2 = (**(code **)(**(int **)((int)this + 0x18) + 0x5c))();
  return uVar2;
}

