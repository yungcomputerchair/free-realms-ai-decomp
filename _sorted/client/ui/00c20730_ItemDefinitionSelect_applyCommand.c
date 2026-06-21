// addr: 0x00c20730
// name: ItemDefinitionSelect_applyCommand
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ItemDefinitionSelect_applyCommand(void * command) */

bool __cdecl ItemDefinitionSelect_applyCommand(void *command)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  int local_10 [3];
  undefined1 local_4;
  undefined1 local_3;
  undefined1 local_2;
  
                    /* Validates a command argument, finds BaseClient.ItemDefinitionSelect as a
                       SingleItemDefinitionDataSource, builds a small selection record around the
                       argument, applies it, and reports success back to the command.  */
  uVar3 = 0;
  iVar1 = FUN_00e3a390(command);
  if ((0 < iVar1) && (iVar1 = FUN_00e3a5f0(command,1), iVar1 != 0)) {
    iVar1 = FUN_00e3a7b0(command,1);
    pvVar2 = GuiDataSourceRegistry_findSingleItemDefinitionDataSource
                       (DAT_01be1090,PTR_s_BaseClient_ItemDefinitionSelect_01b75b44);
    if ((pvVar2 != (void *)0x0) && (0 < iVar1)) {
      local_10[1] = 0;
      local_10[2] = 0;
      local_4 = 0;
      local_3 = 0;
      local_2 = 0;
      local_10[0] = iVar1;
      FUN_00c976c0(local_10);
      uVar3 = 1;
    }
  }
  FUN_00e3ac00(command,uVar3);
  return true;
}

