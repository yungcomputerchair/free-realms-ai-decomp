// addr: 0x013ffa60
// name: STLPair_intBool_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool STLPair_intBool_serialize(void * archive, undefined4 int, void * pair) */

bool __cdecl STLPair_intBool_serialize(void *archive,uint *int,void *pair)

{
  bool bVar1;
  
                    /* Serializes a map pair containing an int key and bool value. It writes the
                       first 32-bit field and, if successful, writes the byte-sized boolean stored
                       after it. */
  bVar1 = Serializer_appendInteger(archive,*int);
  if (!bVar1) {
    return false;
  }
  bVar1 = Serializer_appendInteger(archive,(uint)(byte)int[1]);
  return bVar1;
}

