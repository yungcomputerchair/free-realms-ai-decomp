// addr: 0x010d3130
// name: GuiTableCtrl_getSelectedRowValue
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GuiTableCtrl_getSelectedRowValue(char * tableName) */

int __cdecl GuiTableCtrl_getSelectedRowValue(char *tableName)

{
  bool bVar1;
  int iVar2;
  void **outObject;
  void *local_c;
  undefined1 local_8 [8];
  
                    /* Finds a GuiTableCtrl by name and returns a value associated with its
                       current/selected row, or 0 if lookup fails. Exact row state helper is not
                       named. */
  outObject = &local_c;
  local_c = (void *)0x0;
  iVar2 = FUN_00705bc0(tableName);
  bVar1 = FUN_00819650(DAT_01be1090,iVar2,outObject);
  if (bVar1) {
    iVar2 = FUN_00d8d382(local_c,0,&GObject::RTTI_Type_Descriptor,
                         &GuiTableCtrl::RTTI_Type_Descriptor,0);
    if (iVar2 != 0) {
      iVar2 = FUN_00663fa0(local_8);
      return *(int *)(iVar2 + 4);
    }
  }
  return 0;
}

