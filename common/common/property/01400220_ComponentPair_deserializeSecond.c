// addr: 0x01400220
// name: ComponentPair_deserializeSecond
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint ComponentPair_deserializeSecond(void * stream, void * outPair) */

uint __cdecl ComponentPair_deserializeSecond(void *stream,void *outPair)

{
  bool bVar1;
  undefined3 extraout_var;
  undefined3 extraout_var_00;
  undefined4 *extraout_EAX;
  int *piVar2;
  uint uVar3;
  uint *unaff_EDI;
  undefined4 local_4;
  
                    /* Reads a component id, creates the component via ComponentFactory, stores it
                       at outPair+4, and invokes its deserialize method. Evidence is the
                       PacketBuffer_read calls, ComponentFactory_initSingleton, and assignment to
                       param_2 + 4. */
  bVar1 = Deserializer_readInteger(stream,outPair);
  uVar3 = CONCAT31(extraout_var,bVar1);
  if (bVar1) {
    bVar1 = PacketBuffer_readPackedUInt(stream,&local_4,unaff_EDI);
    uVar3 = CONCAT31(extraout_var_00,bVar1);
    if (bVar1) {
      ComponentFactory_initSingleton();
      piVar2 = (int *)(**(code **)*extraout_EAX)(local_4);
      *(int **)((int)outPair + 4) = piVar2;
      uVar3 = 0;
      if (piVar2 != (int *)0x0) {
        uVar3 = (**(code **)(*piVar2 + 0x24))(stream);
        return uVar3;
      }
    }
  }
  return uVar3 & 0xffffff00;
}

