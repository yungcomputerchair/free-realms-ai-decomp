// addr: 0x01400050
// name: STLTripleDword_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool STLTripleDword_deserialize(void * archive, int * fields) */

bool __cdecl STLTripleDword_deserialize(void *archive,int *fields)

{
  bool bVar1;
  
                    /* Deserializes three consecutive 32-bit fields using the primitive dword
                       reader. It propagates failure from any read by returning the low-byte boolean
                       result. */
  bVar1 = Deserializer_readInteger(archive,fields);
  if (bVar1) {
    bVar1 = Deserializer_readInteger(archive,fields + 1);
    if (bVar1) {
      bVar1 = Deserializer_readInteger(archive,fields + 2);
      return bVar1;
    }
  }
  return false;
}

