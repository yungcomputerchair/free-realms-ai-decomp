// addr: 0x00f9e710
// name: SCEA_BinXML_Streamable_clear
// subsystem: common/util/binxml_reader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SCEA_BinXML_Streamable_clear(void * this) */

void __fastcall SCEA_BinXML_Streamable_clear(void *this)

{
  int *_Memory;
  
                    /* Clears a Streamable by calling its virtual cleanup, decrementing/freeing any
                       refcounted backing buffer, and zeroing buffer pointers and flags. This is
                       common buffer-management code for BinXML Streamable-derived classes. */
  (**(code **)(*(int *)this + 0x14))();
  _Memory = *(int **)((int)this + 8);
  if (_Memory != (int *)0x0) {
    *_Memory = *_Memory + -1;
    if (*_Memory == 0) {
                    /* WARNING: Subroutine does not return */
      _free(_Memory);
    }
    *(undefined4 *)((int)this + 8) = 0;
  }
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined1 *)((int)this + 5) = 0;
  *(undefined1 *)((int)this + 4) = 0;
  return;
}

