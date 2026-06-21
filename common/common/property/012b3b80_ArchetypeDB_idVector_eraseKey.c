// addr: 0x012b3b80
// name: ArchetypeDB_idVector_eraseKey
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ArchetypeDB_idVector_eraseKey(void * vec, int key) */

bool __thiscall ArchetypeDB_idVector_eraseKey(void *this,void *vec,int key)

{
  undefined4 *puVar1;
  undefined4 *puVar2;
  int *unaff_EDI;
  void *local_8;
  undefined4 *local_4;
  
                    /* Removes the sorted-vector entry matching the supplied key, shifts later
                       8-byte entries down, and shrinks the end pointer. It returns false when the
                       lower-bound search lands at end. */
  ArchetypeDB_idVector_lowerBound(this,&local_8,vec,unaff_EDI);
  puVar1 = *(undefined4 **)((int)this + 8);
  if (puVar1 < *(undefined4 **)((int)this + 4)) {
    FUN_00d83c2d();
  }
  if ((local_8 == (void *)0x0) || (local_8 != this)) {
    FUN_00d83c2d();
  }
  if (local_4 == puVar1) {
    return false;
  }
  puVar1 = *(undefined4 **)((int)this + 8);
  puVar2 = local_4;
  while (puVar2 = puVar2 + 2, puVar2 != puVar1) {
    *local_4 = *puVar2;
    local_4[1] = puVar2[1];
    local_4 = local_4 + 2;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) + -8;
  return true;
}

