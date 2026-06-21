// addr: 0x013efff0
// name: StateMachine_destroyReturnValueMap
// subsystem: common/rules/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void StateMachine_destroyReturnValueMap(undefined4 *param_1)

{
                    /* Null-safe virtual destructor/release helper used after consuming return value
                       maps from the state machine. Evidence is ubiquitous calls immediately after
                       FUN_013f37e0 return-map pop in enter/restore methods. */
  if (param_1 != (undefined4 *)0x0) {
                    /* WARNING: Could not recover jumptable at 0x013f0004. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)*param_1)();
    return;
  }
  return;
}

