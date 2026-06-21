// addr: 0x00b5b470
// name: PetInventoryManager_registerDataSources
// subsystem: common/client/baseclient
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PetInventoryManager_registerDataSources(void * this, void * petData, void
   * selfObject, int arg4_, int arg5_, int arg6_) */

void __thiscall
PetInventoryManager_registerDataSources
          (void *this,void *petData,void *selfObject,int arg4_,int arg5_,int arg6_)

{
  uint *puVar1;
  uint *puVar2;
  uint *puVar3;
  uint uVar4;
  uint *puVar5;
  uint uVar6;
  void *pvVar7;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Builds the pet inventory/tricks datasource set for wearable slots, utility
                       items, care items, equipped data, and trick data when pet/self-object data is
                       available. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_015dbc40;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_00b59210(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  puVar5 = *(uint **)((int)petData + 4);
  do {
    if (puVar5 == (uint *)0x0) {
      *(int *)((int)this + 0x84) = arg4_;
      *(int *)((int)this + 0x88) = arg5_;
      *(int *)((int)this + 0x8c) = arg6_;
      if (selfObject != (void *)0x0) {
        pvVar7 = Mem_Alloc(0x2e4);
        uStack_4 = 0;
        if (pvVar7 == (void *)0x0) {
          pvVar7 = (void *)0x0;
        }
        else {
          pvVar7 = PetEquipScreenDataSource_ctor
                             (pvVar7,*(void **)this,(void *)((int)selfObject + 0x35748),
                              "BaseClient.PetInventory.HeadData",(void *)0x1);
        }
        uStack_4 = 0xffffffff;
        FUN_00b52300(pvVar7);
        pvVar7 = Mem_Alloc(0x2e4);
        uStack_4 = 1;
        if (pvVar7 == (void *)0x0) {
          pvVar7 = (void *)0x0;
        }
        else {
          pvVar7 = PetEquipScreenDataSource_ctor
                             (pvVar7,*(void **)this,(void *)((int)selfObject + 0x35748),
                              "BaseClient.PetInventory.CollarData",(void *)0x6);
        }
        uStack_4 = 0xffffffff;
        FUN_00b52300(pvVar7);
        pvVar7 = Mem_Alloc(0x2e4);
        uStack_4 = 2;
        if (pvVar7 == (void *)0x0) {
          pvVar7 = (void *)0x0;
        }
        else {
          pvVar7 = PetEquipScreenDataSource_ctor
                             (pvVar7,*(void **)this,(void *)((int)selfObject + 0x35748),
                              "BaseClient.PetInventory.ChestData",(void *)0x3);
        }
        uStack_4 = 0xffffffff;
        FUN_00b52300(pvVar7);
        pvVar7 = Mem_Alloc(0x2e4);
        uStack_4 = 3;
        if (pvVar7 == (void *)0x0) {
          pvVar7 = (void *)0x0;
        }
        else {
          pvVar7 = PetEquipScreenDataSource_ctor
                             (pvVar7,*(void **)this,(void *)((int)selfObject + 0x35748),
                              "BaseClient.PetInventory.FeetData",(void *)0x5);
        }
        uStack_4 = 0xffffffff;
        FUN_00b52300(pvVar7);
        pvVar7 = Mem_Alloc(0x2e4);
        uStack_4 = 4;
        if (pvVar7 == (void *)0x0) {
          pvVar7 = (void *)0x0;
        }
        else {
          pvVar7 = PetEquipScreenDataSource_ctor
                             (pvVar7,*(void **)this,(void *)((int)selfObject + 0x35748),
                              "BaseClient.PetInventory.ToyData",(void *)0xca);
        }
        uStack_4 = 0xffffffff;
        FUN_00b52300(pvVar7);
        pvVar7 = Mem_Alloc(0x2e4);
        uStack_4 = 5;
        if (pvVar7 == (void *)0x0) {
          pvVar7 = (void *)0x0;
        }
        else {
          pvVar7 = PetEquipScreenDataSource_ctor
                             (pvVar7,*(void **)this,(void *)((int)selfObject + 0x35748),
                              "BaseClient.PetInventory",(void *)0x0);
        }
        uStack_4 = 0xffffffff;
        FUN_00b52300(pvVar7);
        pvVar7 = Mem_Alloc(0x2e8);
        uStack_4 = 6;
        if (pvVar7 == (void *)0x0) {
          pvVar7 = (void *)0x0;
        }
        else {
          pvVar7 = PetUtilityScreenDataSource_ctor
                             (pvVar7,*(void **)this,(void *)((int)selfObject + 0x35748),
                              "BaseClient.PetInventory.ShampooData",(void *)0xc8);
        }
        uStack_4 = 0xffffffff;
        FUN_00b52370(pvVar7);
        pvVar7 = Mem_Alloc(0x2e8);
        uStack_4 = 7;
        if (pvVar7 == (void *)0x0) {
          pvVar7 = (void *)0x0;
        }
        else {
          pvVar7 = PetUtilityScreenDataSource_ctor
                             (pvVar7,*(void **)this,(void *)((int)selfObject + 0x35748),
                              "BaseClient.PetInventory.ConditionerData",(void *)0xc9);
        }
        uStack_4 = 0xffffffff;
        FUN_00b52370(pvVar7);
        pvVar7 = Mem_Alloc(0x2e8);
        uStack_4 = 8;
        if (pvVar7 == (void *)0x0) {
          pvVar7 = (void *)0x0;
        }
        else {
          pvVar7 = PetUtilityScreenDataSource_ctor
                             (pvVar7,*(void **)this,(void *)((int)selfObject + 0x35748),
                              "BaseClient.PetInventory.BrushData",(void *)0xcb);
        }
        uStack_4 = 0xffffffff;
        FUN_00b52370(pvVar7);
        pvVar7 = Mem_Alloc(0x2e8);
        uStack_4 = 9;
        if (pvVar7 == (void *)0x0) {
          pvVar7 = (void *)0x0;
        }
        else {
          pvVar7 = PetUtilityScreenDataSource_ctor
                             (pvVar7,*(void **)this,(void *)((int)selfObject + 0x35748),
                              "BaseClient.PetInventory.FoodBowlData",(void *)0xcc);
        }
        uStack_4 = 0xffffffff;
        FUN_00b52370(pvVar7);
        pvVar7 = Mem_Alloc(0x2e8);
        uStack_4 = 10;
        if (pvVar7 == (void *)0x0) {
          pvVar7 = (void *)0x0;
        }
        else {
          pvVar7 = PetUtilityScreenDataSource_ctor
                             (pvVar7,*(void **)this,(void *)((int)selfObject + 0x35748),
                              "BaseClient.PetInventory.FoodData",(void *)0xcd);
        }
        uStack_4 = 0xffffffff;
        FUN_00b52370(pvVar7);
        pvVar7 = Mem_Alloc(0x2e8);
        uStack_4 = 0xb;
        if (pvVar7 == (void *)0x0) {
          pvVar7 = (void *)0x0;
        }
        else {
          pvVar7 = PetUtilityScreenDataSource_ctor
                             (pvVar7,*(void **)this,(void *)((int)selfObject + 0x35748),
                              "BaseClient.PetInventory.VitaminData",(void *)0xce);
        }
        uStack_4 = 0xffffffff;
        FUN_00b52370(pvVar7);
        pvVar7 = Mem_Alloc(0x2e4);
        uStack_4 = 0xc;
        if (pvVar7 == (void *)0x0) {
          pvVar7 = (void *)0x0;
        }
        else {
          pvVar7 = PetEquippedUtilityDataSource_ctor
                             (pvVar7,*(void **)this,(void *)((int)selfObject + 0x35748),
                              "BaseClient.PetInventory.EquippedUtilityData");
        }
        uStack_4 = 0xffffffff;
        FUN_00b523d0(pvVar7);
        pvVar7 = Mem_Alloc(0x2e4);
        uStack_4 = 0xd;
        if (pvVar7 == (void *)0x0) {
          pvVar7 = (void *)0x0;
        }
        else {
          pvVar7 = PetEquippedWearablesDataSource_ctor
                             (pvVar7,*(void **)this,(void *)((int)selfObject + 0x35748),
                              "BaseClient.PetInventory.EquippedWearablesData");
        }
        uStack_4 = 0xffffffff;
        FUN_00b52440(pvVar7);
        pvVar7 = Mem_Alloc(600);
        uStack_4 = 0xe;
        if (pvVar7 == (void *)0x0) {
          pvVar7 = (void *)0x0;
        }
        else {
          pvVar7 = PetTricksDataSource_ctor(pvVar7,*(void **)this);
        }
        uStack_4 = 0xffffffff;
        FUN_00b524b0(pvVar7);
        pvVar7 = Mem_Alloc(600);
        uStack_4 = 0xf;
        if (pvVar7 == (void *)0x0) {
          pvVar7 = (void *)0x0;
        }
        else {
          pvVar7 = PetTricksEquippedDataSource_ctor(pvVar7,*(void **)this);
        }
        uStack_4 = 0xffffffff;
        FUN_00b52520(pvVar7);
      }
      ExceptionList = local_c;
      return;
    }
    puVar2 = (uint *)puVar5[0x4b];
    puVar1 = (uint *)((int)petData + (puVar5[0x49] & 3) * 4 + 0x10);
    puVar3 = (uint *)*puVar1;
    while (puVar3 != (uint *)0x0) {
      if (puVar3 == puVar5) {
        *puVar1 = puVar3[0x48];
        puVar3[0x48] = 0;
        puVar3[0x49] = 0;
        break;
      }
      puVar1 = puVar3 + 0x48;
      puVar3 = (uint *)*puVar1;
    }
    if (puVar5[0x4a] == 0) {
      *(uint *)((int)petData + 4) = puVar5[0x4b];
    }
    else {
      *(uint *)(puVar5[0x4a] + 300) = puVar5[0x4b];
    }
    if (puVar5[0x4b] == 0) {
      *(uint *)((int)petData + 8) = puVar5[0x4a];
    }
    else {
      *(uint *)(puVar5[0x4b] + 0x128) = puVar5[0x4a];
    }
    puVar5[0x4b] = 0;
    puVar5[0x4a] = 0;
    *(int *)((int)petData + 0xc) = *(int *)((int)petData + 0xc) + -1;
    if (puVar5[5] == 0) {
      (**(code **)(*(int *)(*(int *)this + 4) + 8))(puVar5[7],puVar5 + 3);
    }
    uVar4 = *puVar5;
    puVar5[0x4a] = *(uint *)((int)this + 0x6c);
    if (*(int *)((int)this + 0x6c) == 0) {
      *(uint **)((int)this + 0x68) = puVar5;
    }
    else {
      *(uint **)(*(int *)((int)this + 0x6c) + 300) = puVar5;
    }
    *(uint **)((int)this + 0x6c) = puVar5;
    uVar6 = uVar4 & 3;
    puVar5[0x49] = uVar4;
    puVar5[0x48] = *(uint *)((int)this + uVar6 * 4 + 0x74);
    *(uint **)((int)this + uVar6 * 4 + 0x74) = puVar5;
    *(int *)((int)this + 0x70) = *(int *)((int)this + 0x70) + 1;
    puVar5 = puVar2;
  } while( true );
}

