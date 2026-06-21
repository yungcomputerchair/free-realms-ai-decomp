// addr: 0x005f4336
// name: StdVectorDword_pushBack
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdVectorDword_pushBack(void * this, uint value) */

void __thiscall StdVectorDword_pushBack(void *this,uint value)

{
  uint uVar1;
  uint uVar2;
  undefined4 uVar3;
  void *local_c;
  void *local_8;
  
  local_c = this;
  local_8 = this;
                    /* Appends one DWORD to a vector, constructing in spare capacity or delegating
                       to the insert/reallocate path when full. */
  uVar1 = StdVectorDword_size(this);
  uVar2 = StdVectorDword_capacityFromEnd(this);
  if (uVar1 < uVar2) {
    uVar3 = IntSlotArray_constructAtIndex(*(undefined4 *)((int)this + 8),1,value);
    *(undefined4 *)((int)this + 8) = uVar3;
  }
  else {
    CheckedIndexIterator_ctor(*(undefined4 *)((int)this + 8),this);
    StdVectorDword_insertOne(this,&local_c,local_c,(uint)local_8,value);
  }
  return;
}

