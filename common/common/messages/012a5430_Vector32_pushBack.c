// addr: 0x012a5430
// name: Vector32_pushBack
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Vector32_pushBack(void * vectorObj, void * valueObj) */

void __thiscall Vector32_pushBack(void *this,void *vectorObj,void *valueObj)

{
  uint uVar1;
  void *first;
  uint uVar2;
  uint local_8 [2];
  
                    /* Pushes a 0x20-byte element into a vector-like container, constructing
                       in-place when capacity remains or delegating to the grow/reallocate helper
                       otherwise. Evidence is begin/end/capacity arithmetic divided by 0x20 and
                       placement construction at the current end pointer. */
  uVar1 = *(uint *)((int)this + 4);
  if ((uVar1 != 0) &&
     ((uint)((int)(*(int *)((int)this + 8) - uVar1) >> 5) <
      (uint)((int)(*(int *)((int)this + 0xc) - uVar1) >> 5))) {
    first = *(void **)((int)this + 8);
    local_8[0] = local_8[0] & 0xffffff00;
    MessageDB_MatchRecord_constructArray(first,1,vectorObj);
    *(int *)((int)this + 8) = (int)first + 0x20;
    return;
  }
  uVar2 = *(uint *)((int)this + 8);
  if (uVar2 < uVar1) {
    FUN_00d83c2d();
  }
  FUN_012a5240(local_8,this,uVar2,vectorObj);
  return;
}

