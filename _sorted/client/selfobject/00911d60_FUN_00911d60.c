// addr: 0x00911d60
// name: FUN_00911d60
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_00911d60(undefined4 *param_1,void *param_2)

{
                    /* Large fixed-field deserializer for an unknown profile/client subrecord: reads
                       many dwords and bools plus two embedded U32-pair collections. Called by
                       higher-level SelfObject/profile parsers but class identity is not evident. */
  if (*(undefined4 **)((int)param_2 + 0xc) < *(undefined4 **)((int)param_2 + 8) + 1) {
    *param_1 = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    *param_1 = **(undefined4 **)((int)param_2 + 8);
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 4;
  }
  if (*(undefined4 **)((int)param_2 + 0xc) < *(undefined4 **)((int)param_2 + 8) + 1) {
    param_1[1] = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    param_1[1] = **(undefined4 **)((int)param_2 + 8);
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 4;
  }
  if (*(undefined4 **)((int)param_2 + 0xc) < *(undefined4 **)((int)param_2 + 8) + 1) {
    param_1[2] = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    param_1[2] = **(undefined4 **)((int)param_2 + 8);
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 4;
  }
  if (*(undefined4 **)((int)param_2 + 0xc) < *(undefined4 **)((int)param_2 + 8) + 1) {
    param_1[4] = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    param_1[4] = **(undefined4 **)((int)param_2 + 8);
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 4;
  }
  if (*(undefined4 **)((int)param_2 + 0xc) < *(undefined4 **)((int)param_2 + 8) + 1) {
    param_1[0xb] = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    param_1[0xb] = **(undefined4 **)((int)param_2 + 8);
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 4;
  }
  if (*(undefined4 **)((int)param_2 + 0xc) < *(undefined4 **)((int)param_2 + 8) + 1) {
    param_1[0xe] = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    param_1[0xe] = **(undefined4 **)((int)param_2 + 8);
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 4;
  }
  if (*(undefined4 **)((int)param_2 + 0xc) < *(undefined4 **)((int)param_2 + 8) + 1) {
    param_1[0xc] = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    param_1[0xc] = **(undefined4 **)((int)param_2 + 8);
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 4;
  }
  if (*(undefined4 **)((int)param_2 + 0xc) < *(undefined4 **)((int)param_2 + 8) + 1) {
    param_1[0xd] = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    param_1[0xd] = **(undefined4 **)((int)param_2 + 8);
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 4;
  }
  if (*(char **)((int)param_2 + 0xc) < *(char **)((int)param_2 + 8) + 1) {
    *(undefined1 *)(param_1 + 0xf) = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    *(bool *)(param_1 + 0xf) = **(char **)((int)param_2 + 8) != '\0';
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 1;
  }
  if (*(undefined4 **)((int)param_2 + 0xc) < *(undefined4 **)((int)param_2 + 8) + 1) {
    param_1[8] = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    param_1[8] = **(undefined4 **)((int)param_2 + 8);
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 4;
  }
  Stream_ReadU32PairCollection(param_2,param_1 + 0x1a);
  if (*(char **)((int)param_2 + 0xc) < *(char **)((int)param_2 + 8) + 1) {
    *(undefined1 *)((int)param_1 + 0x3d) = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    *(bool *)((int)param_1 + 0x3d) = **(char **)((int)param_2 + 8) != '\0';
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 1;
  }
  if (*(undefined4 **)((int)param_2 + 0xc) < *(undefined4 **)((int)param_2 + 8) + 1) {
    param_1[0x10] = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    param_1[0x10] = **(undefined4 **)((int)param_2 + 8);
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 4;
  }
  if (*(undefined4 **)((int)param_2 + 0xc) < *(undefined4 **)((int)param_2 + 8) + 1) {
    param_1[0x11] = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    param_1[0x11] = **(undefined4 **)((int)param_2 + 8);
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 4;
  }
  if (*(char **)((int)param_2 + 0xc) < *(char **)((int)param_2 + 8) + 1) {
    *(undefined1 *)(param_1 + 0x13) = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    *(bool *)(param_1 + 0x13) = **(char **)((int)param_2 + 8) != '\0';
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 1;
  }
  if (*(undefined4 **)((int)param_2 + 0xc) < *(undefined4 **)((int)param_2 + 8) + 1) {
    param_1[0x14] = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    param_1[0x14] = **(undefined4 **)((int)param_2 + 8);
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 4;
  }
  if (*(undefined4 **)((int)param_2 + 0xc) < *(undefined4 **)((int)param_2 + 8) + 1) {
    param_1[5] = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    param_1[5] = **(undefined4 **)((int)param_2 + 8);
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 4;
  }
  if (*(undefined4 **)((int)param_2 + 0xc) < *(undefined4 **)((int)param_2 + 8) + 1) {
    param_1[6] = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    param_1[6] = **(undefined4 **)((int)param_2 + 8);
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 4;
  }
  if (*(undefined4 **)((int)param_2 + 0xc) < *(undefined4 **)((int)param_2 + 8) + 1) {
    param_1[7] = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    param_1[7] = **(undefined4 **)((int)param_2 + 8);
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 4;
  }
  if (*(undefined4 **)((int)param_2 + 0xc) < *(undefined4 **)((int)param_2 + 8) + 1) {
    param_1[9] = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    param_1[9] = **(undefined4 **)((int)param_2 + 8);
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 4;
  }
  if (*(undefined4 **)((int)param_2 + 0xc) < *(undefined4 **)((int)param_2 + 8) + 1) {
    param_1[10] = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    param_1[10] = **(undefined4 **)((int)param_2 + 8);
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 4;
  }
  FUN_008fc960(param_2,param_1 + 0x27);
  if (*(undefined4 **)((int)param_2 + 0xc) < *(undefined4 **)((int)param_2 + 8) + 1) {
    param_1[0x12] = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
    return;
  }
  param_1[0x12] = **(undefined4 **)((int)param_2 + 8);
  *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 4;
  return;
}

