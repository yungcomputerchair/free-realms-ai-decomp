// addr: 0x007e7060
// name: AnimVisibilityController_eraseReferenceRange
// subsystem: common/animation/events
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AnimVisibilityController_eraseReferenceRange(void * this, int first_, int
   count_) */

void __thiscall AnimVisibilityController_eraseReferenceRange(void *this,int first_,int count_)

{
  int iVar1;
  undefined4 *puVar2;
  undefined4 *puVar3;
  
                    /* Compacts the reference pointer array after removing a range and decrements
                       the stored element count. */
  iVar1 = *(int *)((int)this + 8) - (first_ + count_);
  puVar3 = (undefined4 *)(*(int *)((int)this + 4) + (first_ + count_) * 4);
  puVar2 = (undefined4 *)(*(int *)((int)this + 4) + first_ * 4);
  while (iVar1 != 0) {
    iVar1 = iVar1 + -1;
    if (puVar2 != (undefined4 *)0x0) {
      *puVar2 = *puVar3;
    }
    puVar2 = puVar2 + 1;
    puVar3 = puVar3 + 1;
  }
  *(int *)((int)this + 8) = *(int *)((int)this + 8) - count_;
  return;
}

