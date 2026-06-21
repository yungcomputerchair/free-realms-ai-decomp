// addr: 0x012b39b0
// name: ArchetypeDB_idVector_insertAt
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArchetypeDB_idVector_insertAt(void * vec, uint * outIt, uint container,
   uint insertPos, uint expectedContainer, uint endIt) */

void __thiscall
ArchetypeDB_idVector_insertAt
          (void *this,void *vec,uint *outIt,uint container,uint insertPos,uint expectedContainer,
          uint endIt)

{
  void *pvVar1;
  
                    /* Inserts or relocates storage in the ArchetypeDB sorted id vector and returns
                       an iterator to the inserted slot. The function validates iterator ownership,
                       calls the vector growth/shift helper, and stores the resulting
                       container/position pair. */
  if ((outIt == (uint *)0x0) || (outIt != (uint *)insertPos)) {
    FUN_00d83c2d();
  }
  if (container != expectedContainer) {
    pvVar1 = PropertyArray_copy16ByteRecords
                       ((void *)expectedContainer,*(void **)((int)this + 8),(void *)container);
    *(void **)((int)this + 8) = pvVar1;
  }
  *(uint *)((int)vec + 4) = container;
  *(uint **)vec = outIt;
  return;
}

