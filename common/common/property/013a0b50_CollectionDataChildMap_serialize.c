// addr: 0x013a0b50
// name: CollectionDataChildMap_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CollectionDataChildMap_serialize(void * serializer, void * children) */

bool __thiscall CollectionDataChildMap_serialize(void *this,void *serializer,void *children)

{
  undefined4 *puVar1;
  void *pvVar2;
  undefined4 *puVar3;
  bool bVar4;
  int iVar5;
  int unaff_EDI;
  void *local_18;
  undefined4 *local_14;
  void *local_10;
  undefined4 local_c;
  
                    /* Serializes a CollectionData child map/container by writing the container
                       size, serializing each dword/object element, and advancing the CollectionData
                       child iterator. Evidence is SerializeDwordAndObjectElement and
                       CollectionDataChildIterator_increment. */
  Serializer_startAppendingSTLContainer(*(void **)this,*(int *)((int)serializer + 8),unaff_EDI);
  puVar1 = *(undefined4 **)((int)serializer + 4);
  local_14 = (undefined4 *)*puVar1;
  local_18 = serializer;
  while( true ) {
    puVar3 = local_14;
    pvVar2 = local_18;
    if ((local_18 == (void *)0x0) || (local_18 != serializer)) {
      FUN_00d83c2d();
    }
    if (puVar3 == puVar1) break;
    if (pvVar2 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (puVar3 == *(undefined4 **)((int)pvVar2 + 4)) {
      FUN_00d83c2d();
    }
    local_10 = (void *)puVar3[3];
    local_c = puVar3[4];
    bVar4 = SerializeDwordAndObjectElement(*(void **)this,&local_10);
    if (!bVar4) {
      return false;
    }
    CollectionDataChildIterator_increment((int *)&local_18);
  }
  iVar5 = Serialize_returnTrue();
  return SUB41(iVar5,0);
}

