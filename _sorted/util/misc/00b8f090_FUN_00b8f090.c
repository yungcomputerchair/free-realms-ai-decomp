// addr: 0x00b8f090
// name: FUN_00b8f090
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00b8f090(undefined4 *param_1,int param_2)

{
                    /* Deserializes a fixed record by repeatedly reading 32-bit fields from a
                       bounded buffer and setting the stream error flag on underrun. No packet/class
                       evidence, so left unnamed. */
  if (*(undefined4 **)(param_2 + 0xc) < *(undefined4 **)(param_2 + 8) + 1) {
    *param_1 = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    *param_1 = **(undefined4 **)(param_2 + 8);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 4;
  }
  if (*(undefined4 **)(param_2 + 0xc) < *(undefined4 **)(param_2 + 8) + 1) {
    param_1[1] = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    param_1[1] = **(undefined4 **)(param_2 + 8);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 4;
  }
  if (*(undefined4 **)(param_2 + 0xc) < *(undefined4 **)(param_2 + 8) + 1) {
    param_1[2] = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    param_1[2] = **(undefined4 **)(param_2 + 8);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 4;
  }
  if (*(undefined4 **)(param_2 + 0xc) < *(undefined4 **)(param_2 + 8) + 1) {
    param_1[3] = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    param_1[3] = **(undefined4 **)(param_2 + 8);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 4;
  }
  if (*(undefined4 **)(param_2 + 0xc) < *(undefined4 **)(param_2 + 8) + 1) {
    param_1[4] = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    param_1[4] = **(undefined4 **)(param_2 + 8);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 4;
  }
  if (*(undefined4 **)(param_2 + 0xc) < *(undefined4 **)(param_2 + 8) + 1) {
    param_1[5] = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    param_1[5] = **(undefined4 **)(param_2 + 8);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 4;
  }
  if (*(undefined4 **)(param_2 + 0xc) < *(undefined4 **)(param_2 + 8) + 1) {
    param_1[6] = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    param_1[6] = **(undefined4 **)(param_2 + 8);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 4;
  }
  if (*(undefined4 **)(param_2 + 0xc) < *(undefined4 **)(param_2 + 8) + 1) {
    param_1[7] = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    param_1[7] = **(undefined4 **)(param_2 + 8);
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 4;
  }
  if (*(undefined4 **)(param_2 + 0xc) < *(undefined4 **)(param_2 + 8) + 1) {
    param_1[8] = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
    return;
  }
  param_1[8] = **(undefined4 **)(param_2 + 8);
  *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 4;
  return;
}

