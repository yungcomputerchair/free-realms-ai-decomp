// addr: 0x014000c0
// name: ComponentFactory_deserializeObjectPointer
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ComponentFactory_deserializeObjectPointer(void ** outObject) */

bool __cdecl ComponentFactory_deserializeObjectPointer(void **outObject)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 *extraout_EAX;
  int *piVar3;
  uint *unaff_EDI;
  undefined4 local_4;
  
                    /* Reads a packed component type id, asks the component factory to create an
                       instance, stores it in the output pointer, then invokes the object virtual
                       deserialize slot at vtable+0x24. This is a generic typed-object pointer
                       deserializer used by several containers/commands. */
  bVar1 = PacketBuffer_readPackedUInt(outObject,&local_4,unaff_EDI);
  if (bVar1) {
    ComponentFactory_initSingleton();
    piVar3 = (int *)(**(code **)*extraout_EAX)(local_4);
    *outObject = piVar3;
    if (piVar3 != (int *)0x0) {
      uVar2 = (**(code **)(*piVar3 + 0x24))(outObject);
      return (bool)uVar2;
    }
  }
  return false;
}

