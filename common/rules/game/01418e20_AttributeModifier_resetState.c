// addr: 0x01418e20
// name: AttributeModifier_resetState
// subsystem: common/rules/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall AttributeModifier_resetState(int param_1)

{
                    /* Clears two bytes at offsets 0x68/0x69 and sets field 0x64 to -1, resetting
                       modifier bookkeeping. Evidence: called from modifier removal and
                       AttributeModifier_disableOnTarget. */
  *(undefined1 *)(param_1 + 0x69) = 0;
  *(undefined1 *)(param_1 + 0x68) = 0;
  *(undefined4 *)(param_1 + 100) = 0xffffffff;
  return;
}

