// addr: 0x005f2e1d
// name: StdVectorDword_insertOne
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * StdVectorDword_insertOne(void * this, void * outIter, void * pos, uint
   count, uint value) */

void * __thiscall StdVectorDword_insertOne(void *this,void *outIter,void *pos,uint count,uint value)

{
  int iVar1;
  undefined4 uVar2;
  void *local_c;
  void *pvStack_8;
  
  local_c = this;
  pvStack_8 = this;
                    /* Inserts one DWORD/vector element at an iterator position, handling
                       empty-vector and tail-shift bookkeeping. */
  iVar1 = StdVectorDword_size(this);
  if (iVar1 == 0) {
    uVar2 = 0;
  }
  else {
    CheckedIndexIterator_ctor(*(undefined4 *)((int)this + 4),this);
    uVar2 = FUN_005dcc9d(&local_c);
  }
  StdVectorDword_insertFillRange_005e(pos,count,1,value);
  CheckedIndexIterator_ctor(*(undefined4 *)((int)this + 4),this);
  FUN_005e4aa6(outIter,uVar2);
  return outIter;
}

