// addr: 0x007e7260
// name: AnimVisibilityController_removeReference
// subsystem: common/animation/events
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AnimVisibilityController_removeReference(void * this, void * reference)
    */

void __thiscall AnimVisibilityController_removeReference(void *this,void *reference)

{
  int iVar1;
  int iVar2;
  int capacity_;
  int first_;
  
                    /* Finds a reference pointer in the visibility controller reference array and
                       erases it if present. */
  iVar2 = *(int *)((int)this + 0x14);
  if ((iVar2 != 0) && (first_ = 0, *(int *)(iVar2 + 0x34) != 0)) {
    capacity_ = 1;
    while( true ) {
      iVar1 = *(int *)(iVar2 + 0x34);
      if (((iVar1 <= first_) && (iVar1 < capacity_)) && (iVar1 <= capacity_ + -1)) {
        if (*(int *)(iVar2 + 0x38) < capacity_) {
          AnimVisibilityController_reserveReferenceArray
                    ((void *)(iVar2 + 0x2c),capacity_,(void *)0x0);
        }
        *(int *)(iVar2 + 0x34) = capacity_;
      }
      if (*(void **)(*(int *)(iVar2 + 0x30) + first_ * 4) == reference) break;
      iVar2 = *(int *)((int)this + 0x14);
      first_ = first_ + 1;
      capacity_ = capacity_ + 1;
      if (first_ == *(int *)(iVar2 + 0x34)) {
        return;
      }
    }
    AnimVisibilityController_eraseReferenceRange
              ((void *)(*(int *)((int)this + 0x14) + 0x2c),first_,1);
  }
  return;
}

