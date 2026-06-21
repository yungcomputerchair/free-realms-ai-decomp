// addr: 0x00dcaa50
// name: FUN_00dcaa50
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __thiscall FUN_00dcaa50(int *param_1,uint *param_2)

{
  uint uVar1;
  uint uVar2;
  
                    /* Tests membership of a uint key in a custom hash set/table using a mixed hash
                       and linked indices, returning a boolean in the low byte. No class evidence,
                       so left unnamed. */
  uVar1 = *param_2;
  uVar2 = *(uint *)(param_1[1] +
                   ((uVar1 >> 5) + (uVar1 >> 10) + uVar1 + (uVar1 >> 0x14) & *param_1 - 1U) * 4);
  if (uVar2 != 0xffffffff) {
    do {
      if (*(uint *)(param_1[2] + 4 + uVar2 * 8) == uVar1) {
        return CONCAT31((int3)(uVar2 >> 8),1);
      }
      uVar2 = *(uint *)(param_1[2] + uVar2 * 8);
    } while (uVar2 != 0xffffffff);
  }
  return uVar2 & 0xffffff00;
}

