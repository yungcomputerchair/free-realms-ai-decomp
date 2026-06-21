// addr: 0x013ffa90
// name: STLPair_stringInt_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool STLPair_stringInt_serialize(void * serializer, void * pair) */

bool __cdecl STLPair_stringInt_serialize(void *serializer,void *pair)

{
  bool bVar1;
  
                    /* Serializes a record consisting of a std::string followed by an integer at
                       offset 0x1c. It returns early if the string append fails. */
  bVar1 = Serializer_appendString(serializer,pair);
  if (!bVar1) {
    return false;
  }
  bVar1 = Serializer_appendInteger(serializer,*(uint *)((int)pair + 0x1c));
  return bVar1;
}

