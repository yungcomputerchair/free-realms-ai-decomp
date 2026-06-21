// addr: 0x014018c0
// name: ComponentList_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ComponentList_deserialize(void * this) */

bool __fastcall ComponentList_deserialize(void *this)

{
  void *this_00;
  undefined4 uVar1;
  bool bVar2;
  char cVar3;
  undefined1 uVar4;
  undefined4 *extraout_EAX;
  int iVar5;
  uint *unaff_EDI;
  int local_24;
  undefined4 *local_20;
  undefined4 local_1c;
  int *local_18;
  undefined4 local_14;
  int *piStack_10;
  undefined4 uStack_c;
  
                    /* Deserializes a component list by reading a count, then for each entry reading
                       an id and packed component type, creating the component through
                       ComponentFactory, deserializing it, and inserting it into the list. Evidence
                       is ComponentFactory_initSingleton, PacketBuffer_readPackedUInt, virtual
                       deserialize call, and insertion helper. */
  local_20 = this;
  FUN_013c2690(&local_24);
  FUN_014015c0(local_24);
  iVar5 = 0;
  if (0 < local_24) {
    do {
      this_00 = *(void **)this;
      local_18 = (int *)0x0;
      local_14 = 0;
      bVar2 = Deserializer_readInteger(this_00,(int *)&local_18);
      if ((!bVar2) ||
         (bVar2 = PacketBuffer_readPackedUInt(this_00,&local_1c,unaff_EDI), uVar1 = local_1c, !bVar2
         )) {
        return false;
      }
      ComponentFactory_initSingleton();
      local_18 = (int *)(**(code **)*extraout_EAX)(uVar1);
      if (local_18 == (int *)0x0) {
        return false;
      }
      cVar3 = (**(code **)(*local_18 + 0x24))(this_00);
      if (cVar3 == '\0') {
        return false;
      }
      piStack_10 = local_18;
      uStack_c = local_14;
      FUN_01401750(&piStack_10);
      iVar5 = iVar5 + 1;
      this = local_20;
    } while (iVar5 < local_24);
  }
  uVar4 = FUN_013c26d0();
  return (bool)uVar4;
}

