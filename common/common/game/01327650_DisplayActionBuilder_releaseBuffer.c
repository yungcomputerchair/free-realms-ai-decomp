// addr: 0x01327650
// name: DisplayActionBuilder_releaseBuffer
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void DisplayActionBuilder_releaseBuffer(void * this) */

void __fastcall DisplayActionBuilder_releaseBuffer(void *this)

{
  void *vector_owner;
  
                    /* Frees the auxiliary buffer/polymorphic-vector member at offset +4 if present.
                       Related destructors set Utility::DisplayActionBuilder::vftable before running
                       the same cleanup. */
  vector_owner = *(void **)((int)this + 4);
  if (vector_owner != (void *)0x0) {
    StdVector_destroyPolymorphicTriples(vector_owner);
                    /* WARNING: Subroutine does not return */
    _free(vector_owner);
  }
  return;
}

