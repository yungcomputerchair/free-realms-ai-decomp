// addr: 0x01361ae0
// name: FUN_01361ae0
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_01361ae0(undefined4 *param_1)

{
                    /* Initializes a small match serialization helper structure by clearing several
                       pointer/count fields before CWGame dump serialization uses it. The exact
                       class is unclear from this isolated zeroing helper. */
  *param_1 = 0;
  param_1[2] = 0;
  param_1[3] = 0;
  param_1[4] = 0;
  return;
}

