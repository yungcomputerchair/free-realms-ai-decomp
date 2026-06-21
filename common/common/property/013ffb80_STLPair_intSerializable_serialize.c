// addr: 0x013ffb80
// name: STLPair_intSerializable_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool STLPair_intSerializable_serialize(void * archive, void ** pair) */

bool __cdecl STLPair_intSerializable_serialize(void *archive,void **pair)

{
  bool bVar1;
  int iVar2;
  
                    /* Serializes a pair with an int key and a polymorphic serializable value. It
                       writes the key first and then invokes the value object's virtual serialize
                       method at vtable offset 0x28. */
  bVar1 = Serializer_appendInteger(archive,(uint)*pair);
  if (!bVar1) {
    return false;
  }
  iVar2 = (**(code **)((int)pair[1] + 0x28))(archive);
  return iVar2 != 0;
}

