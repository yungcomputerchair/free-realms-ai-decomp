// addr: 0x012ae210
// name: CollectionDB_loadCollectionFromStorage
// subsystem: common/common/property
// source (binary assert): common/common/property/CollectionDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int * __thiscall CollectionDB_loadCollectionFromStorage(void *param_1,undefined4 param_2)

{
  char cVar1;
  int *collection;
  uint uStack_2c;
  undefined1 local_20 [8];
  void *pvStack_18;
  void *pvStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  void *pvStack_4;
  
                    /* Loads a serialized collection blob from mDBMStorage, constructs a
                       CollectionData, deserializes it, inserts it into the CollectionDB cache, and
                       returns it. Returns null if storage lookup or deserialization fails. */
  pvStack_4 = (void *)0xffffffff;
  puStack_8 = &LAB_0166cb83;
  local_c = ExceptionList;
  uStack_2c = DAT_01b839d8 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  if (*(int *)((int)param_1 + 0xc) == 0) {
    FUN_012f5a60("mDBMStorage","..\\common\\common\\property\\CollectionDB.cpp",0x80);
  }
  PacketBuffer_init(local_20);
  pvStack_4 = (void *)0x0;
  cVar1 = (**(code **)(**(int **)((int)param_1 + 0xc) + 0x18))(param_2,local_20);
  if (cVar1 != '\0') {
    pvStack_4 = Mem_Alloc(0x90);
    local_c._0_1_ = 1;
    if (pvStack_4 == (void *)0x0) {
      collection = (int *)0x0;
    }
    else {
      collection = (int *)CollectionData_ctor();
    }
    local_c = (void *)((uint)local_c._1_3_ << 8);
    cVar1 = (**(code **)(*collection + 0x24))(&stack0xffffffd8);
    if (cVar1 != '\0') {
      CollectionDB_setCollection(param_1,collection);
      uStack_10 = 0xffffffff;
      RawBuffer_free(&uStack_2c);
      ExceptionList = pvStack_18;
      return collection;
    }
    (**(code **)*collection)(1);
  }
  local_c = (void *)0xffffffff;
  RawBuffer_free(&stack0xffffffd8);
  ExceptionList = pvStack_14;
  return (int *)0x0;
}

