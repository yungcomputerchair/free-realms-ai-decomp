// addr: 0x014cb4d0
// name: StdVector_PropertySetPtr_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool StdVector_PropertySetPtr_deserialize(void * this, void * stream) */

bool __thiscall StdVector_PropertySetPtr_deserialize(void *this,void *stream)

{
  bool bVar1;
  undefined1 uVar2;
  int iVar3;
  int local_8;
  void *local_4;
  
                    /* Deserializes a vector of PropertySet pointers by reading the count, reserving
                       capacity, deserializing each object pointer with ComponentFactory, pushing
                       it, and validating the stream terminator. */
  FUN_013c2690(&local_8);
  FUN_014caaf0(local_8);
  iVar3 = 0;
  if (0 < local_8) {
    do {
      bVar1 = ComponentFactory_deserializeObjectPointer(*(void ***)this);
      if (!bVar1) {
        return false;
      }
      local_4 = stream;
      StdVector_PropertySetPtr_pushBack(stream,&local_4);
      iVar3 = iVar3 + 1;
    } while (iVar3 < local_8);
  }
  uVar2 = FUN_013c26d0();
  return (bool)uVar2;
}

