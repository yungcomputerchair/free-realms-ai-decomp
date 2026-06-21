// addr: 0x00c29cc0
// name: FUN_00c29cc0
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __fastcall FUN_00c29cc0(void *param_1)

{
  int iVar1;
  
                    /* Refreshes a data source's state from a large owner field at +0x53d9c: stores
                       it at +600, maps state 1 to value 2 at +0x254 and other states to 0, then
                       notifies/refreshes. Class is unknown. */
  iVar1 = *(int *)(*(int *)((int)param_1 + 0x25c) + 0x53d9c);
  *(int *)((int)param_1 + 600) = iVar1;
  if (iVar1 != 1) {
    *(undefined4 *)((int)param_1 + 0x254) = 0;
    GuiDataSource_notifyTableViewsAndRegister(param_1);
    return;
  }
  *(undefined4 *)((int)param_1 + 0x254) = 2;
  GuiDataSource_notifyTableViewsAndRegister(param_1);
  return;
}

