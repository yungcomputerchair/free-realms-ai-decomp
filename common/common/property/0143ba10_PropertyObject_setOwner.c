// addr: 0x0143ba10
// name: PropertyObject_setOwner
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyObject_setOwner(void * self, void * owner) */

void __thiscall PropertyObject_setOwner(void *this,void *self,void *owner)

{
                    /* Stores the supplied pointer/value into the second word of a property object.
                       The method is a simple setter used by several property/database routines. */
  *(void **)((int)this + 4) = self;
  return;
}

