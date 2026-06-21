// addr: 0x00df5550
// name: FUN_00df5550
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00df5550(int param_1,byte param_2)

{
                    /* Sets or clears flag bit 0x80 on an object and then calls a propagation/update
                       helper. Exact flag meaning is unknown. */
  *(uint *)(param_1 + 0xc) =
       *(uint *)(param_1 + 0xc) ^ ((uint)param_2 << 7 ^ *(uint *)(param_1 + 0xc)) & 0x80;
  FUN_00df54f0();
  return;
}

