// addr: 0x012efaf0
// name: NetworkService_getDefaultHostString
// subsystem: common/networking
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: char * NetworkService_getDefaultHostString(void * this) */

char * __fastcall NetworkService_getDefaultHostString(void *this)

{
                    /* Returns the string object/member at offset 4, which NetworkService code uses
                       as one of its endpoint host strings. Evidence: paired with 012efb00 returning
                       offset 0x20 and called from NetworkService connection setup. */
  return (char *)((int)this + 4);
}

