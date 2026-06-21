// addr: 0x00408ddc
// name: GInterface_dtor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GInterface_dtor(void * this) */

void __fastcall GInterface_dtor(void *this)

{
                    /* Destructor-like cleanup for a GInterface-derived object; it calls a
                       helper/base destructor then restores the GInterface vtable. */
  FUN_004c9f6e();
  *(undefined ***)this = GInterface::vftable;
  return;
}

