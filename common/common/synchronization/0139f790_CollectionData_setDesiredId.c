// addr: 0x0139f790
// name: CollectionData_setDesiredId
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionData_setDesiredId(void * this, uint desiredId_) */

void __thiscall CollectionData_setDesiredId(void *this,uint desiredId_)

{
                    /* Stores a desired/active synchronization id in the collection data object at
                       offset 0x88. */
  *(uint *)((int)this + 0x88) = desiredId_;
  return;
}

