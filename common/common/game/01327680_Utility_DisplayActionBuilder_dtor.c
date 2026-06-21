// addr: 0x01327680
// name: Utility_DisplayActionBuilder_dtor
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Utility_DisplayActionBuilder_dtor(void * this) */

void __fastcall Utility_DisplayActionBuilder_dtor(void *this)

{
  void *vector_owner;
  
                    /* Destructor for Utility::DisplayActionBuilder; assigns its vtable and releases
                       the owned buffer/vector at offset +4. The vtable symbol gives the class name.
                        */
  vector_owner = *(void **)((int)this + 4);
  *(undefined ***)this = Utility::DisplayActionBuilder::vftable;
  if (vector_owner != (void *)0x0) {
    StdVector_destroyPolymorphicTriples(vector_owner);
                    /* WARNING: Subroutine does not return */
    _free(vector_owner);
  }
  return;
}

