// addr: 0x012fcd40
// name: FUN_012fcd40
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


bool FUN_012fcd40(int param_1,uint param_2,int param_3,int param_4)

{
  uint uVar1;
  uint uVar2;
  int iVar3;
  int iVar4;
  uint *puVar5;
  
  iVar3 = param_3;
                    /* Unidentified helper; no strong strings or named neighbors in sidecar context.
                        */
  uVar2 = param_2;
  if (param_3 == 0) {
    FUN_00d83c2d();
  }
  iVar4 = param_4;
  uVar1 = param_4 + ((int)(param_2 - param_1) / 0x1c) * 0x1c;
  if ((*(uint *)(iVar3 + 8) < uVar1) || (uVar1 < *(uint *)(iVar3 + 4))) {
    FUN_00d83c2d();
  }
  param_2 = param_2 & 0xffffff00;
  puVar5 = (uint *)FUN_012fc2e0(&param_3,param_1,uVar2,iVar4,param_2,param_2);
  return *puVar5 == uVar2;
}

