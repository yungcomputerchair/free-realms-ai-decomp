// addr: 0x012ae350
// name: CollectionDB_getAllCollections
// subsystem: common/common/property
// source (binary assert): common/common/property/CollectionDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionDB_getAllCollections(void * this, void * outCollections) */

void __thiscall CollectionDB_getAllCollections(void *this,void *outCollections)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  void *unaff_EDI;
  void *local_8;
  undefined4 *local_4;
  
                    /* Clears/destructs the caller-provided collection-record vector and then asks
                       mDBMStorage to populate it. The method asserts mDBMStorage before dispatching
                       through its virtual method at offset 8. */
  puVar1 = *(undefined4 **)((int)this + 4);
  local_4 = (undefined4 *)*puVar1;
  local_8 = this;
  while( true ) {
    puVar3 = local_4;
    pvVar2 = local_8;
    if ((local_8 == (void *)0x0) || (local_8 != this)) {
      FUN_00d83c2d();
    }
    if (puVar3 == puVar1) break;
    if (pvVar2 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar3 == *(undefined4 **)((int)pvVar2 + 4)) {
      FUN_00d83c2d();
    }
    StdVector28_pushBack(outCollections,puVar3 + 3,unaff_EDI);
    CollectionDB_TreeIterator_next((int *)&local_8);
  }
  if (*(int *)((int)this + 0xc) == 0) {
    FUN_012f5a60("mDBMStorage","..\\common\\common\\property\\CollectionDB.cpp",300);
  }
                    /* WARNING: Could not recover jumptable at 0x012ae3e0. Too many branches */
                    /* WARNING: Treating indirect jump as call */
  (**(code **)(**(int **)((int)this + 0xc) + 8))();
  return;
}

