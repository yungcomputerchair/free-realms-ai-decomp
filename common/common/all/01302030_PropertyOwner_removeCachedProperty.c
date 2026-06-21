// addr: 0x01302030
// name: PropertyOwner_removeCachedProperty
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PropertyOwner_removeCachedProperty(void * this) */

bool __fastcall PropertyOwner_removeCachedProperty(void *this)

{
  bool bVar1;
  int in_EDX;
  
                    /* If the embedded property/cache pointer at offset 0x2c is non-null, delegates
                       to the PropertySet remove helper and returns its result. */
  if (*(void **)((int)this + 0x2c) == (void *)0x0) {
    return false;
  }
  bVar1 = PropertySet_removeProperty(*(void **)((int)this + 0x2c),in_EDX);
  return bVar1;
}

