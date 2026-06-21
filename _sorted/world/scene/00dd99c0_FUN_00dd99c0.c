// addr: 0x00dd99c0
// name: FUN_00dd99c0
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00dd99c0(int param_1,byte param_2)

{
                    /* Sets or clears object flag bit 0x40000 and refreshes dependent
                       visibility/state flags. Exact flag meaning is unknown. */
  *(uint *)(param_1 + 0xc) =
       *(uint *)(param_1 + 0xc) ^ ((uint)param_2 << 0x12 ^ *(uint *)(param_1 + 0xc)) & 0x40000;
  FUN_00df4890();
  return;
}

