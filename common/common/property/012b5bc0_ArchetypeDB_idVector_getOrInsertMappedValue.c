// addr: 0x012b5bc0
// name: ArchetypeDB_idVector_getOrInsertMappedValue
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArchetypeDB_idVector_getOrInsertMappedValue(void * vector, void *
   outResult, int * key) */

void __thiscall
ArchetypeDB_idVector_getOrInsertMappedValue(void *this,void *vector,void *outResult,int *key)

{
  int *piVar1;
  bool bVar2;
  undefined4 *puVar3;
  void *local_8;
  int *local_4;
  
                    /* Insert-or-find helper for ArchetypeDB_idVector_getMappedValuePtr, returning
                       the iterator and inserted flag. */
  bVar2 = true;
  FUN_012b2f70(&local_8,outResult);
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
    if (*local_4 <= *(int *)outResult) goto LAB_012b5c3f;
  }
  puVar3 = (undefined4 *)FUN_012b5820(&local_8,local_8,local_4,outResult);
  local_8 = (void *)*puVar3;
  local_4 = (int *)puVar3[1];
  bVar2 = false;
LAB_012b5c3f:
  *(int **)((int)vector + 4) = local_4;
  *(void **)vector = local_8;
  *(bool *)((int)vector + 8) = !bVar2;
  return;
}

