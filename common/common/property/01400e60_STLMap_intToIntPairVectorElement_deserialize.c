// addr: 0x01400e60
// name: STLMap_intToIntPairVectorElement_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool STLMap_intToIntPairVectorElement_deserialize(void * stream, int * entry)
    */

bool __cdecl STLMap_intToIntPairVectorElement_deserialize(void *stream,int *entry)

{
  bool bVar1;
  undefined1 uVar2;
  
                    /* Deserializes a map element containing two integer fields followed by a
                       vector/list payload. It reads entry[0], entry[1], then delegates to the
                       vector deserializer at entry+2. */
  bVar1 = Serializer_appendInteger(stream,*entry);
  if (bVar1) {
    bVar1 = Serializer_appendInteger(stream,entry[1]);
    if (bVar1) {
      uVar2 = FUN_01400b20(entry + 2);
      return (bool)uVar2;
    }
  }
  return false;
}

