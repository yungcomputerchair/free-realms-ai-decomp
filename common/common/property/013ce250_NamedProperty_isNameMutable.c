// addr: 0x013ce250
// name: NamedProperty_isNameMutable
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool NamedProperty_isNameMutable(void * this) */

bool __fastcall NamedProperty_isNameMutable(void *this)

{
                    /* Returns the byte flag at offset 0x88, which guards name mutation. Evidence is
                       caller NamedProperty_setNameIfMutable and the direct flag load. */
  return (bool)*(undefined1 *)((int)this + 0x88);
}

