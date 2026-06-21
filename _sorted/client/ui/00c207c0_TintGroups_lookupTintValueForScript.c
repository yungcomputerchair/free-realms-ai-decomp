// addr: 0x00c207c0
// name: TintGroups_lookupTintValueForScript
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool TintGroups_lookupTintValueForScript(void * scriptState) */

bool __cdecl TintGroups_lookupTintValueForScript(void *scriptState)

{
  int iVar1;
  void *this;
  int iVar2;
  
                    /* For one script argument, converts it to a key, finds BaseClient.TintGroups,
                       looks up the key in the TintGroupDataSource, and pushes the tint value or
                       0xffffffff. Returns one result. */
  iVar2 = -1;
  iVar1 = FUN_00e3a390(scriptState);
  if (iVar1 == 1) {
    FUN_00e3a770(scriptState,1);
    iVar1 = FUN_00d83c90();
    this = GuiDataSourceRegistry_findTintGroupDataSource
                     (DAT_01be1090,PTR_s_BaseClient_TintGroups_01b505b0);
    if (this != (void *)0x0) {
      iVar2 = FUN_00a734d0(this,iVar1);
    }
  }
  FUN_00e3aa30(scriptState,iVar2);
  return true;
}

