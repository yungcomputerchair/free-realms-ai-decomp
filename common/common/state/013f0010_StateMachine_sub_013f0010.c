// addr: 0x013f0010
// name: StateMachine_sub_013f0010
// subsystem: common/common/state
// source (binary assert): common/common/state/StateMachine.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int StateMachine_sub_013f0010(void * this) */

int __fastcall StateMachine_sub_013f0010(void *this)

{
  bool bVar1;
  uint3 extraout_var;
  int iVar2;
  
                    /* If a global/game guard is active it returns false; otherwise asserts
                       mCurrentState and forwards to current-state vtable slot 0x10c. The exact
                       StateMachine method is not named. */
  bVar1 = unknown_getGameGuardFlag(*(void **)((int)this + 4));
  if (bVar1) {
    return (uint)extraout_var << 8;
  }
  if (*(int *)((int)this + 0x18) == 0) {
    FUN_012f5a60("mCurrentState","..\\common\\common\\state\\StateMachine.cpp",0x349);
  }
                    /* WARNING: Could not recover jumptable at 0x013f004c. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  iVar2 = (**(code **)(**(int **)((int)this + 0x18) + 0x10c))();
  return iVar2;
}

