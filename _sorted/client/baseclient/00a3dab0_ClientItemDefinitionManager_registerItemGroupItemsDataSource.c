// addr: 0x00a3dab0
// name: ClientItemDefinitionManager_registerItemGroupItemsDataSource
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ClientItemDefinitionManager_registerItemGroupItemsDataSource(void * this)
    */

void __fastcall ClientItemDefinitionManager_registerItemGroupItemsDataSource(void *this)

{
  void *pvVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates the BaseClient.ItemGroup.Items datasource and wires it through the
                       item-definition datasource update dispatcher. It allocates
                       ItemGroupItemsDataSource and calls nearby manager setter/update helpers. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015b343b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar1 = Mem_Alloc(0x264);
  local_4 = 0;
  if (pvVar1 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = ItemGroupItemsDataSource_ctor(pvVar1,*(void **)((int)this + 4));
  }
  local_4 = 0xffffffff;
  FUN_00a3ad50(pvVar1);
  FUN_00a3d350("Resources/");
  FUN_00a3cf00("Resources/");
  ExceptionList = local_c;
  return;
}

