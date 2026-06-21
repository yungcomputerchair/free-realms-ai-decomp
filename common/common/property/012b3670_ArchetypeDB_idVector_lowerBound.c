// addr: 0x012b3670
// name: ArchetypeDB_idVector_lowerBound
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int * ArchetypeDB_idVector_lowerBound(void * vec, int * out, int * key) */

int * __thiscall ArchetypeDB_idVector_lowerBound(void *this,void *vec,int *out,int *key)

{
  uint uVar1;
  
                    /* Finds the lower-bound iterator for an integer key in a sorted vector-like
                       container and validates iterator/container invariants. It is used by
                       ArchetypeDB insert/remove/get paths before comparing or erasing entries. */
  FUN_012b2f70(vec,out);
  uVar1 = *(uint *)((int)this + 8);
  if (uVar1 < *(uint *)((int)this + 4)) {
    FUN_00d83c2d();
  }
  if ((*(void **)vec == (void *)0x0) || (*(void **)vec != this)) {
    FUN_00d83c2d();
  }
  if (*(uint *)((int)vec + 4) != uVar1) {
    if (*(int *)vec == 0) {
      FUN_00d83c2d();
    }
    if (*(uint *)(*(int *)vec + 8) <= *(uint *)((int)vec + 4)) {
      FUN_00d83c2d();
    }
    if (*out < **(int **)((int)vec + 4)) {
      uVar1 = *(uint *)((int)this + 8);
      if (uVar1 < *(uint *)((int)this + 4)) {
        FUN_00d83c2d();
      }
      *(void **)vec = this;
      *(uint *)((int)vec + 4) = uVar1;
    }
  }
  return vec;
}

