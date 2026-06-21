// addr: 0x012c7eb0
// name: PointerVector_assign
// subsystem: common/common/sort
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PointerVector_assign(void * thisObj, void * sourceVector) */

void * __thiscall PointerVector_assign(void *this,void *thisObj,void *sourceVector)

{
  void **dest;
  char cVar1;
  void **ppvVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
                    /* Assigns one pointer vector to another, reusing, reallocating, or clearing
                       storage as needed. Evidence is capacity/size comparisons, range copy helpers,
                       free on insufficient capacity, and clear on empty source. */
  if (this == thisObj) {
    return this;
  }
  ppvVar2 = *(void ***)((int)thisObj + 4);
  if (ppvVar2 != (void **)0x0) {
    uVar5 = (int)*(void ***)((int)thisObj + 8) - (int)ppvVar2 >> 2;
    if (uVar5 != 0) {
      dest = *(void ***)((int)this + 4);
      if (dest == (void **)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(int *)((int)this + 8) - (int)dest >> 2;
      }
      if (uVar5 <= uVar3) {
        PointerVector_copyRangeToExisting(ppvVar2,*(void ***)((int)thisObj + 8),dest);
        if (*(int *)((int)thisObj + 4) == 0) {
          *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
          return this;
        }
        *(int *)((int)this + 8) =
             *(int *)((int)this + 4) +
             (*(int *)((int)thisObj + 8) - *(int *)((int)thisObj + 4) >> 2) * 4;
        return this;
      }
      if (dest == (void **)0x0) {
        uVar3 = 0;
      }
      else {
        uVar3 = *(int *)((int)this + 0xc) - (int)dest >> 2;
      }
      if (uVar3 < uVar5) {
        if (dest != (void **)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(dest);
        }
        if (*(int *)((int)thisObj + 4) == 0) {
          iVar4 = 0;
        }
        else {
          iVar4 = *(int *)((int)thisObj + 8) - *(int *)((int)thisObj + 4) >> 2;
        }
        cVar1 = FUN_012b47b0(iVar4);
        if (cVar1 == '\0') {
          return this;
        }
        ppvVar2 = PointerVector_uninitializedCopyRange
                            (*(void ***)((int)thisObj + 4),*(void ***)((int)thisObj + 8),
                             *(void ***)((int)this + 4));
        *(void ***)((int)this + 8) = ppvVar2;
        return this;
      }
      if (dest == (void **)0x0) {
        iVar4 = 0;
      }
      else {
        iVar4 = *(int *)((int)this + 8) - (int)dest >> 2;
      }
      PointerVector_copyRangeToExisting(ppvVar2,ppvVar2 + iVar4,dest);
      ppvVar2 = PointerVector_uninitializedCopyRange
                          (ppvVar2 + iVar4,*(void ***)((int)thisObj + 8),*(void ***)((int)this + 8))
      ;
      *(void ***)((int)this + 8) = ppvVar2;
      return this;
    }
  }
  FUN_012c6d70();
  return this;
}

