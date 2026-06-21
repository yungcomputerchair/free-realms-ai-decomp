// addr: 0x0052186a
// name: FUN_0052186a
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_0052186a(void * this, void * other) */

void * __thiscall FUN_0052186a(void *this,void *other)

{
                    /* Copy-constructs an unknown polymorphic aggregate with an embedded subobject
                       initialized via FUN_0051f888. Class identity is not evident. */
  *(undefined ***)this = &PTR_LAB_0175c4cc;
  *(undefined1 *)((int)this + 4) = *(undefined1 *)((int)other + 4);
  *(undefined ***)this = &PTR_GInterface_deletingDtor_variant_01770934;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  FUN_0051f888((int)other + 8);
  return this;
}

