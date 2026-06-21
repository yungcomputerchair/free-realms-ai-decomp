// addr: 0x012c84d0
// name: PointerVector_pushBack
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PointerVector_pushBack(void * vec, void ** value) */

void __thiscall PointerVector_pushBack(void *this,void *vec,void **value)

{
  void **ppvVar1;
  undefined4 *puVar2;
  void **position;
  undefined1 local_8 [8];
  
                    /* Appends one pointer-sized value to a vector, using direct storage when
                       capacity remains and otherwise reallocation/insertion through FUN_012c80c0.
                       The layout and arithmetic are 4-byte pointer elements. */
  ppvVar1 = *(void ***)((int)this + 4);
  if ((ppvVar1 != (void **)0x0) &&
     ((uint)(*(int *)((int)this + 8) - (int)ppvVar1 >> 2) <
      (uint)(*(int *)((int)this + 0xc) - (int)ppvVar1 >> 2))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    *puVar2 = *(undefined4 *)vec;
    *(undefined4 **)((int)this + 8) = puVar2 + 1;
    return;
  }
  position = *(void ***)((int)this + 8);
  if (position < ppvVar1) {
    FUN_00d83c2d();
  }
  PointerVector_insertOne(this,local_8,this,position,vec);
  return;
}

