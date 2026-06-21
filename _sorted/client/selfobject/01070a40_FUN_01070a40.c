// addr: 0x01070a40
// name: FUN_01070a40
// subsystem: common/client/selfobject
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall FUN_01070a40(undefined4 *param_1,int param_2)

{
  int iVar1;
  undefined1 uVar2;
  uint uVar3;
  undefined1 *puVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  iVar1 = param_2;
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0163f504;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffe4;
  ExceptionList = &local_c;
  *param_1 = 0;
  param_1[1] = 0;
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(param_2 + 0x24);
  }
  param_1[2] = uVar5;
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(param_2 + 0x30);
  }
  param_1[3] = uVar5;
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(param_2 + 0x28);
  }
  param_1[4] = uVar5;
  if (param_2 == 0) {
    uVar5 = 0;
  }
  else {
    uVar5 = *(undefined4 *)(param_2 + 0x38);
  }
  param_1[5] = uVar5;
  if ((param_2 == 0) || (puVar4 = *(undefined1 **)(param_2 + 0x44), puVar4 == (undefined1 *)0x0)) {
    puVar4 = &DAT_0175b400;
  }
  FUN_0072fe10(puVar4);
  local_4 = 0;
  if (param_2 == 0) {
    puVar4 = &DAT_0175b400;
  }
  else {
    puVar4 = *(undefined1 **)(param_2 + 0xec);
  }
  FUN_0072fe10(puVar4);
  local_4._0_1_ = 1;
  if ((param_2 == 0) || (*(int *)(param_2 + 0x20) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined1 *)(*(int *)(param_2 + 0x20) + 0x14);
  }
  *(undefined1 *)(param_1 + 0x30) = uVar2;
  if ((param_2 == 0) || (*(int *)(param_2 + 0x20) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined1 *)(*(int *)(param_2 + 0x20) + 0x15);
  }
  *(undefined1 *)((int)param_1 + 0xc1) = uVar2;
  if ((param_2 == 0) || (*(int *)(param_2 + 0x20) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined1 *)(*(int *)(param_2 + 0x20) + 0x16);
  }
  *(undefined1 *)((int)param_1 + 0xc2) = uVar2;
  if ((param_2 == 0) || (*(int *)(param_2 + 0x20) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined1 *)(*(int *)(param_2 + 0x20) + 0x17);
  }
  *(undefined1 *)((int)param_1 + 0xc3) = uVar2;
  if ((param_2 == 0) || (*(int *)(param_2 + 0x20) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined1 *)(*(int *)(param_2 + 0x20) + 0x18);
  }
  *(undefined1 *)(param_1 + 0x31) = uVar2;
  if ((param_2 == 0) || (*(int *)(param_2 + 0x20) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined1 *)(*(int *)(param_2 + 0x20) + 0x19);
  }
  *(undefined1 *)((int)param_1 + 0xc5) = uVar2;
  FUN_0105e5e0(uVar3);
  local_4 = CONCAT31(local_4._1_3_,2);
  if (param_2 == 0) {
    param_2 = 0;
  }
  else {
    param_2 = *(undefined4 *)(param_2 + 400);
  }
  uVar5 = 0;
  param_1[0x47] = param_2;
  if (iVar1 == 0) {
    uVar6 = 0;
  }
  else {
    uVar6 = *(undefined4 *)(iVar1 + 0x194);
  }
  param_1[0x48] = uVar6;
  if (iVar1 != 0) {
    uVar5 = *(undefined4 *)(iVar1 + 0x198);
  }
  param_1[0x49] = uVar5;
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x20) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined1 *)(*(int *)(iVar1 + 0x20) + 0x1a);
  }
  *(undefined1 *)(param_1 + 0x4a) = uVar2;
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x20) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined1 *)(*(int *)(iVar1 + 0x20) + 0x1b);
  }
  *(undefined1 *)((int)param_1 + 0x129) = uVar2;
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x20) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined1 *)(*(int *)(iVar1 + 0x20) + 0x1c);
  }
  *(undefined1 *)((int)param_1 + 0x12a) = uVar2;
  if ((iVar1 == 0) || (*(int *)(iVar1 + 0x20) == 0)) {
    uVar2 = 0;
  }
  else {
    uVar2 = *(undefined1 *)(*(int *)(iVar1 + 0x20) + 0x1d);
  }
  *(undefined1 *)((int)param_1 + 299) = uVar2;
  if (iVar1 != 0) {
    FUN_010709d0(iVar1 + 0x13c);
  }
  ExceptionList = local_c;
  return param_1;
}

