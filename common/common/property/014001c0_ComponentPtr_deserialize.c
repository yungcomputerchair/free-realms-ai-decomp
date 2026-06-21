// addr: 0x014001c0
// name: ComponentPtr_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint ComponentPtr_deserialize(void * stream, void ** outComponent) */

uint __cdecl ComponentPtr_deserialize(void *stream,void **outComponent)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 *extraout_EAX;
  int *piVar2;
  uint uVar3;
  uint *unaff_EDI;
  undefined4 local_4;
  
                    /* Reads a component id from the packet stream, creates that component via
                       ComponentFactory, stores it in the caller-provided output pointer, and
                       invokes its deserialize method. Unlike nullable variants, this form has no
                       leading null flag. */
  bVar1 = Deserializer_readInteger(stream,(int *)outComponent);
  uVar3 = CONCAT31(extraout_var,bVar1);
  if (bVar1) {
    bVar1 = PacketBuffer_readPackedUInt(stream,&local_4,unaff_EDI);
    uVar3 = CONCAT31(extraout_var_00,bVar1);
    if (bVar1) {
      ComponentFactory_initSingleton();
      piVar2 = (int *)(**(code **)*extraout_EAX)(local_4);
      *outComponent = piVar2;
      uVar3 = 0;
      if (piVar2 != (int *)0x0) {
        uVar3 = (**(code **)(*piVar2 + 0x24))(stream);
        return uVar3;
      }
    }
  }
  return uVar3 & 0xffffff00;
}

