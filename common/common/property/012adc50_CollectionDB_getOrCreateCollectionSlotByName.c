// addr: 0x012adc50
// name: CollectionDB_getOrCreateCollectionSlotByName
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int CollectionDB_getOrCreateCollectionSlotByName(void * collection_db, void *
   collection_name) */

int __thiscall
CollectionDB_getOrCreateCollectionSlotByName(void *this,void *collection_db,void *collection_name)

{
  void *key_string;
  void *hint_tree;
  int iVar1;
  void *pvVar2;
  undefined4 *puVar3;
  undefined1 local_34 [8];
  undefined1 local_2c [32];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
  pvVar2 = collection_db;
                    /* Looks up a collection by string key, inserts a new node if not found, and
                       returns the collection storage slot within the tree node. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166ca88;
  local_c = ExceptionList;
  key_string = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffc0);
  ExceptionList = &local_c;
  hint_tree = (void *)RBTreeString_lowerBound_collectionMap(collection_db);
  if (this == (void *)0x0) {
    FUN_00d83c2d();
  }
  if (hint_tree != *(void **)((int)this + 4)) {
    if (*(uint *)((int)hint_tree + 0x24) < 0x10) {
      iVar1 = (int)hint_tree + 0x10;
    }
    else {
      iVar1 = *(int *)((int)hint_tree + 0x10);
    }
    iVar1 = FUN_00f942a0(0,*(undefined4 *)((int)pvVar2 + 0x14),iVar1,
                         *(undefined4 *)((int)hint_tree + 0x20));
    if (-1 < iVar1) goto LAB_012adcfa;
  }
  collection_db = (void *)0x0;
  pvVar2 = (void *)CollectionDB_CollectionSlotValue_copyConstruct(pvVar2,&collection_db);
  local_4 = 0;
  puVar3 = CollectionDB_StringTree_insertOrFind(this,local_34,this,hint_tree,pvVar2,key_string);
  this = (void *)*puVar3;
  hint_tree = (void *)puVar3[1];
  local_4 = 0xffffffff;
  StdString_dtor_012ac210(local_2c);
LAB_012adcfa:
  if (this == (void *)0x0) {
    FUN_00d83c2d();
  }
  if (hint_tree == *(void **)((int)this + 4)) {
    FUN_00d83c2d();
  }
  ExceptionList = local_c;
  return (int)hint_tree + 0x28;
}

