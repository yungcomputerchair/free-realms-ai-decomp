// addr: 0x00404831
// name: GObjectIterator_copyCtor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GObjectIterator_copyCtor(void * this, void * other) */

void * __thiscall GObjectIterator_copyCtor(void *this,void *other)

{
                    /* Constructs a GObjectIterator from another iterator: installs the
                       GObjectIterator vtable, clears state, then delegates copying of the pointed
                       iteration state through a virtual method when present. */
  *(undefined ***)this = GObjectIterator::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 4) = 0;
  if (*(int *)((int)other + 8) != 0) {
    (**(code **)**(undefined4 **)((int)other + 8))((undefined4 *)((int)this + 4),(int)other + 4);
  }
  return this;
}

