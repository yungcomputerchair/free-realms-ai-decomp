// addr: 0x013d2dc0
// name: PropertyArchive_serializeNestedObject
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PropertyArchive_serializeNestedObject(void * this, void * object) */

bool __thiscall PropertyArchive_serializeNestedObject(void *this,void *object)

{
  void *stream;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Serializes a nested object inside a begin/end pair. It calls a virtual
                       begin/write-header method, serializes the object with FUN_01442780, then
                       calls the virtual end method if all steps succeeded. */
  stream = object;
  cVar1 = (**(code **)(*(int *)this + 0x10))(object,&object);
  if (cVar1 != '\0') {
    bVar2 = NetworkCommand_deserializeTwoCommonFields(this,stream);
    if (bVar2) {
      uVar3 = (**(code **)(*(int *)this + 0x14))(stream);
      return (bool)uVar3;
    }
  }
  return false;
}

