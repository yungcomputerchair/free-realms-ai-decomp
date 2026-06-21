// addr: 0x0134c310
// name: ComponentFactory_deserializeObjectPointer
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ComponentFactory_deserializeObjectPointer(void * packet, void **
   outObject) */

bool __cdecl ComponentFactory_deserializeObjectPointer(void *packet,void **outObject)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 *extraout_EAX;
  int *piVar3;
  uint *unaff_EDI;
  int local_8;
  undefined4 uStack_4;
  
                    /* Deserializes a nullable factory-created object pointer: releases any existing
                       output object, reads the null marker/type id, creates via ComponentFactory,
                       then calls the object's deserialize method. */
  bVar1 = Deserializer_readInteger(packet,&local_8);
  if (!bVar1) {
    return false;
  }
  if (*outObject != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*outObject)(1);
    *outObject = (void *)0x0;
  }
  if (local_8 != 0) {
    *outObject = (void *)0x0;
    return true;
  }
  bVar1 = PacketBuffer_readPackedUInt(packet,&uStack_4,unaff_EDI);
  if (!bVar1) {
    return false;
  }
  ComponentFactory_initSingleton();
  piVar3 = (int *)(**(code **)*extraout_EAX)(uStack_4);
  if (piVar3 == (int *)0x0) {
    return false;
  }
  uVar2 = (**(code **)(*piVar3 + 0x24))(packet);
  *outObject = piVar3;
  return (bool)uVar2;
}

