// addr: 0x00cffc80
// name: FUN_00cffc80
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
FUN_00cffc80(undefined4 *param_1,undefined4 param_2,undefined4 param_3,uint param_4)

{
  int iVar1;
  undefined4 *puVar2;
  
                    /* Initializes a 128-bucket resource/table object, clamps a size parameter to
                       6..64, creates an underlying resource via FUN_006c02a0, and configures it or
                       tears it down on failure. No class evidence, so left unnamed. */
  if (param_4 < 6) {
    param_4 = 6;
  }
  else if (0x40 < param_4) {
    param_4 = 0x40;
  }
  param_1[1] = param_4;
  puVar2 = param_1 + 2;
  for (iVar1 = 0x80; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar2 = 0;
    puVar2 = puVar2 + 1;
  }
  iVar1 = FUN_006c02a0(param_2,param_3,0,param_1);
  if ((iVar1 != 2) && (iVar1 == 0)) {
    iVar1 = FUN_006b9f60(*param_1,param_1[1],param_1[1]);
    if (iVar1 == 0) {
      return param_1;
    }
    FUN_006be300(*param_1);
  }
  *param_1 = 0;
  return param_1;
}

