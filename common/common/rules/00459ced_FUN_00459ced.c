// addr: 0x00459ced
// name: FUN_00459ced
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool unknown_allocator_hasAvailableSpace(void * state, uint firstNeed_, uint
   secondNeed_, uint thirdNeed_) */

bool __thiscall
unknown_allocator_hasAvailableSpace
          (void *this,void *state,uint firstNeed_,uint secondNeed_,uint thirdNeed_)

{
  bool bVar1;
  
                    /* Checks whether three remaining capacity ranges in an allocator/state object
                       can satisfy requested sizes. */
  if ((((void *)(*(int *)((int)this + 4) - *(int *)((int)this + 8)) < state) ||
      ((uint)(*(int *)((int)this + 0x14) - *(int *)((int)this + 0x18)) < firstNeed_)) ||
     ((uint)(*(int *)((int)this + 0x20) - *(int *)((int)this + 0x24)) < secondNeed_)) {
    bVar1 = false;
  }
  else {
    bVar1 = true;
  }
  return bVar1;
}

