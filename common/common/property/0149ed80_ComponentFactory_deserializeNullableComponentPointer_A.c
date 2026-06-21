// addr: 0x0149ed80
// name: ComponentFactory_deserializeNullableComponentPointer_A
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ComponentFactory_deserializeNullableComponentPointer_A(void * stream,
   void * out) */

bool __cdecl ComponentFactory_deserializeNullableComponentPointer_A(void *stream,void *out)

{
  bool bVar1;
  undefined1 uVar2;
  undefined4 *extraout_EAX;
  int *piVar3;
  uint *unaff_EDI;
  int local_8;
  undefined4 uStack_4;
  
                    /* Deserializes a nullable component pointer: reads a null flag, releases any
                       existing object, reads a packed type id when present, constructs via
                       ComponentFactory, and deserializes the new component. */
  bVar1 = Deserializer_readInteger(stream,&local_8);
  if (!bVar1) {
    return false;
  }
  if (*(undefined4 **)out != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)out)(1);
    *(undefined4 *)out = 0;
  }
  if (local_8 != 0) {
    *(undefined4 *)out = 0;
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
  *(int **)out = piVar3;
  return (bool)uVar2;
}

