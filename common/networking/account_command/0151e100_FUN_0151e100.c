// addr: 0x0151e100
// name: FUN_0151e100
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall FUN_0151e100(int param_1,int *param_2,int param_3,int param_4,undefined4 param_5)

{
  uint uVar1;
  int iVar2;
  
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  uVar1 = *(uint *)(param_1 + 4);
  if ((uVar1 == 0) || ((int)(*(uint *)(param_1 + 8) - uVar1) >> 2 == 0)) {
    iVar2 = 0;
  }
  else {
    if (*(uint *)(param_1 + 8) < uVar1) {
      FUN_00d83c2d();
    }
    if ((param_3 == 0) || (param_3 != param_1)) {
      FUN_00d83c2d();
    }
    iVar2 = (int)(param_4 - uVar1) >> 2;
  }
  FUN_0151dea0(param_3,param_4,1,param_5);
  uVar1 = *(uint *)(param_1 + 4);
  if (*(uint *)(param_1 + 8) < uVar1) {
    FUN_00d83c2d();
  }
  uVar1 = uVar1 + iVar2 * 4;
  if ((*(uint *)(param_1 + 8) < uVar1) || (uVar1 < *(uint *)(param_1 + 4))) {
    FUN_00d83c2d();
  }
  param_2[1] = uVar1;
  *param_2 = param_1;
  return;
}

