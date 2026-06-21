// addr: 0x009e0d70
// name: FUN_009e0d70
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_009e0d70(undefined4 *param_1,void *param_2)

{
  undefined4 *puVar1;
  
                    /* Deserializes an unknown effect/appearance-like record with two 32-bit fields,
                       a 64-bit field, two more dwords, and a Vec4. Caller is unnamed, so class
                       identity is not safe. */
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
  puVar1 = *(undefined4 **)((int)param_2 + 8);
  if (*(undefined4 **)((int)param_2 + 0xc) < puVar1 + 2) {
    param_1[6] = 0;
    param_1[7] = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
  }
  else {
    param_1[6] = *puVar1;
    param_1[7] = puVar1[1];
    *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 8;
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
    param_1[3] = 0;
    *(undefined1 *)((int)param_2 + 0x10) = 1;
    *(undefined4 *)((int)param_2 + 8) = *(undefined4 *)((int)param_2 + 0xc);
    Stream_ReadVec4(param_2,(float *)(param_1 + 8));
    return;
  }
  param_1[3] = **(undefined4 **)((int)param_2 + 8);
  *(int *)((int)param_2 + 8) = *(int *)((int)param_2 + 8) + 4;
  Stream_ReadVec4(param_2,(float *)(param_1 + 8));
  return;
}

