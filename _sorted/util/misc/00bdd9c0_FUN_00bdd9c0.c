// addr: 0x00bdd9c0
// name: FUN_00bdd9c0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00bdd9c0(undefined4 *param_1,int param_2)

{
                    /* Deserializes a progressive quest slot-like structure from a bounded buffer,
                       reading several dwords and booleans while marking the stream error flag on
                       underrun. No direct class evidence, so left unnamed. */
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
  if (*(char **)(param_2 + 0xc) < *(char **)(param_2 + 8) + 1) {
    *(undefined1 *)(param_1 + 3) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    *(bool *)(param_1 + 3) = **(char **)(param_2 + 8) != '\0';
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  if (*(char **)(param_2 + 0xc) < *(char **)(param_2 + 8) + 1) {
    *(undefined1 *)((int)param_1 + 0xd) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    *(bool *)((int)param_1 + 0xd) = **(char **)(param_2 + 8) != '\0';
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  if (*(char **)(param_2 + 0xc) < *(char **)(param_2 + 8) + 1) {
    *(undefined1 *)((int)param_1 + 0xe) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    *(bool *)((int)param_1 + 0xe) = **(char **)(param_2 + 8) != '\0';
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
  }
  if (*(char **)(param_2 + 0xc) < *(char **)(param_2 + 8) + 1) {
    *(undefined1 *)((int)param_1 + 0xf) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    *(bool *)((int)param_1 + 0xf) = **(char **)(param_2 + 8) != '\0';
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
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
  if (*(char **)(param_2 + 0xc) < *(char **)(param_2 + 8) + 1) {
    *(undefined1 *)(param_1 + 6) = 0;
    *(undefined1 *)(param_2 + 0x10) = 1;
    *(undefined4 *)(param_2 + 8) = *(undefined4 *)(param_2 + 0xc);
  }
  else {
    *(bool *)(param_1 + 6) = **(char **)(param_2 + 8) != '\0';
    *(int *)(param_2 + 8) = *(int *)(param_2 + 8) + 1;
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

