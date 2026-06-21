// addr: 0x012f9e00
// name: FUN_012f9e00
// subsystem: common/common/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_012f9e00(int param_1,int *param_2,int param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  int iVar3;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  uVar1 = *(uint *)(param_1 + 4);
  if (uVar1 != 0) {
    iVar2 = *(uint *)(param_1 + 8) - uVar1;
    iVar3 = iVar2 >> 0x1f;
    if (iVar2 / 0xc + iVar3 != iVar3) {
      if (*(uint *)(param_1 + 8) < uVar1) {
        FUN_00d83c2d();
      }
      if ((param_3 == 0) || (param_3 != param_1)) {
        FUN_00d83c2d();
      }
      iVar3 = (int)(param_4 - uVar1) / 0xc;
      goto LAB_012f9e61;
    }
  }
  iVar3 = 0;
LAB_012f9e61:
  FUN_012f9990(param_3,param_4,1,param_5);
  uVar1 = *(uint *)(param_1 + 4);
  if (*(uint *)(param_1 + 8) < uVar1) {
    FUN_00d83c2d();
  }
  uVar1 = uVar1 + iVar3 * 0xc;
  if ((*(uint *)(param_1 + 8) < uVar1) || (uVar1 < *(uint *)(param_1 + 4))) {
    FUN_00d83c2d();
  }
  param_2[1] = uVar1;
  *param_2 = param_1;
  return;
}

