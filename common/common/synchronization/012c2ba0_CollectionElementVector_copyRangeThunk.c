// addr: 0x012c2ba0
// name: CollectionElementVector_copyRangeThunk
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionElementVector_copyRangeThunk(void * this, void * first, void *
   last, void * dest) */

void __thiscall CollectionElementVector_copyRangeThunk(void *this,void *first,void *last,void *dest)

{
  undefined4 local_4;
  
                    /* Small wrapper around the collection-element range construction helper used by
                       vector-management code. */
  local_4 = (uint)this & 0xffffff00;
  CollectionElementVector_constructRange(first,last,dest,this,dest,local_4);
  return;
}

