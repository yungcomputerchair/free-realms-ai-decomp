// addr: 0x014e4a30
// name: Vector_insertSingleAndReturnIterator
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Vector_insertSingleAndReturnIterator(void * vector, void * outIterator,
   void * ownerVector, void * insertPos, void * value) */

void __thiscall
Vector_insertSingleAndReturnIterator
          (void *this,void *vector,void *outIterator,void *ownerVector,void *insertPos,void *value)

{
  uint uVar1;
  int iVar2;
  
                    /* Validates that an insertion position belongs to the vector, inserts one
                       element through the lower-level vector insert helper, then stores an iterator
                       pointing at the inserted element. */
  uVar1 = *(uint *)((int)this + 4);
  if ((uVar1 == 0) || ((int)(*(uint *)((int)this + 8) - uVar1) >> 2 == 0)) {
    iVar2 = 0;
  }
  else {
    if (*(uint *)((int)this + 8) < uVar1) {
      FUN_00d83c2d();
    }
    if ((outIterator == (void *)0x0) || (outIterator != this)) {
      FUN_00d83c2d();
    }
    iVar2 = (int)((int)ownerVector - uVar1) >> 2;
  }
  FUN_014e47d0(outIterator,ownerVector,1,insertPos);
  uVar1 = *(uint *)((int)this + 4);
  if (*(uint *)((int)this + 8) < uVar1) {
    FUN_00d83c2d();
  }
  uVar1 = uVar1 + iVar2 * 4;
  if ((*(uint *)((int)this + 8) < uVar1) || (uVar1 < *(uint *)((int)this + 4))) {
    FUN_00d83c2d();
  }
  *(uint *)((int)vector + 4) = uVar1;
  *(void **)vector = this;
  return;
}

