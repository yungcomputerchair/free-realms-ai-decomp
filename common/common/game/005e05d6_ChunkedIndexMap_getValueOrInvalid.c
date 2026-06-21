// addr: 0x005e05d6
// name: ChunkedIndexMap_getValueOrInvalid
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint ChunkedIndexMap_getValueOrInvalid(void * this, void * values, ushort
   index) */

uint __thiscall ChunkedIndexMap_getValueOrInvalid(void *this,void *values,ushort index)

{
  void *pvVar1;
  int iVar2;
  uint *puVar3;
  uint index_00;
  
                    /* Looks up a 16-bit index through a chunked page table; if the mapped slot is
                       valid and the backing vector is non-empty, returns the indexed dword value,
                       otherwise 0xffffffff. */
  index_00 = *(uint *)(*(int *)(*(int *)((int)this + 0x1c) + (uint)(index >> 7) * 4) +
                      (*(uint *)((int)this + 0x10) & (uint)index) * 4);
  if (-1 < (int)index_00) {
    pvVar1 = (void *)StdVector16_at_005db512((void *)((int)this + 0x30),(uint)values);
    iVar2 = StdVector_size(pvVar1);
    if (iVar2 != 0) {
      pvVar1 = (void *)StdVector16_at_005db512((void *)((int)this + 0x30),(uint)values);
      puVar3 = (uint *)StdVectorDword_at_005db353(pvVar1,index_00);
      return *puVar3;
    }
  }
  return 0xffffffff;
}

