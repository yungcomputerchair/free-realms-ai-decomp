// addr: 0x012fa8d0
// name: PersistentComponent_serializePointer
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PersistentComponent_serializePointer(void * serializer, void *
   componentPtr) */

bool __cdecl PersistentComponent_serializePointer(void *serializer,void *componentPtr)

{
  bool bVar1;
  int iVar2;
  
                    /* Serializes a nullable persistent component pointer by writing a null flag,
                       then invoking the component's virtual serialize method when non-null. */
  if (componentPtr == (void *)0x0) {
    bVar1 = Serializer_appendInteger(serializer,1);
    return bVar1;
  }
  bVar1 = Serializer_appendInteger(serializer,0);
  if (!bVar1) {
    return false;
  }
  iVar2 = (**(code **)(*(int *)componentPtr + 0x28))(serializer);
  return iVar2 != 0;
}

