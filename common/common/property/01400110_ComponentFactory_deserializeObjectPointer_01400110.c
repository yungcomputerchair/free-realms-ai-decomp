// addr: 0x01400110
// name: ComponentFactory_deserializeObjectPointer_01400110
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ComponentFactory_deserializeObjectPointer_01400110(void ** outObject) */

bool __cdecl ComponentFactory_deserializeObjectPointer_01400110(void **outObject)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 *extraout_EAX;
  int *piVar3;
  uint *unaff_EDI;
  undefined4 local_4;
  
                    /* Duplicate typed-object pointer deserializer: reads a packed type id, creates
                       an object via the component factory, writes the pointer, then calls its
                       virtual deserialize method. Kept with an address suffix because it is a
                       separate identical template/helper instance. */
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

