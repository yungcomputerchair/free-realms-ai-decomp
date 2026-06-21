// addr: 0x013ffa30
// name: STLPair_intString_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool STLPair_intString_serialize(void * serializer, void * pair) */

bool __cdecl STLPair_intString_serialize(void *serializer,void *pair)

{
  bool bVar1;
  
                    /* Serializes a small record consisting of an integer followed by a std::string.
                       It writes the first dword with Serializer_appendInteger and then appends the
                       string at the following field. */
  bVar1 = Serializer_appendInteger(serializer,*(uint *)pair);
  if (!bVar1) {
    return false;
  }
  bVar1 = Serializer_appendString(serializer,(void *)((int)pair + 4));
  return bVar1;
}

