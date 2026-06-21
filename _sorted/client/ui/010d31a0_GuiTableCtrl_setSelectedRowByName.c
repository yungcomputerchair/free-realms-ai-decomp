// addr: 0x010d31a0
// name: GuiTableCtrl_setSelectedRowByName
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuiTableCtrl_setSelectedRowByName(char * tableName, int row_) */

void __cdecl GuiTableCtrl_setSelectedRowByName(char *tableName,int row_)

{
  bool bVar1;
  int iVar2;
  undefined4 *puVar3;
  void **outObject;
  void *local_c;
  undefined1 local_8 [8];
  
                    /* Finds a GuiTableCtrl by name and sets its selected row/value through a shared
                       selection helper. Exact helper semantics are inferred from table selection
                       usage. */
  outObject = &local_c;
  local_c = (void *)0x0;
  iVar2 = FUN_00705bc0(tableName);
  bVar1 = FUN_00819650(DAT_01be1090,iVar2,outObject);
  if ((bVar1) &&
     (iVar2 = FUN_00d8d382(local_c,0,&GObject::RTTI_Type_Descriptor,
                           &GuiTableCtrl::RTTI_Type_Descriptor,0), iVar2 != 0)) {
    puVar3 = (undefined4 *)FUN_00663fa0(local_8);
    FUN_00696a33(*puVar3,row_,1,1,0);
  }
  return;
}

