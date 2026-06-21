// addr: 0x013fff30
// name: STLPair_intDwordTriple_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool STLPair_intDwordTriple_deserialize(void * archive, int * fields) */

bool __cdecl STLPair_intDwordTriple_deserialize(void *archive,int *fields)

{
  bool bVar1;
  
                    /* Deserializes four consecutive dwords, likely an int key plus three-dword
                       value record. It returns false immediately if any primitive read fails. */
  bVar1 = Deserializer_readInteger(archive,fields);
  if (bVar1) {
    bVar1 = Deserializer_readInteger(archive,fields + 1);
    if (bVar1) {
      bVar1 = Deserializer_readInteger(archive,fields + 2);
      if (bVar1) {
        bVar1 = Deserializer_readInteger(archive,fields + 3);
        return bVar1;
      }
    }
  }
  return false;
}

