// addr: 0x01089ab0
// name: FUN_01089ab0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_01089ab0(int param_1,undefined4 *param_2,undefined4 *param_3)

{
                    /* Returns the cached selected id and priority/timestamp, recomputing them first
                       if the cache-valid flag is clear. No class evidence. */
  if (*(char *)(param_1 + 0x134) == '\0') {
    FUN_010899d0();
  }
  *param_2 = *(undefined4 *)(param_1 + 0x138);
  *param_3 = *(undefined4 *)(param_1 + 0x13c);
  return;
}

