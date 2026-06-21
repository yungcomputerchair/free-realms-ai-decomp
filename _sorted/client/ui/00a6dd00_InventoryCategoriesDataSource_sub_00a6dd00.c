// addr: 0x00a6dd00
// name: InventoryCategoriesDataSource_sub_00a6dd00
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall InventoryCategoriesDataSource_sub_00a6dd00(undefined4 *param_1)

{
  undefined4 *node;
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Identifies a InventoryCategoriesDataSource sub_00a6dd00 routine. Evidence:
                       vftable/call-shape evidence in ctx. */
  puStack_8 = &LAB_015b9b30;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *param_1 = InventoryCategoriesDataSource::vftable;
  local_4 = 0;
  node = (undefined4 *)param_1[0xc];
  if (node != (undefined4 *)0x0) {
    GuiTreeDataSource_removeChildAndNotify(param_1,node);
    (**(code **)*node)(1);
  }
  local_4 = 0xffffffff;
  FUN_00822810(uVar1);
  ExceptionList = local_c;
  return;
}

