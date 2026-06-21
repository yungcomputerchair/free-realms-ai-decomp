// addr: 0x004b55ee
// name: FUN_004b55ee
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x004b5758) */
/* WARNING: Removing unreachable block (ram,0x004b570b) */
/* WARNING: Removing unreachable block (ram,0x004b5741) */
/* WARNING: Removing unreachable block (ram,0x004b577d) */

undefined4 __thiscall FUN_004b55ee(int param_1,int param_2,uint *param_3,int param_4,uint *param_5)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  uint *puVar4;
  uint local_8;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  local_8 = 0;
  *param_5 = 0;
  puVar1 = (uint *)FUN_004b2257();
  puVar4 = param_3;
  if (puVar1 == (uint *)0x0) {
    FUN_004a08f3();
  }
  else {
    *puVar1 = 0;
    uVar2 = *(uint *)(param_1 + 4) & 0x30;
    if (uVar2 == 0) {
      *puVar1 = 1;
    }
    else if (uVar2 == 0x10) {
      *puVar1 = 2;
    }
    else if (uVar2 == 0x20) {
      *puVar1 = 3;
    }
    uVar2 = (**(code **)(*(int *)(param_2 + 0x10) + 0x18))();
    puVar1[5] = uVar2;
    if (puVar4 == (uint *)0x0) {
      puVar1[6] = 0;
      puVar1[1] = 0;
      puVar1[2] = 0;
      puVar1[3] = 0;
      puVar1[4] = 0;
    }
    else {
      iVar3 = FUN_00482da0();
      puVar1[6] = iVar3 + puVar4[6];
      uVar2 = puVar4[2];
      puVar1[1] = puVar4[1];
      puVar1[2] = uVar2;
      puVar1[2] = puVar1[2] + puVar4[4];
      puVar1[3] = 0;
      puVar1[4] = 0;
      if ((*puVar4 & 0x10) != 0) {
        *puVar1 = *puVar4 & 3;
      }
    }
    iVar3 = param_4;
    *(uint **)(param_4 + 0x1c) = puVar1;
    puVar4 = (uint *)0x0;
    while (param_3 = (uint *)build_layout_line_record(param_2,(int *)puVar4,iVar3,&local_8),
          param_3 != (uint *)0x0) {
      if ((local_8 & 0x1000) != 0) {
        FUN_004b2db4(&param_3);
        *(int *)(iVar3 + 0x14) = *(int *)(iVar3 + 0x14) + 1;
      }
      if ((local_8 & 0x10000) != 0) break;
      if (*(uint *)(iVar3 + 0x18) <= *(uint *)(iVar3 + 0x14)) {
        local_8 = local_8 | 0x10010000;
        break;
      }
      local_8 = 0;
      puVar4 = param_3;
    }
    *param_5 = local_8;
    FUN_004abb4e(puVar1);
    FUN_004a08f3();
  }
  return 0;
}

