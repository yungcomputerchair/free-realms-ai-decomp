// addr: 0x007c83b0
// name: RandomPlayListIterator_rebuildWeights
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall RandomPlayListIterator_rebuildWeights(int param_1)

{
  float *pfVar1;
  float *local_4;
  
                    /* Resets total/current state and iterates playlist entries, summing entry
                       weights/durations while adding each entry into the iterator list. */
  *(undefined4 *)(param_1 + 0xc) = 0;
  *(undefined4 *)(param_1 + 0x20) = 0;
  if (*(int *)(param_1 + 8) != 0) {
    for (pfVar1 = *(float **)(*(int *)(param_1 + 8) + 0xc); pfVar1 != (float *)0x0;
        pfVar1 = (float *)pfVar1[6]) {
      *(float *)(param_1 + 0xc) = *pfVar1 + *(float *)(param_1 + 0xc);
      local_4 = pfVar1;
      FUN_007c8140(&local_4);
    }
  }
  return;
}

