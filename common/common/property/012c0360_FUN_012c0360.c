// addr: 0x012c0360
// name: FUN_012c0360
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionDB_registerArchetypesFromVector(void * db, void *
   archetypeVector) */

void __thiscall CollectionDB_registerArchetypesFromVector(void *this,void *db,void *archetypeVector)

{
  int iVar1;
  int iVar2;
  int iVar3;
  void *this_00;
  int *piVar4;
  undefined4 *puVar5;
  undefined1 local_8 [8];
  
                    /* Iterates a vector/tree of archetype data and registers archetype vectors with
                       CollectionDB. */
  this_00 = db;
  if (db != (void *)0x0) {
    db = (void *)FUN_013d0f10();
    piVar4 = (int *)FUN_012befb0(local_8,&db);
    iVar1 = *piVar4;
    iVar2 = *(int *)((int)this + 8);
    iVar3 = piVar4[1];
    if ((iVar1 == 0) || (iVar1 != (int)this + 4)) {
      FUN_00d83c2d();
    }
    if (iVar3 != iVar2) {
      if (iVar1 == 0) {
        FUN_00d83c2d();
      }
      if (iVar3 == *(int *)(iVar1 + 4)) {
        FUN_00d83c2d();
      }
      if (*(undefined4 **)(iVar3 + 0x10) != (undefined4 *)0x0) {
        (**(code **)**(undefined4 **)(iVar3 + 0x10))(1);
      }
    }
    puVar5 = (undefined4 *)FUN_012c0180(&db);
    *puVar5 = this_00;
    CollectionDB_registerArchetypeVector(this_00);
  }
  return;
}

