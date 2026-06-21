// addr: 0x012c80c0
// name: PointerVector_insertOne
// subsystem: common/common/sort
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PointerVector_insertOne(void * resultPair, void * vectorObj, void **
   position, void ** valuePtr) */

void __thiscall
PointerVector_insertOne(void *this,void *resultPair,void *vectorObj,void **position,void **valuePtr)

{
  uint uVar1;
  int iVar2;
  
                    /* Inserts one pointer value into a vector at the supplied position, growing
                       storage through the lower-level insert helper when necessary, and returns the
                       inserted position through resultPair. Evidence is the pushBack caller and the
                       call to the general vector insert routine with count 1. */
  uVar1 = *(uint *)((int)this + 4);
  if ((uVar1 == 0) || ((int)(*(uint *)((int)this + 8) - uVar1) >> 2 == 0)) {
    iVar2 = 0;
  }
  else {
    if (*(uint *)((int)this + 8) < uVar1) {
      FUN_00d83c2d();
    }
    if ((vectorObj == (void *)0x0) || (vectorObj != this)) {
      FUN_00d83c2d();
    }
    iVar2 = (int)((int)position - uVar1) >> 2;
  }
  FUN_012c7610(vectorObj,position,1,valuePtr);
  uVar1 = *(uint *)((int)this + 4);
  if (*(uint *)((int)this + 8) < uVar1) {
    FUN_00d83c2d();
  }
  uVar1 = uVar1 + iVar2 * 4;
  if ((*(uint *)((int)this + 8) < uVar1) || (uVar1 < *(uint *)((int)this + 4))) {
    FUN_00d83c2d();
  }
  *(uint *)((int)resultPair + 4) = uVar1;
  *(void **)resultPair = this;
  return;
}

