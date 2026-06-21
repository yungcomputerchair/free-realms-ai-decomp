// addr: 0x013ffbf0
// name: SerializeDwordAndObjectElement
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool SerializeDwordAndObjectElement(void * stream, void ** element) */

bool __cdecl SerializeDwordAndObjectElement(void *stream,void **element)

{
  bool bVar1;
  int iVar2;
  
                    /* Serializes an element containing a dword followed by a polymorphic object
                       pointer, invoking the object's vtable slot 0x28 after the dword succeeds. */
  bVar1 = Serializer_appendInteger(stream,(uint)*element);
  if (!bVar1) {
    return false;
  }
  iVar2 = (**(code **)(*(int *)element[1] + 0x28))(stream);
  return iVar2 != 0;
}

