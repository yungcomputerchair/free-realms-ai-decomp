// addr: 0x0057c83d
// name: FUN_0057c83d
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


byte __thiscall FUN_0057c83d(int param_1,int *param_2)

{
  byte bVar1;
  byte bVar2;
  byte bVar3;
  int local_18;
  int local_14;
  int local_10;
  int local_c;
  int local_8;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_10 = param_2[2];
  local_18 = *param_2;
  local_14 = param_2[1];
  local_c = param_2[3];
  local_8 = local_18;
  if (0 < *(int *)(param_1 + 0x7c)) {
    local_8 = local_18 + *(int *)(param_1 + 0xc);
  }
  if (0 < *(int *)(param_1 + 0x80)) {
    local_14 = local_14 + *(int *)(param_1 + 0x10);
    local_c = local_c - *(int *)(param_1 + 0x18);
  }
  bVar1 = FUN_0057c129(param_1,&local_8,&local_18);
  if (0 < *(int *)(param_1 + 0x7c)) {
    local_8 = local_8 + *(int *)(param_1 + 0x14);
  }
  local_18 = *param_2;
  local_10 = param_2[2];
  local_8 = local_8 + *(int *)(param_1 + 0x94);
  local_14 = param_2[1];
  local_c = param_2[3];
  if (0 < *(int *)(param_1 + 0x84)) {
    local_8 = local_8 + *(int *)(param_1 + 0x2c);
  }
  if (0 < *(int *)(param_1 + 0x88)) {
    local_14 = local_14 + *(int *)(param_1 + 0x30);
    local_c = local_c - *(int *)(param_1 + 0x38);
  }
  bVar2 = FUN_0057c129(param_1 + 0x20,&local_8,&local_18);
  if (0 < *(int *)(param_1 + 0x84)) {
    local_8 = local_8 + *(int *)(param_1 + 0x34);
  }
  local_18 = *param_2;
  local_10 = param_2[2];
  local_8 = local_8 + *(int *)(param_1 + 0x98);
  local_14 = param_2[1];
  local_c = param_2[3];
  if (0 < *(int *)(param_1 + 0x8c)) {
    local_8 = local_8 + *(int *)(param_1 + 0x4c);
  }
  if (0 < *(int *)(param_1 + 0x90)) {
    local_14 = local_14 + *(int *)(param_1 + 0x50);
    local_c = local_c - *(int *)(param_1 + 0x58);
  }
  bVar3 = FUN_0057c129(param_1 + 0x40,&local_8,&local_18);
  return bVar1 | bVar2 | bVar3;
}

