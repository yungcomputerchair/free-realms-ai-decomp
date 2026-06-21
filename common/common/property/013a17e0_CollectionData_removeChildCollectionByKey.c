// addr: 0x013a17e0
// name: CollectionData_removeChildCollectionByKey
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionData_removeChildCollectionByKey(void * this, int key) */

void __fastcall CollectionData_removeChildCollectionByKey(void *this,int key)

{
  void *this_00;
  void *unused1;
  void *unused2;
  void *pvVar1;
  undefined4 *extraout_EAX;
  int *unaff_EDI;
  undefined1 local_8 [8];
  
                    /* Finds a child collection map node by key, releases the contained object if
                       present, clears the node payload, and erases the node. Evidence is callers
                       CollectionData_clearChildCollections/FUN_013a2900 plus lookup, vtable
                       destructor call, and erase helper. */
  this_00 = (void *)((int)this + 0x58);
  CollectionDataChildTree_lowerBound(this_00,local_8,&stack0x00000004,unaff_EDI);
  unused1 = (void *)*extraout_EAX;
  unused2 = (void *)extraout_EAX[1];
  pvVar1 = *(void **)((int)this + 0x5c);
  if ((unused1 == (void *)0x0) || (unused1 != this_00)) {
    FUN_00d83c2d();
  }
  if (unused2 != pvVar1) {
    if (unused1 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (unused2 == *(void **)((int)unused1 + 4)) {
      FUN_00d83c2d();
    }
    if (*(int *)((int)unused2 + 0x10) != 0) {
      if (unused2 == *(void **)((int)unused1 + 4)) {
        FUN_00d83c2d();
      }
      if (*(undefined4 **)((int)unused2 + 0x10) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)((int)unused2 + 0x10))(1);
      }
    }
    if (unused2 == *(void **)((int)unused1 + 4)) {
      FUN_00d83c2d();
    }
    *(undefined4 *)((int)unused2 + 0x10) = 0;
    CollectionDataChildTree_eraseNode(this_00,local_8,unused1,unused2,unaff_EDI);
  }
  return;
}

