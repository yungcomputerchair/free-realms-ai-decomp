// addr: 0x012faed0
// name: PersistentComponent_deserializePointer
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PersistentComponent_deserializePointer(void * stream, void * outPtr) */

bool __cdecl PersistentComponent_deserializePointer(void *stream,void *outPtr)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 *extraout_EAX;
  int *piVar3;
  uint *unaff_EDI;
  int local_8;
  undefined4 uStack_4;
  
                    /* Deserializes a nullable persistent component pointer: reads the null
                       marker/type id, destroys any existing pointer, creates the component from the
                       registry, and calls its deserialize vfunc. */
  bVar1 = Deserializer_readInteger(stream,&local_8);
  if (!bVar1) {
    return false;
  }
  if (*(undefined4 **)outPtr != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)outPtr)(1);
    *(undefined4 *)outPtr = 0;
  }
  if (local_8 != 0) {
    *(undefined4 *)outPtr = 0;
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
  *(int **)outPtr = piVar3;
  return (bool)uVar2;
}

