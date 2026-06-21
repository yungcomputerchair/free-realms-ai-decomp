// addr: 0x0084c840
// name: GuiDsTableBinding_refreshControl
// subsystem: common/client/ui
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GuiDsTableBinding_refreshControl(void * this) */

void __fastcall GuiDsTableBinding_refreshControl(void *this)

{
  int iVar1;
  undefined4 uVar2;
  undefined4 *puVar3;
  undefined1 local_3c [4];
  undefined1 auStack_38 [4];
  uint local_34;
  uint uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  undefined4 uStack_18;
  void *pvStack_14;
  undefined2 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Refreshes a bound UI control from a GuiDsTable data source when available,
                       otherwise applies default/empty values, then updates a second property
                       packet. Exact control class is unknown. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_015704c0;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(int *)((int)this + 0x18) != 0) {
    iVar1 = FUN_00d8d382(*(int *)((int)this + 0x18),0,&GuiDataSource::RTTI_Type_Descriptor,
                         &GuiDsTable::RTTI_Type_Descriptor,0,DAT_01b839d8 ^ (uint)&stack0xffffffb4);
    if (iVar1 != 0) {
      uVar2 = (**(code **)(*(int *)(iVar1 + 0x30) + 8))();
      uStack_20 = (*(code *)**(undefined4 **)(iVar1 + 0x30))();
      uStack_10 = DAT_01bd8560;
      uStack_2c = 0;
      uStack_28 = 1;
      uStack_24 = 0;
      uStack_1c = 1;
      uStack_18 = 0;
      uStack_4 = 1;
      pvStack_14 = (void *)uVar2;
      (**(code **)(*(int *)((int)this + -0x1e8) + 0x114))(&uStack_2c);
      puStack_8 = (undefined1 *)0xffffffff;
      if ((uStack_30 & 0x24924) != 0) {
        FUN_004d93a3();
      }
      goto LAB_0084c94f;
    }
  }
  iVar1 = FUN_00664271(local_3c);
  uVar2 = *(undefined4 *)(iVar1 + 4);
  puVar3 = (undefined4 *)FUN_00664271(&local_34);
  (**(code **)(*(int *)((int)this + -0x1e8) + 0x27c))(3,0,*puVar3,3,0,uVar2,0);
LAB_0084c94f:
  iVar1 = FUN_00663fa0(auStack_38);
  uVar2 = *(undefined4 *)(iVar1 + 4);
  puVar3 = (undefined4 *)FUN_00663fa0(auStack_38);
  uStack_2c = *puVar3;
  uStack_30 = 0;
  pvStack_14 = (void *)CONCAT22((short)((uint)pvStack_14 >> 0x10),DAT_01bd8924);
  uStack_24 = 0;
  uStack_20 = 0;
  uStack_1c = 0;
  uStack_18 = 0;
  puStack_8 = (undefined1 *)0x2;
  uStack_28 = uVar2;
  (**(code **)(*(int *)((int)this + -0x1e8) + 0x114))(&uStack_30);
  local_c = (void *)0xffffffff;
  if ((local_34 & 0x24924) != 0) {
    FUN_004d93a3();
  }
  ExceptionList = pvStack_14;
  return;
}

