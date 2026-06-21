// addr: 0x00ddf720
// name: FUN_00ddf720
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

undefined1 FUN_00ddf720(float *param_1)

{
  float fVar1;
  
                    /* Checks whether the three column vectors of a 3x4 matrix have nearly equal
                       squared lengths, returning true when the scale is uniform within a global
                       epsilon. */
  fVar1 = *param_1 * *param_1 + param_1[4] * param_1[4] + param_1[8] * param_1[8];
  if ((ABS(fVar1 - (param_1[1] * param_1[1] + param_1[5] * param_1[5] + param_1[9] * param_1[9])) <=
       fVar1 * _DAT_017ebf0c) &&
     (ABS(fVar1 - (param_1[2] * param_1[2] + param_1[6] * param_1[6] + param_1[10] * param_1[10]))
      <= fVar1 * _DAT_017ebf0c)) {
    return 1;
  }
  return 0;
}

