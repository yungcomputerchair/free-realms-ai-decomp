// addr: 0x01264520
// name: PointerVector_pushBack
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PointerVector_pushBack(void * vector, void ** item) */

void __thiscall PointerVector_pushBack(void *this,void *vector,void **item)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 local_8 [8];
  
                    /* Pushes one pointer-sized item into a vector when capacity remains, otherwise
                       calls the vector growth/insert helper. */
  uVar1 = *(uint *)((int)this + 4);
  if ((uVar1 != 0) &&
     ((uint)((int)(*(int *)((int)this + 8) - uVar1) >> 2) <
      (uint)((int)(*(int *)((int)this + 0xc) - uVar1) >> 2))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    *puVar2 = *(undefined4 *)vector;
    *(undefined4 **)((int)this + 8) = puVar2 + 1;
    return;
  }
  uVar3 = *(uint *)((int)this + 8);
  if (uVar3 < uVar1) {
    FUN_00d83c2d();
  }
  FUN_012619f0(local_8,this,uVar3,vector);
  return;
}

