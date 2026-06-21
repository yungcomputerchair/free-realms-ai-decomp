// addr: 0x012b5a40
// name: UIntVector_pushBack
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UIntVector_pushBack(void * vec, uint * value) */

void __thiscall UIntVector_pushBack(void *this,void *vec,uint *value)

{
  uint uVar1;
  undefined4 *puVar2;
  uint container;
  uint unaff_EDI;
  undefined1 local_8 [8];
  
                    /* Appends a 32-bit value to a vector, writing directly when capacity remains
                       and otherwise using the insert/reallocate helper at the end iterator. */
  uVar1 = *(uint *)((int)this + 4);
  if ((uVar1 != 0) &&
     ((uint)((int)(*(int *)((int)this + 8) - uVar1) >> 2) <
      (uint)((int)(*(int *)((int)this + 0xc) - uVar1) >> 2))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    *puVar2 = *(undefined4 *)vec;
    *(undefined4 **)((int)this + 8) = puVar2 + 1;
    return;
  }
  container = *(uint *)((int)this + 8);
  if (container < uVar1) {
    FUN_00d83c2d();
  }
  UIntVector_insertOne(this,local_8,this,container,(int)vec,unaff_EDI);
  return;
}

