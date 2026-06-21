// addr: 0x01380680
// name: ObjectMultimap_removeIfBucketEmpty
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ObjectMultimap_removeIfBucketEmpty(void * map, int key_) */

void ObjectMultimap_removeIfBucketEmpty(void *map,int key_)

{
  int iVar1;
  int iVar2;
  void *this;
  int unaff_EDI;
  int *piVar3;
  void **ppvVar4;
  int local_8;
  int local_4;
  
                    /* Finds a key bucket and erases the multimap key when the associated object
                       slot becomes empty. */
  ppvVar4 = &map;
  piVar3 = &local_8;
  IntToObjectTree_findOrCreateSlot(&key_);
  FUN_0137bb00(piVar3,ppvVar4);
  iVar2 = IntToObjectTree_findOrCreateSlot(&key_);
  iVar1 = *(int *)(iVar2 + 4);
  if ((local_8 == 0) || (local_8 != iVar2)) {
    FUN_00d83c2d();
  }
  if (local_4 != iVar1) {
    ppvVar4 = &map;
    this = (void *)IntToObjectTree_findOrCreateSlot(&key_);
    STLMultimapInt_eraseKey(this,ppvVar4,unaff_EDI);
  }
  return;
}

