// addr: 0x0137dbf0
// name: ArchetypeIdAllocator_recomputeNextId
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArchetypeIdAllocator_recomputeNextId(void * this) */

void __fastcall ArchetypeIdAllocator_recomputeNextId(void *this)

{
  int *piVar1;
  uint uVar2;
  void *this_00;
  int iVar3;
  int *piVar4;
  undefined1 *outIds;
  undefined1 local_1c [4];
  int *local_18;
  int *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Collects archetype ids for the current archetype database/reference, scans
                       for the maximum id, and stores max+1 at offset 8. Evidence is
                       ArchetypeDB_getInstance, ArchetypeDB_collectArchetypeIds, vector bounds
                       checks, and assignment of iVar2 + 1. */
  puStack_8 = &LAB_01681fe8;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffcc;
  ExceptionList = &local_c;
  local_18 = (int *)0x0;
  local_14 = (int *)0x0;
  local_10 = 0;
  local_4 = 0;
  iVar3 = *(int *)((int)this + 0xc);
  outIds = local_1c;
  ArchetypeDB_getInstance();
  ArchetypeDB_collectArchetypeIds(this_00,outIds,iVar3);
  piVar1 = local_14;
  iVar3 = 0;
  if (local_14 < local_18) {
    FUN_00d83c2d(uVar2);
  }
  piVar4 = local_18;
  if (local_14 < local_18) {
    FUN_00d83c2d(uVar2);
  }
  while( true ) {
    if (&stack0x00000000 == (undefined1 *)0x1c) {
      FUN_00d83c2d();
    }
    if (piVar4 == piVar1) break;
    if (&stack0x00000000 == (undefined1 *)0x1c) {
      FUN_00d83c2d();
    }
    if (local_14 <= piVar4) {
      FUN_00d83c2d();
    }
    if (iVar3 < *piVar4) {
      if (local_14 <= piVar4) {
        FUN_00d83c2d();
      }
      iVar3 = *piVar4;
    }
    if (local_14 <= piVar4) {
      FUN_00d83c2d();
    }
    piVar4 = piVar4 + 1;
  }
  *(int *)((int)this + 8) = iVar3 + 1;
  local_4 = 0xffffffff;
  if (local_18 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_18);
  }
  ExceptionList = local_c;
  return;
}

