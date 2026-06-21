// addr: 0x00a9ef10
// name: FUN_00a9ef10
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00a9ef10(int param_1,void *param_2)

{
  undefined4 *puVar1;
  
                    /* Deserializes a large unknown movement/fixture-like record with numeric
                       fields, a nested list, multiple Vec4 values, bools, and NaN-checked floats.
                       No class evidence is present. */
  FUN_00a9cb50(param_2);
  if (*(undefined4 **)((int)param_2 + 0xc) < *(undefined4 **)((int)param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 0x10) = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0x10) = **(undefined4 **)((int)param_2 + 8);
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 4;
  }
  if (*(undefined4 **)((int)param_2 + 0xc) < *(undefined4 **)((int)param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 0x14) = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0x14) = **(undefined4 **)((int)param_2 + 8);
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 4;
  }
  puVar1 = *(undefined4 **)((int)param_2 + 8);
  if (*(undefined4 **)((int)param_2 + 0xc) < puVar1 + 2) {
    *(undefined4 *)(param_1 + 0x18) = 0;
    *(undefined4 *)(param_1 + 0x1c) = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0x18) = *puVar1;
    *(undefined4 *)(param_1 + 0x1c) = puVar1[1];
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 8;
  }
  if (*(char **)((int)param_2 + 0xc) < *(char **)((int)param_2 + 8) + 1) {
    *(undefined1 *)(param_1 + 0x2c) = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    *(bool *)(param_1 + 0x2c) = **(char **)((int)param_2 + 8) != '\0';
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 1;
  }
  if (*(undefined4 **)((int)param_2 + 0xc) < *(undefined4 **)((int)param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 0x30) = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0x30) = **(undefined4 **)((int)param_2 + 8);
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 4;
    if (NAN(*(float *)(param_1 + 0x30))) {
      *(undefined1 *)((int)param_2 + 0x11) = 1;
    }
  }
  FUN_00a9d760(param_2,param_1 + 0x20);
  Stream_ReadVec4(param_2,(float *)(param_1 + 0x40));
  Stream_ReadVec4(param_2,(float *)(param_1 + 0x50));
  if (*(char **)((int)param_2 + 0xc) < *(char **)((int)param_2 + 8) + 1) {
    *(undefined1 *)(param_1 + 0x60) = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    *(bool *)(param_1 + 0x60) = **(char **)((int)param_2 + 8) != '\0';
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 1;
  }
  Stream_ReadVec4(param_2,(float *)(param_1 + 0x70));
  if (*(undefined4 **)((int)param_2 + 0xc) < *(undefined4 **)((int)param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 0x80) = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0x80) = **(undefined4 **)((int)param_2 + 8);
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 4;
    if (NAN(*(float *)(param_1 + 0x80))) {
      *(undefined1 *)((int)param_2 + 0x11) = 1;
    }
  }
  if (*(char **)((int)param_2 + 0xc) < *(char **)((int)param_2 + 8) + 1) {
    *(undefined1 *)(param_1 + 0x84) = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    *(bool *)(param_1 + 0x84) = **(char **)((int)param_2 + 8) != '\0';
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 1;
  }
  if (*(char **)((int)param_2 + 0xc) < *(char **)((int)param_2 + 8) + 1) {
    *(undefined1 *)(param_1 + 0x85) = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    *(bool *)(param_1 + 0x85) = **(char **)((int)param_2 + 8) != '\0';
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 1;
  }
  if (*(char **)((int)param_2 + 0xc) < *(char **)((int)param_2 + 8) + 1) {
    *(undefined1 *)(param_1 + 0x86) = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    *(bool *)(param_1 + 0x86) = **(char **)((int)param_2 + 8) != '\0';
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 1;
  }
  if (*(undefined4 **)((int)param_2 + 0xc) < *(undefined4 **)((int)param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 0x88) = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    *(undefined4 *)(param_1 + 0x88) = **(undefined4 **)((int)param_2 + 8);
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 4;
    if (NAN(*(float *)(param_1 + 0x88))) {
      *(undefined1 *)((int)param_2 + 0x11) = 1;
    }
  }
  if (*(undefined4 **)((int)param_2 + 0xc) < *(undefined4 **)((int)param_2 + 8) + 1) {
    *(undefined4 *)(param_1 + 0x8c) = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
    return;
  }
  *(undefined4 *)(param_1 + 0x8c) = **(undefined4 **)((int)param_2 + 8);
  *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 4;
  return;
}

