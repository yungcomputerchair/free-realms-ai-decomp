// addr: 0x0145d830
// name: StateMachineState_scalarDtor
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * __thiscall StateMachineState_scalarDtor(void *param_1,byte param_2)

{
                    /* Scalar deleting destructor for StateMachineState; calls
                       StateMachineState_dtor and frees this when requested. */
  StateMachineState_dtor();
  if ((param_2 & 1) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(param_1);
  }
  return param_1;
}

