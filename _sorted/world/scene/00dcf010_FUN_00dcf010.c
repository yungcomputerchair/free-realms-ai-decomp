// addr: 0x00dcf010
// name: FUN_00dcf010
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00dcf010(int param_1,byte param_2)

{
  uint uVar1;
  
                    /* Sets or clears object flag bit 0x40, conditionally updates attachment state,
                       relinks the object in its active list, and propagates dirty flags. Exact flag
                       meaning is unknown. */
  uVar1 = *(uint *)(param_1 + 4);
  if (param_2 != ((byte)(uVar1 >> 6) & 1)) {
    uVar1 = ((uint)param_2 << 6 ^ uVar1) & 0x40 ^ uVar1;
    *(uint *)(param_1 + 4) = uVar1;
    if (*(int *)(*(int *)(param_1 + 8) + 0x10) != 0) {
      FUN_00dca4c0(param_1 + -0x10,uVar1 >> 6 & 0xffffff01);
    }
    FUN_00dce980();
    if ((*(uint *)(param_1 + 4) & 0x40) != 0) {
      *(uint *)(param_1 + 4) = *(uint *)(param_1 + 4) | 0x20;
    }
  }
  return;
}

