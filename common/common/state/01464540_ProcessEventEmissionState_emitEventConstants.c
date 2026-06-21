// addr: 0x01464540
// name: ProcessEventEmissionState_emitEventConstants
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void ProcessEventEmissionState_emitEventConstants(void) */

void ProcessEventEmissionState_emitEventConstants(void)

{
  int iVar1;
  int in_ECX;
  
                    /* Emits two event constants 0x28bc and 0x28bd using values from the current
                       context. Exact method name inferred from ProcessEventEmissionState
                       neighborhood. */
  iVar1 = StateMachineState_getGame();
  set_pair_fields_4_8((void *)(in_ECX + 0x54),0x28bc,*(uint *)(iVar1 + 0x20));
  iVar1 = StateMachineState_getGame();
  set_pair_fields_4_8((void *)(in_ECX + 0x70),0x28bd,*(uint *)(iVar1 + 0x20));
  return;
}

