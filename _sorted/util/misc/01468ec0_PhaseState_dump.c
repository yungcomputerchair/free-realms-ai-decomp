// addr: 0x01468ec0
// name: PhaseState_dump
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall PhaseState_dump(int *param_1,void *param_2)

{
                    /* Dumps/logs PhaseState information with explicit Starting PhaseState, State:,
                       and Ending PhaseState strings. */
  (**(code **)(*param_1 + 8))(param_2);
  DebugStream_writeCString(param_2,"Starting PhaseState\n");
  StateMachineState_dump(param_1,param_2);
  DebugStream_writeCString(param_2,"State: ");
  Serializer_appendInteger(param_2,param_1[0x3d]);
  DebugStream_writeCString(param_2,"Ending PhaseState\n");
  (**(code **)(*param_1 + 0xc))(param_2);
  return;
}

