// addr: 0x00835390
// name: GuiLayout_applyControlAnchors
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuiLayout_applyControlAnchors(void * this) */

void __fastcall GuiLayout_applyControlAnchors(void *this)

{
  uint *puVar1;
  int *piVar2;
  int *piVar3;
  undefined4 uVar4;
  int **ppiVar5;
  int iVar6;
  uint uVar7;
  int *piVar8;
  uint uVar9;
  uint local_24;
  uint local_20;
  int local_1c;
  int *local_18;
  void *local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Walks GUI child/control vectors and recalculates positions using current
                       layout/anchor state. Evidence is GUI object/control calls and bounds/position
                       arithmetic; exact class name is inferred. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0156d154;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  uVar9 = 0;
  local_20 = 0;
  puVar1 = *(uint **)((int)this + 0x3f0);
  if ((puVar1 != (uint *)0x0) && (*puVar1 != 0)) {
    if (puVar1 == (uint *)0x0) {
      local_24 = 0;
    }
    else {
      local_24 = *puVar1;
    }
    local_14 = this;
    piVar3 = (int *)FUN_0043086f(DAT_01b839d8 ^ (uint)&stack0xffffffcc);
    uVar4 = FUN_00406665();
    if (piVar3 != (int *)0x0) {
      uVar4 = FUN_0081ebd0(uVar4);
      local_10 = FUN_008347a0(uVar4);
      if (piVar3[0x12] == 0) {
        local_1c = 0;
      }
      else {
        local_1c = piVar3[0x13] - piVar3[0x12] >> 2;
      }
      piVar8 = local_18;
      if (0 < local_1c) {
        do {
          iVar6 = piVar3[0x12];
          if ((iVar6 == 0) || ((uint)(piVar3[0x13] - iVar6 >> 2) <= uVar9)) {
            piVar8 = (int *)0x0;
            local_18 = (int *)0x0;
            ppiVar5 = &local_18;
            local_4 = 0;
            local_20 = local_20 | 1;
          }
          else {
            if ((iVar6 == 0) || ((uint)(piVar3[0x13] - iVar6 >> 2) <= uVar9)) {
              FUN_00d83c2d();
            }
            ppiVar5 = (int **)(piVar3[0x12] + uVar9 * 4);
          }
          piVar2 = *ppiVar5;
          local_4 = 0xffffffff;
          if (((local_20 & 1) != 0) && (local_20 = local_20 & 0xfffffffe, piVar8 != (int *)0x0)) {
            (**(code **)(*piVar8 + 0x10))(0);
          }
        } while ((((piVar2 == (int *)0x0) ||
                  (iVar6 = FUN_00d8d382(piVar2,0,&GLayoutItem::RTTI_Type_Descriptor,
                                        &GCtrlLayoutItem::RTTI_Type_Descriptor,0), iVar6 == 0)) ||
                 (uVar7 = FUN_0042b2c9(), uVar7 != local_24)) &&
                (uVar9 = uVar9 + 1, (int)uVar9 < local_1c));
      }
      iVar6 = local_10;
      local_10 = FUN_00409455(0x54);
      local_4 = 1;
      if (local_10 == 0) {
        uVar4 = 0;
      }
      else {
        local_24 = local_24 & 0xffff0000;
        uVar4 = FUN_0043561e(iVar6,0,&local_24);
      }
      local_4 = 0xffffffff;
      (**(code **)(*piVar3 + 0x58))(uVar9,uVar4);
      FUN_00833100(iVar6);
    }
  }
  ExceptionList = local_c;
  return;
}

