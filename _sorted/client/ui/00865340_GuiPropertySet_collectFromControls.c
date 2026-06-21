// addr: 0x00865340
// name: GuiPropertySet_collectFromControls
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuiPropertySet_collectFromControls(void * set, void * selection) */

void __cdecl GuiPropertySet_collectFromControls(void *set,void *selection)

{
  bool bVar1;
  void *pvVar2;
  uint uVar3;
  int **ppiVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  int *local_14;
  undefined1 auStack_10 [4];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar2 = set;
                    /* Walks selected controls and dynamic_casts GCtrl to GuiPropertySet to collect
                       properties. Evidence is GuiPropertySet RTTI, child vector traversal, and
                       property-related callers. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01573e39;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  uVar8 = 0;
  bVar1 = false;
  if (*(int *)((int)set + 0x48) == 0) {
    set = (void *)0x0;
  }
  else {
    set = (void *)(*(int *)((int)set + 0x4c) - *(int *)((int)set + 0x48) >> 2);
  }
  if (0 < (int)set) {
    do {
      iVar6 = *(int *)((int)pvVar2 + 0x48);
      if ((iVar6 == 0) || ((uint)(*(int *)((int)pvVar2 + 0x4c) - iVar6 >> 2) <= uVar8)) {
        local_14 = (int *)0x0;
        ppiVar4 = &local_14;
        local_4 = 0;
        bVar1 = true;
      }
      else {
        if ((iVar6 == 0) || ((uint)(*(int *)((int)pvVar2 + 0x4c) - iVar6 >> 2) <= uVar8)) {
          FUN_00d83c2d(uVar3);
        }
        ppiVar4 = (int **)(*(int *)((int)pvVar2 + 0x48) + uVar8 * 4);
      }
      piVar7 = *ppiVar4;
      local_4 = 0xffffffff;
      if ((bVar1) && (bVar1 = false, local_14 != (int *)0x0)) {
        (**(code **)(*local_14 + 0x10))(0);
      }
      iVar6 = *piVar7;
      FUN_00409723(auStack_10,0);
      uVar5 = FUN_004cd10a();
      iVar6 = (**(code **)(iVar6 + 8))(uVar5);
      if (iVar6 != 0) {
        iVar6 = FUN_0042b2c9();
        if (iVar6 != 0) {
          piVar7 = (int *)FUN_00d8d382(iVar6,0,&GCtrl::RTTI_Type_Descriptor,
                                       &GuiPropertySet::RTTI_Type_Descriptor,0);
          if (piVar7 != (int *)0x0) {
            (**(code **)(*piVar7 + 0x2c))(selection);
          }
        }
      }
      uVar8 = uVar8 + 1;
    } while ((int)uVar8 < (int)set);
  }
  ExceptionList = local_c;
  return;
}

