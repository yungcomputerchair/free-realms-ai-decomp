// addr: 0x0144bcb0
// name: CWStateMachine_deserialize
// subsystem: common/rules/state
// source (binary assert): common/rules/state/cwstatemachine.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall CWStateMachine_deserialize(int *param_1,void *param_2)

{
  void *buffer;
  char cVar1;
  char extraout_AL;
  
                    /* Deserializer entry for the card-war state machine: opens a deserializer
                       context, calls StateMachine_deserialize, asserts success, then closes the
                       context. Evidence is cwstatemachine.cpp asserts and direct call to
                       StateMachine_deserialize. */
  buffer = param_2;
  cVar1 = (**(code **)(*param_1 + 0x10))(param_2,&param_2);
  if (cVar1 == '\0') {
    FUN_012f5a60("false","..\\common\\rules\\state\\cwstatemachine.cpp",0x91);
  }
  StateMachine_deserialize(param_1,buffer);
  if (extraout_AL == '\0') {
    FUN_012f5a60("false","..\\common\\rules\\state\\cwstatemachine.cpp",0x94);
  }
  (**(code **)(*param_1 + 0x14))(buffer);
  return;
}

