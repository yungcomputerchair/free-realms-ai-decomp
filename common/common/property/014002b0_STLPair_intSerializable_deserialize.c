// addr: 0x014002b0
// name: STLPair_intSerializable_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool STLPair_intSerializable_deserialize(void * archive, void ** pair) */

bool __cdecl STLPair_intSerializable_deserialize(void *archive,void **pair)

{
  bool bVar1;
  undefined1 uVar2;
  
                    /* Deserializes a pair with an int key and a polymorphic serializable value. It
                       reads the key first, then calls the value object's virtual deserialize/read
                       method at vtable offset 0x24. */
  bVar1 = Deserializer_readInteger(archive,(int *)pair);
  if (!bVar1) {
    return false;
  }
  uVar2 = (**(code **)((int)pair[1] + 0x24))(archive);
  return (bool)uVar2;
}

