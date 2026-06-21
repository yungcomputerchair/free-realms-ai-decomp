// addr: 0x013ffb40
// name: SerializeVirtualObjectPtrElement_alt
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool SerializeVirtualObjectPtrElement_alt(void * stream, void ** object_ptr)
    */

bool __cdecl SerializeVirtualObjectPtrElement_alt(void *stream,void **object_ptr)

{
  int iVar1;
  
                    /* Template duplicate of the polymorphic pointer element serializer that
                       dispatches vtable slot 0x28. */
  iVar1 = (**(code **)(*(int *)*object_ptr + 0x28))(stream);
  return iVar1 != 0;
}

