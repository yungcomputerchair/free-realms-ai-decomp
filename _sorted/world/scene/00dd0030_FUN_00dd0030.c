// addr: 0x00dd0030
// name: FUN_00dd0030
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00dd0030(int param_1,byte param_2)

{
  uint *puVar1;
  uint uVar2;
  
                    /* Sets or clears global per-object flag bit 0x20000000 unless locked by bit
                       0x08000000, then refreshes attachment/list state. Exact property name is
                       unknown. */
  puVar1 = (uint *)(DAT_01bf3f78 + *(int *)(*(int *)(param_1 + 8) + 4) * 4);
  uVar2 = *puVar1;
  if ((((byte)(uVar2 >> 0x1d) & 1) != param_2) && ((uVar2 >> 0x1b & 1) == 0)) {
    *puVar1 = *puVar1 ^ ((uint)param_2 << 0x1d ^ uVar2) & 0x20000000;
    if (*(int *)(*(int *)(param_1 + 8) + 0x10) != 0) {
      FUN_00dca4c0(param_1 + -0x10,*(uint *)(param_1 + 4) >> 6 & 0xffffff01);
    }
    FUN_00dce980();
    if ((*(uint *)(param_1 + 4) & 0x40) != 0) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x20;
    }
  }
  return;
}

