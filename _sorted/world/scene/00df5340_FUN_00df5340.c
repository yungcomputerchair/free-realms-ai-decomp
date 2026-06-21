// addr: 0x00df5340
// name: FUN_00df5340
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00df5340(int param_1,byte param_2)

{
  uint uVar1;
  
                    /* Sets or clears object flag bit 0x80000 unless locked by bit 0x400000,
                       notifies an owner when present, and refreshes dependent flags. Exact property
                       name is unknown. */
  uVar1 = *(uint *)(param_1 + 0xc);
  if ((((byte)(uVar1 >> 0x13) & 1) != param_2) && ((uVar1 >> 0x16 & 1) == 0)) {
    uVar1 = ((uint)param_2 << 0x13 ^ uVar1) & 0x80000 ^ uVar1;
    *(uint *)(param_1 + 0xc) = uVar1;
    if (*(int *)(param_1 + 0x9c) != 0) {
      FUN_00deea00(param_1 + -0x10,uVar1 >> 6 & 0xffffff01);
    }
    FUN_00df4cf0();
    if ((*(uint *)(param_1 + 0xc) & 0x40) != 0) {
      *(uint *)(param_1 + 0xc) = *(uint *)(param_1 + 0xc) | 0x20;
    }
  }
  return;
}

