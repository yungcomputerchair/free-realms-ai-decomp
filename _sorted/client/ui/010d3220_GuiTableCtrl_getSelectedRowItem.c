// addr: 0x010d3220
// name: GuiTableCtrl_getSelectedRowItem
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GuiTableCtrl_getSelectedRowItem(char * tableName) */

int __cdecl GuiTableCtrl_getSelectedRowItem(char *tableName)

{
  bool bVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  void **outObject;
  void *local_c;
  undefined1 local_8 [8];
  
                    /* Finds a GuiTableCtrl by name, obtains the current/selected row index, asks
                       the table model for that row, and returns the row's first field when present.
                       Returns 0 on failure. */
  outObject = &local_c;
  local_c = (void *)0x0;
  iVar2 = FUN_00705bc0(tableName);
  bVar1 = FUN_00819650(DAT_01be1090,iVar2,outObject);
  if (!bVar1) {
    return 0;
  }
  iVar2 = FUN_00d8d382(local_c,0,&GObject::RTTI_Type_Descriptor,&GuiTableCtrl::RTTI_Type_Descriptor,
                       0);
  if (iVar2 != 0) {
    iVar3 = FUN_00663fa0(local_8);
    piVar4 = (int *)(**(code **)(*(int *)(iVar2 + 0x1e8) + 0x1c))(*(undefined4 *)(iVar3 + 4));
    if (piVar4 != (int *)0x0) {
      return *piVar4;
    }
  }
  return 0;
}

