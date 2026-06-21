// addr: 0x010135d0
// name: FUN_010135d0
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
FUN_010135d0(undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 *param_4)

{
  undefined4 uVar1;
  int iVar2;
  undefined4 *puVar3;
  undefined4 *puVar4;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  uVar1 = DAT_01cb6070;
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01633fce;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  param_1[1] = DAT_0187d048;
  param_1[4] = 0;
  param_1[5] = 0;
  *param_1 = DAT_01cb6080;
  param_1[3] = uVar1;
  param_1[2] = uVar1;
  FUN_0100fce0(param_3);
  uVar1 = DAT_01cb6084;
  puVar3 = &DAT_0187d1e0;
  puVar4 = param_1 + 0x18;
  for (iVar2 = 0xd; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar4 = *puVar3;
    puVar3 = puVar3 + 1;
    puVar4 = puVar4 + 1;
  }
  param_1[0x18] = DAT_01cb60a0;
  param_1[0x19] = 0x2c;
  puVar3 = param_1 + 0x1a;
  for (iVar2 = 0xb; iVar2 != 0; iVar2 = iVar2 + -1) {
    *puVar3 = *param_4;
    param_4 = param_4 + 1;
    puVar3 = puVar3 + 1;
  }
  FUN_010134b0(param_2,uVar1);
  ExceptionList = local_c;
  return param_1;
}

