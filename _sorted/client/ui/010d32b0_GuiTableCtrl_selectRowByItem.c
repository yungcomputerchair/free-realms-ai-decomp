// addr: 0x010d32b0
// name: GuiTableCtrl_selectRowByItem
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int GuiTableCtrl_selectRowByItem(char * tableName) */

int __cdecl GuiTableCtrl_selectRowByItem(char *tableName)

{
  bool bVar1;
  int iVar2;
  int *piVar3;
  undefined4 *puVar4;
  int iVar5;
  void **outObject;
  void *local_c [3];
  
                    /* Finds a GuiTableCtrl, scans its row model for a row whose first field matches
                       the input key, selects the found index (or 0 when none), and returns the
                       selected index or -1 on lookup failure. */
  outObject = local_c;
  local_c[0] = (void *)0x0;
  iVar2 = FUN_00705bc0(tableName);
  bVar1 = FUN_00819650(DAT_01be1090,iVar2,outObject);
  if (!bVar1) {
    return -1;
  }
  iVar2 = FUN_00d8d382(local_c[0],0,&GObject::RTTI_Type_Descriptor,
                       &GuiTableCtrl::RTTI_Type_Descriptor,0);
  if (iVar2 != 0) {
    iVar5 = 0;
    piVar3 = (int *)(**(code **)(*(int *)(iVar2 + 0x1e8) + 0x1c))(0);
    while( true ) {
      if (piVar3 == (int *)0x0) {
        puVar4 = (undefined4 *)FUN_00663fa0(local_c);
        FUN_00696a33(*puVar4,0,1,1,0);
        return 0;
      }
      if ((char *)*piVar3 == tableName) break;
      iVar5 = iVar5 + 1;
      piVar3 = (int *)(**(code **)(*(int *)(iVar2 + 0x1e8) + 0x1c))(iVar5);
    }
    puVar4 = (undefined4 *)FUN_00663fa0(local_c);
    FUN_00696a33(*puVar4,iVar5,1,1,0);
    return iVar5;
  }
  return -1;
}

