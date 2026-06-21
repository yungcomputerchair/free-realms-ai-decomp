// addr: 0x013004c0
// name: STLVector_serializablePointer_deserialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool STLVector_serializablePointer_deserialize(void * this, void * serializer)
    */

bool __thiscall STLVector_serializablePointer_deserialize(void *this,void *serializer)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  int local_8;
  void *local_4;
  
                    /* Deserializes a vector of serializable object pointers by reading the element
                       count, reserving storage, and appending each ComponentFactory-created
                       pointer. */
  FUN_013c2690(&local_8);
  FUN_012fe3e0(local_8);
  iVar3 = 0;
  if (0 < local_8) {
    do {
      bVar1 = ComponentFactory_deserializeObjectPointer(*(void ***)this);
      if (!bVar1) {
        return false;
      }
      local_4 = serializer;
      FUN_013003e0(&local_4);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_8);
  }
  uVar2 = FUN_013c26d0();
  return (bool)uVar2;
}

