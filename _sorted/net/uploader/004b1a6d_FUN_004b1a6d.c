// addr: 0x004b1a6d
// name: FUN_004b1a6d
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_004b1a6d(void * this, void * other) */

void * __thiscall FUN_004b1a6d(void *this,void *other)

{
                    /* Constructs/copies an unknown polymorphic object: copies a byte flag, installs
                       an anonymous vtable, and copies/destroys an embedded subobject via
                       FUN_004b022f. Class identity is not evident. */
  *(undefined ***)this = &PTR_LAB_0175c4cc;
  *(undefined1 *)((int)this + 4) = *(undefined1 *)((int)other + 4);
  *(undefined ***)this = &PTR_GInterface_deletingDtor_alt_0176b9f8;
  FUN_004b022f((int)other + 8);
  return this;
}

