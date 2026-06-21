// addr: 0x004161ea
// name: FUN_004161ea
// subsystem: common/game/match
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


uint __thiscall FUN_004161ea(int param_1,uint *param_2)

{
  bool bVar1;
  bool bVar2;
  bool bVar3;
  bool bVar4;
  uint uVar5;
  undefined4 *puVar6;
  uint uVar7;
  uint uVar8;
  uint local_c;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  uVar5 = *(uint *)(param_1 + 0x10);
  bVar1 = false;
  bVar3 = false;
  if (((uVar5 & 0x800000) != 0) && ((uVar5 & 0x2000000) == 0)) {
    bVar1 = true;
  }
  if (((uVar5 & 0x80000) != 0) && ((uVar5 & 0x1000000) == 0)) {
    bVar3 = true;
  }
  if (((bVar1) && (bVar3)) && (param_2 == (uint *)0x0)) {
    uVar5 = 0x880000;
  }
  else {
    bVar4 = false;
    bVar2 = false;
    uVar8 = 0;
    local_c = FUN_0040a67f();
    if (*(int *)(param_1 + 0x5c) == 2) {
      uVar8 = *(uint *)(param_1 + 0x60);
      if (local_c <= *(uint *)(param_1 + 0x60)) {
        uVar8 = local_c;
      }
      local_c = uVar8 + 1;
    }
    for (; uVar8 < local_c; uVar8 = uVar8 + 1) {
      puVar6 = (undefined4 *)FUN_0040a692(uVar8);
      uVar7 = (**(code **)(*(int *)*puVar6 + 0x3c))(0);
      if ((uVar7 & 0x800000) != 0) {
        bVar2 = true;
      }
      if ((uVar7 & 0x80000) != 0) {
        bVar4 = true;
      }
      if ((bVar2) && (bVar4)) break;
    }
    if (param_2 != (uint *)0x0) {
      *param_2 = -(uint)bVar2 & 0x800000 | -(uint)bVar4 & 0x80000;
    }
    if ((uVar5 & 0x2000000) == 0) {
      bVar1 = (bool)(bVar1 | bVar2);
    }
    if ((uVar5 & 0x1000000) == 0) {
      bVar3 = (bool)(bVar3 | bVar4);
    }
    uVar5 = -(uint)bVar1 & 0x800000 | -(uint)bVar3 & 0x80000;
  }
  return uVar5;
}

