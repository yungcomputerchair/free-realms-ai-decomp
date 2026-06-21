// addr: 0x010b2df0
// name: FUN_010b2df0
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int __thiscall FUN_010b2df0(int param_1,uint param_2)

{
  uint *puVar1;
  uint uVar2;
  
                    /* Looks up an entry by 32-bit id in a 32-bucket hash table and returns the
                       corresponding fixed-size record from paged storage, or null if absent. Exact
                       class is unknown. */
  puVar1 = *(uint **)(param_1 + 0x40 + (param_2 & 0x1f) * 4);
  if (puVar1 != (uint *)0x0) {
    while (*puVar1 != param_2) {
      puVar1 = (uint *)puVar1[2];
      if (puVar1 == (uint *)0x0) {
        return 0;
      }
    }
    if (puVar1 + 1 != (uint *)0x0) {
      uVar2 = puVar1[1] + *(int *)(param_1 + 0x2c);
      return (uVar2 & 0xf) * 0x4c + *(int *)(*(int *)(param_1 + 8) + (uVar2 >> 4) * 4);
    }
  }
  return 0;
}

