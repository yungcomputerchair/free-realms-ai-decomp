// addr: 0x01468e30
// name: PhaseState_transitionToPhase
// subsystem: common/common/state
// source (binary assert): common/common/state/PhaseState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PhaseState_transitionToPhase(void * this, void * phase) */

void __thiscall PhaseState_transitionToPhase(void *this,void *phase)

{
  code *pcVar1;
  char cVar2;
  char extraout_AL;
  bool bVar3;
  void *local_4;
  
                    /* Validates a candidate phase through virtual/helper checks, stores the
                       resolved phase pointer at offset 0xf4, then invokes another virtual hook with
                       the phase argument. Evidence is PhaseState.cpp and three false assertions
                       around the validation steps. */
  local_4 = this;
  cVar2 = (**(code **)(*(int *)this + 0x10))(phase,&local_4);
  if (cVar2 == '\0') {
    FUN_012f5a60("false","..\\common\\common\\state\\PhaseState.cpp",0x6d);
  }
  StateMachineState_deserialize(this,phase);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\common\\state\\PhaseState.cpp",0x70);
  }
  bVar3 = Deserializer_readInteger(phase,(int *)&local_4);
  if (!bVar3) {
    FUN_012f5a60("false","..\\common\\common\\state\\PhaseState.cpp",0x73);
  }
  pcVar1 = *(code **)(*(int *)this + 0x14);
  *(void **)((int)this + 0xf4) = local_4;
  (*pcVar1)(phase);
  return;
}

