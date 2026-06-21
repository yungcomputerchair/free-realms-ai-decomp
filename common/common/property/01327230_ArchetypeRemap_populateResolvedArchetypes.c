// addr: 0x01327230
// name: ArchetypeRemap_populateResolvedArchetypes
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint ArchetypeRemap_populateResolvedArchetypes(void * this, int remap_id) */

uint __thiscall ArchetypeRemap_populateResolvedArchetypes(void *this,int remap_id)

{
  undefined4 *puVar1;
  uint uVar2;
  uint container;
  int iVar3;
  void *outIt;
  void *pvVar4;
  void *extraout_EAX;
  undefined4 *puVar5;
  uint unaff_EDI;
  undefined1 local_8 [8];
  
                    /* For a remap id, gets the vector of stored archetype ids, resolves each
                       through ArchetypeDB_getArchetype, and appends the resolved ids/handles to a
                       companion vector. */
  ArchetypeDB_getInstance();
  iVar3 = IntToIntVectorMap_getOrCreate(&remap_id);
  outIt = (void *)FUN_01326fd0(&remap_id);
  puVar5 = *(undefined4 **)(iVar3 + 4);
  pvVar4 = outIt;
  if (*(undefined4 **)(iVar3 + 8) < puVar5) {
    pvVar4 = (void *)FUN_00d83c2d();
  }
  while( true ) {
    puVar1 = *(undefined4 **)(iVar3 + 8);
    if (puVar1 < *(undefined4 **)(iVar3 + 4)) {
      pvVar4 = (void *)FUN_00d83c2d();
    }
    if (puVar5 == puVar1) break;
    if (*(undefined4 **)(iVar3 + 8) <= puVar5) {
      FUN_00d83c2d();
    }
    pvVar4 = (void *)ArchetypeDB_getArchetype(*puVar5,*(undefined4 *)((int)this + 8));
    uVar2 = *(uint *)((int)outIt + 4);
    remap_id = (int)pvVar4;
    if ((uVar2 == 0) ||
       ((uint)((int)(*(int *)((int)outIt + 0xc) - uVar2) >> 2) <=
        (uint)((int)(*(int *)((int)outIt + 8) - uVar2) >> 2))) {
      container = *(uint *)((int)outIt + 8);
      if (container < uVar2) {
        FUN_00d83c2d();
      }
      UIntVector_insertOne(outIt,local_8,outIt,container,(int)&remap_id,unaff_EDI);
      pvVar4 = extraout_EAX;
    }
    else {
      puVar1 = *(undefined4 **)((int)outIt + 8);
      *puVar1 = pvVar4;
      *(undefined4 **)((int)outIt + 8) = puVar1 + 1;
    }
    if (*(undefined4 **)(iVar3 + 8) <= puVar5) {
      pvVar4 = (void *)FUN_00d83c2d();
    }
    puVar5 = puVar5 + 1;
  }
  return CONCAT31((int3)((uint)pvVar4 >> 8),1);
}

