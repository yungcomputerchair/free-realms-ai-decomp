// addr: 0x0145c7a0
// name: StateMachineState_onDragStoppedInvalid
// subsystem: common/common/state
// source (binary assert): common/common/state/StateMachineState.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int StateMachineState_onDragStoppedInvalid(void * this) */

int __fastcall StateMachineState_onDragStoppedInvalid(void *this)

{
  uint uVar1;
  char *pcVar2;
  
                    /* Default StateMachineState handler for drag-stop in an invalid state:
                       validates mMachine, logs 'Got drag stopped, no need for it.', and returns 0.
                       It does not forward to StateMachine dispatch. */
  if (*(int *)((int)this + 8) == 0) {
    FUN_012f5a60("mMachine","..\\common\\common\\state\\StateMachineState.cpp",0x4c);
  }
  pcVar2 = "Got drag stopped, no need for it.";
  uVar1 = get_field_4(*(void **)((int)this + 8));
  Game_logGeneralFormatted(uVar1,pcVar2);
  return 0;
}

