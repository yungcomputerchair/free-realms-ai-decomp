// addr: 0x013ffb20
// name: SerializeVirtualObjectPtrElement
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool SerializeVirtualObjectPtrElement(void * stream, void ** object_ptr) */

bool __cdecl SerializeVirtualObjectPtrElement(void *stream,void **object_ptr)

{
  int iVar1;
  
                    /* Serializes a pointed-to polymorphic object by invoking vtable slot 0x28 and
                       returning whether it succeeded. */
  iVar1 = (**(code **)(*(int *)*object_ptr + 0x28))(stream);
  return iVar1 != 0;
}

