// addr: 0x00fe2a00
// name: FUN_00fe2a00
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __fastcall FUN_00fe2a00(int param_1)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  undefined4 uVar6;
  undefined4 uVar7;
  undefined4 uVar8;
  undefined4 uVar9;
  undefined4 uVar10;
  undefined4 uVar11;
  undefined4 uVar12;
  undefined4 uVar13;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  iVar1 = *(int *)(param_1 + 0x100);
  uVar2 = *(undefined4 *)(iVar1 + 0x10);
  uVar3 = *(undefined4 *)(iVar1 + 0x14);
  uVar4 = *(undefined4 *)(iVar1 + 0x18);
  uVar5 = *(undefined4 *)(iVar1 + 0x20);
  uVar6 = *(undefined4 *)(iVar1 + 0x24);
  uVar7 = *(undefined4 *)(iVar1 + 0x28);
  uVar8 = *(undefined4 *)(iVar1 + 0x30);
  uVar9 = *(undefined4 *)(iVar1 + 0x34);
  uVar10 = *(undefined4 *)(iVar1 + 0x38);
  uVar11 = *(undefined4 *)(iVar1 + 0x40);
  uVar12 = *(undefined4 *)(iVar1 + 0x44);
  uVar13 = *(undefined4 *)(iVar1 + 0x48);
  if (*(int *)(*(int *)(iVar1 + 0xcc) + 4) == 0x1f) {
    FUN_00fe02b0(*(undefined4 *)(*(int *)(iVar1 + 0xcc) + 0x18));
  }
  *(undefined4 *)(param_1 + 0x40) = uVar2;
  *(undefined4 *)(param_1 + 0x44) = uVar5;
  *(undefined4 *)(param_1 + 0x48) = uVar8;
  *(undefined4 *)(param_1 + 0x50) = uVar3;
  *(undefined4 *)(param_1 + 0x4c) = 0;
  *(undefined4 *)(param_1 + 0x54) = uVar6;
  *(undefined4 *)(param_1 + 0x5c) = 0;
  *(undefined4 *)(param_1 + 0x6c) = 0;
  *(undefined4 *)(param_1 + 0x58) = uVar9;
  *(undefined4 *)(param_1 + 0x70) = uVar11;
  *(undefined4 *)(param_1 + 0x60) = uVar4;
  *(undefined4 *)(param_1 + 0x74) = uVar12;
  *(undefined4 *)(param_1 + 100) = uVar7;
  *(undefined4 *)(param_1 + 0x78) = uVar13;
  uVar2 = _DAT_0175b420;
  *(undefined4 *)(param_1 + 0x68) = uVar10;
  *(undefined4 *)(param_1 + 0x7c) = uVar2;
  return;
}

