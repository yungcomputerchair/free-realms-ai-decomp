// addr: 0x00963d80
// name: FUN_00963d80
// subsystem: common/client/effects
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00963d80(int param_1,char param_2)

{
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  if (param_2 != '\0') {
    *(byte *)(param_1 + 0x140) = *(byte *)(param_1 + 0x140) | 1;
    return;
  }
  *(byte *)(param_1 + 0x140) = *(byte *)(param_1 + 0x140) & 0xfe;
  return;
}

