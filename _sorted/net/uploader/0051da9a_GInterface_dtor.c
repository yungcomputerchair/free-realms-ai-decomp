// addr: 0x0051da9a
// name: GInterface_dtor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GInterface_dtor(void * this) */

void __fastcall GInterface_dtor(void *this)

{
                    /* Destructor-like GInterface cleanup: calls a helper/base destructor and
                       restores the GInterface vtable. */
  FUN_004220f2();
  *(undefined ***)this = GInterface::vftable;
  return;
}

