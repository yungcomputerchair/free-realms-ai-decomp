// addr: 0x00c8cfc0
// name: RecipeManager_registerDataSources
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void RecipeManager_registerDataSources(void * this, void * client) */

void __thiscall RecipeManager_registerDataSources(void *this,void *client)

{
  uint uVar1;
  void *pvVar2;
  undefined4 uVar3;
  undefined4 in_stack_00000008;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Creates GUI tables for BaseClient.Inventory and BaseClient.Recipes and hooks
                       them into recipe/inventory manager state. Uses GuiDsTable_ctor and nearby
                       recipe manager helpers. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016062ab;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  GuiDsTable_ctor(this,PTR_s_BaseClient_Recipes_01b7431c);
  local_4 = 0;
  FUN_0081b470(uVar1);
  local_4._0_1_ = 1;
  *(undefined ***)this = RecipeDataSource::vftable;
  *(undefined ***)((int)this + 0x30) = RecipeDataSource::vftable;
  *(undefined ***)((int)this + 0x34) = RecipeDataSource::vftable;
  *(undefined ***)((int)this + 0x254) = RecipeDataSource::vftable;
  *(void **)((int)this + 0x270) = client;
  *(undefined4 *)((int)this + 0x274) = in_stack_00000008;
  FUN_00c8ce50();
  local_4._0_1_ = 2;
  FUN_00c8ce50();
  local_4._0_1_ = 3;
  pvVar2 = Mem_Alloc(0x27c);
  local_4._0_1_ = 4;
  if (pvVar2 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00c8bd10(client,in_stack_00000008);
  }
  local_4._0_1_ = 3;
  *(undefined4 *)((int)this + 0xed0) = 0;
  FUN_00c8a7f0(uVar3);
  local_4 = CONCAT31(local_4._1_3_,5);
  FUN_008356b0(PTR_s_BaseClient_Inventory_01b44ff8);
  ExceptionList = local_c;
  return;
}

