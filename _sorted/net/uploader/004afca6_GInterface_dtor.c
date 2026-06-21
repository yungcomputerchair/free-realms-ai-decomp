// addr: 0x004afca6
// name: GInterface_dtor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GInterface_dtor(void * this) */

void __fastcall GInterface_dtor(void *this)

{
                    /* Destructor-like cleanup for a GInterface-derived object; calls a helper/base
                       cleanup routine and restores the GInterface vtable. */
  FUN_004ac1ac();
  *(undefined ***)this = GInterface::vftable;
  return;
}

