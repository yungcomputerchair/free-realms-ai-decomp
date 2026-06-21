// addr: 0x013c1a50
// name: Engine_PageFilter_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * Engine_PageFilter_ctor(void * this) */

void * __fastcall Engine_PageFilter_ctor(void *this)

{
                    /* Constructs Engine::PageFilter by installing Engine::PageFilter::vftable,
                       clearing fields +4/+8, and setting field +0xc to 1. Evidence is the explicit
                       namespaced vftable symbol. */
  *(undefined ***)this = Engine::PageFilter::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 1;
  return this;
}

