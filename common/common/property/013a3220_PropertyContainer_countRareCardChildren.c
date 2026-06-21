// addr: 0x013a3220
// name: PropertyContainer_countRareCardChildren
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int PropertyContainer_countRareCardChildren(void * container) */

int __fastcall PropertyContainer_countRareCardChildren(void *container)

{
  undefined1 *puVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  uint uVar4;
  int iVar5;
  void *this;
  uint uVar6;
  int *piVar7;
  int iVar8;
  undefined1 *local_20;
  undefined4 *local_1c;
  undefined1 local_18 [4];
  undefined4 *local_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Iterates child property containers and counts children whose archetype
                       exposes property 0x31d as enabled and property 0x4c as 0x22325. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01685aa0;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  PropertyContainerMap_ctor(local_18,(void *)((int)container + 0x58));
  local_4 = 1;
  local_1c = (undefined4 *)*local_14;
  local_20 = local_18;
  iVar8 = 0;
  while( true ) {
    puVar3 = local_14;
    puVar2 = local_1c;
    puVar1 = local_20;
    if ((local_20 == (undefined1 *)0x0) || (local_20 != local_18)) {
      FUN_00d83c2d(uVar4);
    }
    if (puVar2 == puVar3) break;
    if (puVar1 == (undefined1 *)0x0) {
      FUN_00d83c2d(uVar4);
    }
    if (puVar2 == *(undefined4 **)(puVar1 + 4)) {
      FUN_00d83c2d(uVar4);
    }
    if ((void *)puVar2[4] != (void *)0x0) {
      iVar5 = PersistentComponent_getPersistentId((void *)puVar2[4]);
      ArchetypeDB_getInstance();
      uVar6 = Archetype_getField3c(this);
      ArchetypeDB_getInstance();
      piVar7 = (int *)ArchetypeDB_getArchetype(iVar5,uVar6);
      if (piVar7 != (int *)0x0) {
        iVar5 = (**(code **)(*piVar7 + 0x80))(0x31d);
        if (iVar5 == 1) {
          iVar5 = (**(code **)(*piVar7 + 0x80))(0x4c);
          if (iVar5 == 0x22325) {
            iVar8 = iVar8 + 1;
          }
        }
      }
    }
    CollectionDataChildIterator_increment((int *)&local_20);
  }
  local_4 = 0xffffffff;
  STLTree_destroyStorage(local_18);
  ExceptionList = puStack_8;
  return iVar8;
}

