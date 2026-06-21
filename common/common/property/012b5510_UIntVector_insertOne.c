// addr: 0x012b5510
// name: UIntVector_insertOne
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UIntVector_insertOne(void * vec, int * outIt, int container, int
   insertPos, uint value) */

void __thiscall
UIntVector_insertOne(void *this,void *vec,int *outIt,int container,int insertPos,uint value)

{
  uint uVar1;
  int iVar2;
  
                    /* Inserts one 32-bit element into a vector, preserving the insertion index
                       across possible reallocation. It delegates the actual growth/shift to
                       FUN_012b4a50 and returns the iterator to the inserted element. */
  uVar1 = *(uint *)((int)this + 4);
  if ((uVar1 == 0) || ((int)(*(uint *)((int)this + 8) - uVar1) >> 2 == 0)) {
    iVar2 = 0;
  }
  else {
    if (*(uint *)((int)this + 8) < uVar1) {
      FUN_00d83c2d();
    }
    if ((outIt == (int *)0x0) || (outIt != this)) {
      FUN_00d83c2d();
    }
    iVar2 = (int)(container - uVar1) >> 2;
  }
  FUN_012b4a50(outIt,container,1,insertPos);
  uVar1 = *(uint *)((int)this + 4);
  if (*(uint *)((int)this + 8) < uVar1) {
    FUN_00d83c2d();
  }
  uVar1 = uVar1 + iVar2 * 4;
  if ((*(uint *)((int)this + 8) < uVar1) || (uVar1 < *(uint *)((int)this + 4))) {
    FUN_00d83c2d();
  }
  *(uint *)((int)vec + 4) = uVar1;
  *(void **)vec = this;
  return;
}

