// addr: 0x01327750
// name: Utility_DisplayActionBuilder_deletingDtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Utility_DisplayActionBuilder_deletingDtor(void * this, char flags) */

void * __thiscall Utility_DisplayActionBuilder_deletingDtor(void *this,char flags)

{
  void *vector_owner;
  
                    /* Scalar deleting destructor for Utility::DisplayActionBuilder; it runs the
                       destructor logic and frees this when bit 0 is set. The vtable symbol gives
                       the class name. */
  vector_owner = *(void **)((int)this + 4);
  *(undefined ***)this = Utility::DisplayActionBuilder::vftable;
  if (vector_owner != (void *)0x0) {
    StdVector_destroyPolymorphicTriples(vector_owner);
                    /* WARNING: Subroutine does not return */
    _free(vector_owner);
  }
  if ((flags & 1U) != 0) {
                    /* WARNING: Subroutine does not return */
    _free(this);
  }
  return this;
}

