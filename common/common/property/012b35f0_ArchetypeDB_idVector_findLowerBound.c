// addr: 0x012b35f0
// name: ArchetypeDB_idVector_findLowerBound
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArchetypeDB_idVector_findLowerBound(void * vector, void * outIt, int *
   key) */

void __thiscall ArchetypeDB_idVector_findLowerBound(void *this,void *vector,void *outIt,int *key)

{
  uint uVar1;
  int unaff_EDI;
  
                    /* Finds a lower_bound position in the ArchetypeDB sorted id vector and returns
                       end if the existing entry is greater than the requested id. */
  ArchetypeDB_idVector_lowerBound(this,vector,outIt,unaff_EDI);
  uVar1 = *(uint *)((int)this + 8);
  if (uVar1 < *(uint *)((int)this + 4)) {
    FUN_00d83c2d();
  }
  if ((*(void **)vector == (void *)0x0) || (*(void **)vector != this)) {
    FUN_00d83c2d();
  }
  if (*(uint *)((int)vector + 4) != uVar1) {
    if (*(int *)vector == 0) {
      FUN_00d83c2d();
    }
    if (*(uint *)(*(int *)vector + 8) <= *(uint *)((int)vector + 4)) {
      FUN_00d83c2d();
    }
    if (*(int *)outIt < **(int **)((int)vector + 4)) {
      uVar1 = *(uint *)((int)this + 8);
      if (uVar1 < *(uint *)((int)this + 4)) {
        FUN_00d83c2d();
      }
      *(void **)vector = this;
      *(uint *)((int)vector + 4) = uVar1;
    }
  }
  return;
}

