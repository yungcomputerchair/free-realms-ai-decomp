// addr: 0x004f27e6
// name: FUN_004f27e6
// subsystem: common/networking/synch_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Pair8_uninitializedCopyRangeWrapper(void * first, void * last, void *
   out, void * allocator) */

void __cdecl Pair8_uninitializedCopyRangeWrapper(void *first,void *last,void *out,void *allocator)

{
                    /* Generic 8-byte pair uninitialized-copy wrapper that forwards to
                       Pair8_uninitializedCopyRange. It is container support rather than synch
                       command logic. */
  Pair8_uninitializedCopyRange(first,last,out,allocator,last,0);
  return;
}

