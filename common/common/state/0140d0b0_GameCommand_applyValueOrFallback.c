// addr: 0x0140d0b0
// name: GameCommand_applyValueOrFallback
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_applyValueOrFallback(void * this, void * valueData) */

void __thiscall GameCommand_applyValueOrFallback(void *this,void *valueData)

{
                    /* If the ValueData-like argument has type 2, dispatches this object's virtual
                       slot 0x1c0; otherwise falls back to a helper. Exact command class and value
                       semantics are unknown. */
  if (*(int *)((int)valueData + 4) == 2) {
                    /* WARNING: Could not recover jumptable at 0x0140d0c9. Too many branches */
                    /* WARNING: Treating indirect jump as call */
    (**(code **)(*(int *)this + 0x1c0))();
    return;
  }
  Card_hasKeywordValueData(this,valueData);
  return;
}

