// addr: 0x013ffd10
// name: STLPair_intDwordTriple_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool STLPair_intDwordTriple_serialize(void * archive, int * fields) */

bool __cdecl STLPair_intDwordTriple_serialize(void *archive,int *fields)

{
  bool bVar1;
  
                    /* Serializes a four-dword record, likely a map pair with one int key and a
                       three-dword value. It writes each dword sequentially and stops on the first
                       primitive serializer failure. */
  bVar1 = Serializer_appendInteger(archive,*fields);
  if (bVar1) {
    bVar1 = Serializer_appendInteger(archive,fields[1]);
    if (bVar1) {
      bVar1 = Serializer_appendInteger(archive,fields[2]);
      if (bVar1) {
        bVar1 = Serializer_appendInteger(archive,fields[3]);
        return bVar1;
      }
    }
  }
  return false;
}

