// addr: 0x005f1aa5
// name: StdVector16_destroyRangeThunk
// subsystem: common/networking/userdata_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdVector16_destroyRangeThunk(void * this, void * first, void * last,
   void * alloc) */

void __thiscall StdVector16_destroyRangeThunk(void *this,void *first,void *last,void *alloc)

{
                    /* Thin thunk to the element destruction/range cleanup helper used by the
                       16-byte vector implementation. Evidence: callers use it immediately before
                       freeing vector storage or after copying elements. */
  StdVector16_destroyRange(first,last);
  return;
}

