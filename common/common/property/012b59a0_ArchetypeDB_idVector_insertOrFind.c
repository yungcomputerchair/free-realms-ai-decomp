// addr: 0x012b59a0
// name: ArchetypeDB_idVector_insertOrFind
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArchetypeDB_idVector_insertOrFind(void * vector, void * outResult, int *
   key) */

void __thiscall ArchetypeDB_idVector_insertOrFind(void *this,void *vector,void *outResult,int *key)

{
  int *piVar1;
  bool bVar2;
  undefined4 *puVar3;
  int unaff_EDI;
  void *local_8;
  int *local_4;
  
                    /* Insert-or-find helper for ArchetypeDB_loadIndex sorted id vector, returning
                       iterator plus inserted flag. */
  bVar2 = true;
  ArchetypeDB_idVector_lowerBound(this,&local_8,outResult,unaff_EDI);
  piVar1 = *(int **)((int)this + 8);
  if (piVar1 < *(int **)((int)this + 4)) {
    FUN_00d83c2d();
  }
  if ((local_8 == (void *)0x0) || (local_8 != this)) {
    FUN_00d83c2d();
  }
  if (local_4 != piVar1) {
    if (local_8 == (void *)0x0) {
      FUN_00d83c2d();
    }
    if (*(int **)((int)local_8 + 8) <= local_4) {
      FUN_00d83c2d();
    }
    if (*local_4 <= *(int *)outResult) goto LAB_012b5a1f;
  }
  puVar3 = (undefined4 *)FUN_012b5480(&local_8,local_8,local_4,outResult);
  local_8 = (void *)*puVar3;
  local_4 = (int *)puVar3[1];
  bVar2 = false;
LAB_012b5a1f:
  *(int **)((int)vector + 4) = local_4;
  *(void **)vector = local_8;
  *(bool *)((int)vector + 8) = !bVar2;
  return;
}

