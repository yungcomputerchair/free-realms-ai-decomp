// addr: 0x00dcf0e0
// name: FUN_00dcf0e0
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00dcf0e0(int param_1,byte param_2)

{
                    /* Sets or clears flag bit 0x80 on an object and then calls an update helper to
                       propagate the change. Exact flag meaning is unknown. */
  *(uint *)(param_1 + 4) =
       *(uint *)(param_1 + 4) ^ ((uint)param_2 << 7 ^ *(uint *)(param_1 + 4)) & 0x80;
  FUN_00dcf070();
  return;
}

