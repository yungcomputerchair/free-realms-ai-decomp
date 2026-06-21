// addr: 0x013a1950
// name: CollectionData_deserializeItemMap
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint CollectionData_deserializeItemMap(void * this, void * stream) */

uint __thiscall CollectionData_deserializeItemMap(void *this,void *stream)

{
  void *this_00;
  uint uVar1;
  int iVar2;
  int *unaff_EDI;
  int local_1c;
  undefined4 local_18;
  void *local_14;
  undefined4 local_10;
  undefined1 local_c [12];
  
                    /* Deserializes a count, repeatedly reads component references, casts
                       PersistentComponent to CollectionItem, inserts them into the collection item
                       map, and consumes the trailing packet marker. Evidence is
                       PropertyContainerMap_insertOrFind, PersistentComponent/CollectionItem RTTI
                       cast, and PacketBuffer read calls. */
  FUN_013c2690(&local_1c);
  this_00 = stream;
  iVar2 = 0;
  if (0 < local_1c) {
    do {
      uVar1 = ComponentPtr_deserialize(*(void **)this,&stream);
      if ((char)uVar1 == '\0') {
        return uVar1 & 0xffffff00;
      }
      local_14 = stream;
      local_10 = FUN_00d8d382(local_18,0,&PersistentComponent::RTTI_Type_Descriptor,
                              &CollectionItem::RTTI_Type_Descriptor,0);
      PropertyContainerMap_insertOrFind(this_00,local_c,(int *)&local_14,unaff_EDI);
      iVar2 = iVar2 + 1;
    } while (iVar2 < local_1c);
  }
  uVar1 = FUN_013c26d0();
  return uVar1;
}

