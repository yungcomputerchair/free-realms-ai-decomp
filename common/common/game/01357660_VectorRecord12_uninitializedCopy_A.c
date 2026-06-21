// addr: 0x01357660
// name: VectorRecord12_uninitializedCopy_A
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void VectorRecord12_uninitializedCopy_A(int ehState, void * unused, void *
   first, void * unused2, void * last, void * dest) */

void VectorRecord12_uninitializedCopy_A
               (int ehState,void *unused,void *first,void *unused2,void *last,void *dest)

{
                    /* Exception-aware wrapper that copies 12-byte records into uninitialized vector
                       storage using helper 01350080. The extra arguments are template/EH artifacts
                       in the decompile. */
  UninitializedCopy_Record12_range_A(unused,unused2,last);
  return;
}

