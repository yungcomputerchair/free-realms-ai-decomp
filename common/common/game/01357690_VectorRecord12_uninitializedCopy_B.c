// addr: 0x01357690
// name: VectorRecord12_uninitializedCopy_B
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void VectorRecord12_uninitializedCopy_B(int ehState, void * unused, void *
   first, void * unused2, void * last, void * dest) */

void VectorRecord12_uninitializedCopy_B
               (int ehState,void *unused,void *first,void *unused2,void *last,void *dest)

{
                    /* Exception-aware wrapper that copies another 12-byte record type into
                       uninitialized vector storage via Record12_copy. The concrete record type is
                       not named in the briefing. */
  UninitializedCopy_Record12_range_B(unused,unused2,last);
  return;
}

