// addr: 0x008351b0
// name: FUN_008351b0
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_008351b0(int param_1)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int **ppiVar5;
  int iVar6;
  uint uVar7;
  uint uVar8;
  uint local_28;
  uint local_24;
  int local_20;
  int *local_1c;
  int local_18;
  undefined4 local_14;
  int iStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0156d114;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar8 = 0;
  local_24 = 0;
  puVar1 = *(uint **)(param_1 + 0x3f0);
  if ((puVar1 != (uint *)0x0) && (*puVar1 != 0)) {
    if (puVar1 == (uint *)0x0) {
      local_28 = 0;
    }
    else {
      local_28 = *puVar1;
    }
    local_18 = param_1;
    piVar3 = (int *)FUN_0043086f(DAT_01b839d8 ^ (uint)&stack0xffffffc8);
    uVar4 = FUN_00406665();
    if (piVar3 != (int *)0x0) {
      uVar4 = FUN_0081ebd0(uVar4);
      local_14 = FUN_008347a0(uVar4);
      if (piVar3[0x12] == 0) {
        local_20 = 0;
      }
      else {
        local_20 = piVar3[0x13] - piVar3[0x12] >> 2;
      }
      if (0 < local_20) {
        do {
          iVar6 = piVar3[0x12];
          if ((iVar6 == 0) || ((uint)(piVar3[0x13] - iVar6 >> 2) <= uVar8)) {
            local_1c = (int *)0x0;
            ppiVar5 = &local_1c;
            local_4 = 0;
            local_24 = local_24 | 1;
          }
          else {
            if ((iVar6 == 0) || ((uint)(piVar3[0x13] - iVar6 >> 2) <= uVar8)) {
              FUN_00d83c2d();
            }
            ppiVar5 = (int **)(piVar3[0x12] + uVar8 * 4);
          }
          piVar2 = *ppiVar5;
          local_4 = 0xffffffff;
          if (((local_24 & 1) != 0) && (local_24 = local_24 & 0xfffffffe, local_1c != (int *)0x0)) {
            (**(code **)(*local_1c + 0x10))(0);
          }
          if (piVar2 != (int *)0x0) {
            iVar6 = *piVar2;
            FUN_00409723(&iStack_10,0);
            uVar4 = FUN_004cd10a();
            iVar6 = (**(code **)(iVar6 + 8))(uVar4);
            if ((iVar6 != 0) && (uVar7 = FUN_0042b2c9(), uVar7 == local_28)) break;
          }
          uVar8 = uVar8 + 1;
        } while ((int)uVar8 < local_20);
      }
      iStack_10 = FUN_00409455(0x54);
      local_4 = 1;
      if (iStack_10 == 0) {
        uVar4 = 0;
      }
      else {
        local_28 = local_28 & 0xffff0000;
        uVar4 = FUN_0043561e(local_14,0,&local_28);
      }
      local_4 = 0xffffffff;
      if ((int)uVar8 < local_20) {
        uVar8 = uVar8 + 1;
      }
      (**(code **)(*piVar3 + 0x58))(uVar8,uVar4);
      FUN_00833100(local_14);
    }
  }
  ExceptionList = local_c;
  return;
}

