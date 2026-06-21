// addr: 0x013d52d0
// name: CollectionItemRecord_moveFrom
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionItemRecord_moveFrom(void * this, void * sourceRecord) */

void __thiscall CollectionItemRecord_moveFrom(void *this,void *sourceRecord)

{
                    /* Copies scalar fields from a source collection item record and destroys/clears
                       its two embedded collection-element vectors. */
  if (sourceRecord != (void *)0x0) {
    *(undefined4 *)((int)this + 4) = *(undefined4 *)((int)sourceRecord + 4);
    *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)sourceRecord + 8);
    *(undefined1 *)((int)this + 0xc) = *(undefined1 *)((int)sourceRecord + 0xc);
    CollectionElementVector_copyAssign((int)sourceRecord + 0x10);
    CollectionElementVector_copyAssign((int)sourceRecord + 0x20);
  }
  return;
}

