// addr: 0x00ce5c30
// name: AchievementCategoryDataSource_sub_00ce5c30
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall AchievementCategoryDataSource_sub_00ce5c30(undefined4 *param_1)

{
  undefined4 *node;
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a AchievementCategoryDataSource sub_00ce5c30 routine. Evidence:
                       vftable/call-shape evidence in ctx. */
  puStack_8 = &LAB_0160e960;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *param_1 = AchievementCategoryDataSource::vftable;
  local_4 = 0;
  node = (undefined4 *)param_1[0xc];
  if (node != (undefined4 *)0x0) {
    GuiTreeDataSource_removeChildAndNotify(param_1,node);
    (**(code **)*node)(1);
  }
  *(undefined1 *)(param_1 + 0x10) = 1;
  local_4 = 0xffffffff;
  FUN_00822810(uVar1);
  ExceptionList = local_c;
  return;
}

