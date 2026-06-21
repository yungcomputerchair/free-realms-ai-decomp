// addr: 0x0141aa90
// name: NetworkCommand_deserializeComponentPtr
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool NetworkCommand_deserializeComponentPtr(void * stream, void **
   outComponent) */

bool __cdecl NetworkCommand_deserializeComponentPtr(void *stream,void **outComponent)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 *extraout_EAX;
  int *piVar3;
  uint *unaff_EDI;
  int local_8;
  undefined4 uStack_4;
  
                    /* Deserializes an optional component pointer by reading a null flag, packed
                       type id, constructing via ComponentFactory, and invoking component
                       deserialize. */
  bVar1 = Deserializer_readInteger(stream,&local_8);
  if (!bVar1) {
    return false;
  }
  if (*outComponent != (undefined4 *)0x0) {
    (*(code *)**(undefined4 **)*outComponent)(1);
    *outComponent = (void *)0x0;
  }
  if (local_8 != 0) {
    *outComponent = (void *)0x0;
    return true;
  }
  bVar1 = PacketBuffer_readPackedUInt(stream,&uStack_4,unaff_EDI);
  if (!bVar1) {
    return false;
  }
  ComponentFactory_initSingleton();
  piVar3 = (int *)(**(code **)*extraout_EAX)(uStack_4);
  if (piVar3 == (int *)0x0) {
    return false;
  }
  uVar2 = (**(code **)(*piVar3 + 0x24))(stream);
  *outComponent = piVar3;
  return (bool)uVar2;
}

