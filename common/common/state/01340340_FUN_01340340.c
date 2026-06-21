// addr: 0x01340340
// name: FUN_01340340
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall FUN_01340340(int param_1)

{
                    /* Returns the dword at offset 0x30 from a play/card object. Many game-rule
                       callers use it, but the exact class/field name is not established here. */
  return *(undefined4 *)(param_1 + 0x30);
}

