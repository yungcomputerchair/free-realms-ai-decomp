// addr: 0x0145cd30
// name: StateMachineState_isInputAllowedForMode
// subsystem: common/common/state
// source (binary assert): common/common/state/StateMachineState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool StateMachineState_isInputAllowedForMode(void * this, int mode_) */

bool __thiscall StateMachineState_isInputAllowedForMode(void *this,int mode_)

{
  bool bVar1;
  char cVar2;
  void *this_00;
  int *piVar3;
  
                    /* Checks machine/game state and returns true only when an additional machine
                       virtual test passes and the supplied mode equals 2. Evidence is
                       StateMachineState.cpp mMachine assertions; exact predicate name is inferred.
                        */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x4c);
  }
  this_00 = (void *)get_field_4(*(void **)((int)this + 8));
  bVar1 = Game_getFlag_14d(this_00);
  if (bVar1) {
    if (*(int *)((int)this + 8) == 0) {
      FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x4c);
    }
    piVar3 = (int *)get_field_4(*(void **)((int)this + 8));
    cVar2 = (**(code **)(*piVar3 + 0x1a0))();
    if (cVar2 != '\0') {
      return mode_ == 2;
    }
  }
  return false;
}

