// addr: 0x012ad4c0
// name: CollectionDB_clear
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionDB_clear(void * this) */

void __fastcall CollectionDB_clear(void *this)

{
                    /* Clears a CollectionDB-like object by releasing an owned object at +0xc,
                       recursively destroying tree/list nodes, and resetting the container sentinel
                       and size to empty. It leaves the object allocated. */
  if (*(int *)((int)this + 0xc) != 0) {
    CollectionDB_reinsertSynchronizableCollections(this);
    (**(code **)(**(int **)((int)this + 0xc) + 0x20))();
    if (*(undefined4 **)((int)this + 0xc) != (undefined4 *)0x0) {
      (**(code **)**(undefined4 **)((int)this + 0xc))(1);
    }
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  FUN_012acc40(*(undefined4 *)(*(int *)((int)this + 4) + 4));
  *(int *)(*(int *)((int)this + 4) + 4) = *(int *)((int)this + 4);
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)*(undefined4 *)((int)this + 4) = *(undefined4 *)((int)this + 4);
  *(int *)(*(int *)((int)this + 4) + 8) = *(int *)((int)this + 4);
  return;
}

