// addr: 0x012384b0
// name: FUN_012384b0
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_012384b0(int param_1,int *param_2,int param_3)

{
  int iVar1;
  int *piVar2;
  int iVar3;
  int local_10;
  int local_c;
  int local_8;
  undefined4 local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  iVar1 = FUN_01237de0(param_3);
  local_c = iVar1;
  if (param_1 == 0) {
    FUN_00d83c2d();
  }
  local_10 = param_1;
  if (iVar1 != *(int *)(param_1 + 4)) {
    if (*(uint *)(iVar1 + 0x24) < 0x10) {
      iVar3 = iVar1 + 0x10;
    }
    else {
      iVar3 = *(int *)(iVar1 + 0x10);
    }
    iVar1 = FUN_00f942a0(0,*(undefined4 *)(param_3 + 0x14),iVar3,*(undefined4 *)(iVar1 + 0x20));
    if (-1 < iVar1) {
      piVar2 = &local_10;
      goto LAB_01238513;
    }
  }
  local_4 = *(undefined4 *)(param_1 + 4);
  local_8 = param_1;
  piVar2 = &local_8;
LAB_01238513:
  iVar1 = piVar2[1];
  *param_2 = *piVar2;
  param_2[1] = iVar1;
  return;
}

