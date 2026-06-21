// addr: 0x012a8530
// name: DeckDB_deserializeDeckComponent
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int * DeckDB_deserializeDeckComponent(void *param_1)

{
  void *pvVar1;
  void *pvVar2;
  bool bVar3;
  char cVar4;
  undefined4 *extraout_EAX;
  undefined4 *puVar5;
  int *piVar6;
  uint *unaff_EBX;
  
                    /* Reads a packed component id, creates the component through the
                       ComponentFactory, dynamic-casts it to Deck, and deserializes it from the
                       original buffer. On cast or deserialize failure it releases the created
                       component and returns null. */
  pvVar1 = param_1;
  bVar3 = PacketBuffer_readPackedUInt(param_1,&param_1,unaff_EBX);
  pvVar2 = param_1;
  if (!bVar3) {
    return (int *)0x0;
  }
  ComponentFactory_initSingleton();
  puVar5 = (undefined4 *)(**(code **)*extraout_EAX)(pvVar2);
  piVar6 = (int *)FUN_00d8d382(puVar5,0,&PersistentComponent::RTTI_Type_Descriptor,
                               &Deck::RTTI_Type_Descriptor,0);
  if (piVar6 == (int *)0x0) {
    if (puVar5 != (undefined4 *)0x0) {
      (**(code **)*puVar5)(1);
    }
    return (int *)0x0;
  }
  cVar4 = (**(code **)(*piVar6 + 0x24))(pvVar1);
  if (cVar4 == '\0') {
    (**(code **)*piVar6)(1);
    return (int *)0x0;
  }
  return piVar6;
}

