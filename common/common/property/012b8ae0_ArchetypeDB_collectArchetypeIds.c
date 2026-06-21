// addr: 0x012b8ae0
// name: ArchetypeDB_collectArchetypeIds
// subsystem: common/common/property
// source (binary assert): common/common/property/ArchetypeDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ArchetypeDB_collectArchetypeIds(void * outIds, int version) */

bool __thiscall ArchetypeDB_collectArchetypeIds(void *this,void *outIds,int version)

{
  undefined4 *puVar1;
  uint uVar2;
  uint uVar3;
  int *piVar4;
  int *piVar5;
  int *piVar6;
  int iVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  undefined1 auStack_10 [4];
  int *piStack_c;
  undefined1 auStack_8 [8];
  
                    /* Appends every archetype id known to the version-specific storage index and
                       then appends any live cached archetype ids that are not already present. This
                       produces a de-duplicated id list spanning storage-backed and in-memory
                       archetypes. */
  iVar7 = version;
  if (version == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\property\\ArchetypeDB.cpp",0x2db);
  }
  ArchetypeDB_openStorageForVersion(this,iVar7);
  iVar7 = ArchetypeDB_PropertyValueMap_findOrInsertSecond(&version);
  puVar9 = *(undefined4 **)(iVar7 + 4);
  if (*(undefined4 **)(iVar7 + 8) < puVar9) {
    FUN_00d83c2d();
  }
  while( true ) {
    iVar8 = ArchetypeDB_PropertyValueMap_findOrInsertSecond(&version);
    puVar1 = *(undefined4 **)(iVar8 + 8);
    if (puVar1 < *(undefined4 **)(iVar8 + 4)) {
      FUN_00d83c2d();
    }
    if (iVar7 != iVar8) {
      FUN_00d83c2d();
    }
    if (puVar9 == puVar1) break;
    if (*(undefined4 **)(iVar7 + 8) <= puVar9) {
      FUN_00d83c2d();
    }
    uVar2 = *(uint *)((int)outIds + 4);
    if ((uVar2 == 0) ||
       ((uint)((int)(*(int *)((int)outIds + 0xc) - uVar2) >> 2) <=
        (uint)((int)(*(int *)((int)outIds + 8) - uVar2) >> 2))) {
      uVar3 = *(uint *)((int)outIds + 8);
      if (uVar3 < uVar2) {
        FUN_00d83c2d();
      }
      Vector_insertSingleAndReturnIterator_realloc(auStack_10,outIds,uVar3,puVar9);
    }
    else {
      puVar1 = *(undefined4 **)((int)outIds + 8);
      *puVar1 = *puVar9;
      *(undefined4 **)((int)outIds + 8) = puVar1 + 1;
    }
    if (*(undefined4 **)(iVar7 + 8) <= puVar9) {
      FUN_00d83c2d();
    }
    puVar9 = puVar9 + 4;
  }
  iVar7 = ArchetypeDB_PropertyValueMap_findOrInsertFirst(&version);
  piVar10 = *(int **)(iVar7 + 4);
  if (*(int **)(iVar7 + 8) < piVar10) {
    FUN_00d83c2d();
  }
  do {
    iVar8 = ArchetypeDB_PropertyValueMap_findOrInsertFirst(&version);
    piVar4 = *(int **)(iVar8 + 8);
    if (piVar4 < *(int **)(iVar8 + 4)) {
      FUN_00d83c2d();
    }
    if (iVar7 != iVar8) {
      FUN_00d83c2d();
    }
    if (piVar10 == piVar4) {
      return true;
    }
    piVar4 = *(int **)((int)outIds + 8);
    if (piVar4 < *(int **)((int)outIds + 4)) {
      FUN_00d83c2d();
    }
    if (*(int **)(iVar7 + 8) <= piVar10) {
      FUN_00d83c2d();
    }
    piVar5 = *(int **)((int)outIds + 8);
    if (piVar5 < *(int **)((int)outIds + 4)) {
      FUN_00d83c2d();
    }
    piVar6 = *(int **)((int)outIds + 4);
    if (*(int **)((int)outIds + 8) < piVar6) {
      FUN_00d83c2d();
    }
    piVar11 = piVar6;
    if (piVar6 != piVar5) {
      do {
        if (*piVar11 == *piVar10) break;
        piVar11 = piVar11 + 1;
      } while (piVar11 != piVar5);
    }
    piStack_c = piVar6;
    if (outIds == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (piVar11 == piVar4) {
      if (*(int **)(iVar7 + 8) <= piVar10) {
        FUN_00d83c2d();
      }
      uVar2 = *(uint *)((int)outIds + 4);
      if ((uVar2 == 0) ||
         ((uint)((int)(*(int *)((int)outIds + 0xc) - uVar2) >> 2) <=
          (uint)((int)(*(int *)((int)outIds + 8) - uVar2) >> 2))) {
        uVar3 = *(uint *)((int)outIds + 8);
        if (uVar3 < uVar2) {
          FUN_00d83c2d();
        }
        Vector_insertSingleAndReturnIterator_realloc(auStack_8,outIds,uVar3,piVar10);
      }
      else {
        piVar4 = *(int **)((int)outIds + 8);
        *piVar4 = *piVar10;
        *(int **)((int)outIds + 8) = piVar4 + 1;
      }
    }
    if (*(int **)(iVar7 + 8) <= piVar10) {
      FUN_00d83c2d();
    }
    piVar10 = piVar10 + 2;
  } while( true );
}

