// addr: 0x014cb3e0
// name: StdVector_PropertySetPtr_pushBack
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdVector_PropertySetPtr_pushBack(void * this, void * value) */

void __thiscall StdVector_PropertySetPtr_pushBack(void *this,void *value)

{
  uint uVar1;
  undefined4 *puVar2;
  uint uVar3;
  undefined1 local_8 [8];
  
                    /* Appends one 4-byte element to a vector-like container, using the fast path
                       when capacity remains and helper 014cb2c0 to grow/insert otherwise. Callers
                       in BulkJoin/BulkIntroduceAccount pass newly allocated PropertySet pointers or
                       deserialized pointer values, so the element is best interpreted as
                       PropertySet*. */
  uVar1 = *(uint *)((int)this + 4);
  if ((uVar1 != 0) &&
     ((uint)((int)(*(int *)((int)this + 8) - uVar1) >> 2) <
      (uint)((int)(*(int *)((int)this + 0xc) - uVar1) >> 2))) {
    puVar2 = *(undefined4 **)((int)this + 8);
    *puVar2 = *(undefined4 *)value;
    *(undefined4 **)((int)this + 8) = puVar2 + 1;
    return;
  }
  uVar3 = *(uint *)((int)this + 8);
  if (uVar3 < uVar1) {
    FUN_00d83c2d();
  }
  FUN_014cb2c0(local_8,this,uVar3,value);
  return;
}

