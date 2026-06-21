// addr: 0x013ffb60
// name: STLVector_cardInstance_serializeElement
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool STLVector_cardInstance_serializeElement(void * serializer, void * card)
    */

bool __cdecl STLVector_cardInstance_serializeElement(void *serializer,void *card)

{
  int iVar1;
  
                    /* Serializes or visits one card instance by invoking the element's virtual
                       function at offset 0x28 and returning whether it succeeded. Evidence is the
                       sole caller STLVector_cardInstance_serialize. */
  iVar1 = (**(code **)(*(int *)card + 0x28))(serializer);
  return iVar1 != 0;
}

