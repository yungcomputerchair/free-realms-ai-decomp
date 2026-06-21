// addr: 0x012adf80
// name: CollectionDB_loadCollection
// subsystem: common/common/property
// source (binary assert): common/common/property/CollectionDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int * __thiscall CollectionDB_loadCollection(void *param_1,void *param_2)

{
  char cVar1;
  int *this;
  void *pvVar2;
  int iVar3;
  undefined4 *puVar4;
  undefined1 *collection_name;
  uint uStack_30;
  void *pvStack_1c;
  void *pvStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Loads and deserializes a collection from DBM storage by name, sets/fixes its
                       name if needed, caches it in the collection map, and reports corrupt data.
                       Evidence: CollectionDB.cpp strings 'result == true' and 'Corrupted
                       collection! %s', CollectionData_ctor, virtual deserialize, and cache
                       insertion. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166cb53;
  local_c = ExceptionList;
  uStack_30 = DAT_01b839d8 ^ (uint)&stack0xffffffd4;
  ExceptionList = &local_c;
  cVar1 = (**(code **)(**(int **)((int)param_1 + 0xc) + 0x10))(param_2);
  if (cVar1 != '\0') {
    PacketBuffer_init(&stack0xffffffdc);
    puStack_8 = (undefined1 *)0x0;
    (**(code **)(**(int **)((int)param_1 + 0xc) + 0x14))(param_2,&stack0xffffffdc);
    puStack_8 = Mem_Alloc(0x90);
    if (puStack_8 == (void *)0x0) {
      this = (int *)0x0;
    }
    else {
      this = (int *)CollectionData_ctor();
    }
    pvStack_10 = (void *)((uint)pvStack_10 & 0xffffff00);
    collection_name = &stack0xffffffd4;
    cVar1 = (**(code **)(*this + 0x24))();
    if (cVar1 != '\0') {
      if (cVar1 != '\x01') {
        FUN_012f5a60("result == true","..\\common\\common\\property\\CollectionDB.cpp",0x71);
      }
      pvVar2 = Collection_getPropertyList(this);
      if (*(uint *)((int)param_2 + 0x18) < 0x10) {
        iVar3 = (int)param_2 + 4;
      }
      else {
        iVar3 = *(int *)((int)param_2 + 4);
      }
      iVar3 = FUN_00f942a0(0,*(undefined4 *)((int)pvVar2 + 0x14),iVar3,
                           *(undefined4 *)((int)param_2 + 0x14));
      if (iVar3 != 0) {
        CollectionData_setName(this,param_2,collection_name);
      }
      puVar4 = (undefined4 *)
               CollectionDB_getOrCreateCollectionSlotByName(param_1,param_2,collection_name);
      *puVar4 = this;
      RawBuffer_free(&uStack_30);
      ExceptionList = pvStack_1c;
      return this;
    }
    WAErrorLog_write("Corrupted collection! %s");
    (**(code **)*this)(1);
    puStack_8 = (undefined1 *)0xffffffff;
    RawBuffer_free(&stack0xffffffdc);
  }
  ExceptionList = pvStack_10;
  return (int *)0x0;
}

