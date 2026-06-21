// addr: 0x0135cfe0
// name: ValueDataList_assign
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ValueDataList_assign(void * this, void * other) */

void * __thiscall ValueDataList_assign(void *this,void *other)

{
  void *_Memory;
  char cVar1;
  undefined4 uVar2;
  int iVar3;
  uint uVar4;
  int iVar5;
  uint uVar6;
  
                    /* Assigns/copies a vector-like list of 4-byte ValueData entries, reallocating
                       or reusing capacity and destroying old storage as needed. */
  if (this == other) {
    return this;
  }
  iVar3 = *(int *)((int)other + 4);
  if (iVar3 != 0) {
    uVar6 = *(int *)((int)other + 8) - iVar3 >> 2;
    if (uVar6 != 0) {
      _Memory = *(void **)((int)this + 4);
      if (_Memory == (void *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(int *)((int)this + 8) - (int)_Memory >> 2;
      }
      if (uVar6 <= uVar4) {
        FUN_01330c20(iVar3,*(int *)((int)other + 8),_Memory);
        if (*(int *)((int)other + 4) == 0) {
          *(undefined4 *)((int)this + 8) = *(undefined4 *)((int)this + 4);
          return this;
        }
        *(int *)((int)this + 8) =
             *(int *)((int)this + 4) +
             (*(int *)((int)other + 8) - *(int *)((int)other + 4) >> 2) * 4;
        return this;
      }
      if (_Memory == (void *)0x0) {
        uVar4 = 0;
      }
      else {
        uVar4 = *(int *)((int)this + 0xc) - (int)_Memory >> 2;
      }
      if (uVar4 < uVar6) {
        if (_Memory != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free(_Memory);
        }
        if (*(int *)((int)other + 4) == 0) {
          iVar3 = 0;
        }
        else {
          iVar3 = *(int *)((int)other + 8) - *(int *)((int)other + 4) >> 2;
        }
        cVar1 = FUN_01260da0(iVar3);
        if (cVar1 == '\0') {
          return this;
        }
        uVar2 = FUN_01353120(*(undefined4 *)((int)other + 4),*(undefined4 *)((int)other + 8),
                             *(undefined4 *)((int)this + 4));
        *(undefined4 *)((int)this + 8) = uVar2;
        return this;
      }
      if (_Memory == (void *)0x0) {
        iVar5 = 0;
      }
      else {
        iVar5 = *(int *)((int)this + 8) - (int)_Memory >> 2;
      }
      iVar5 = iVar3 + iVar5 * 4;
      FUN_01330c20(iVar3,iVar5,_Memory);
      uVar2 = FUN_01353120(iVar5,*(undefined4 *)((int)other + 8),*(undefined4 *)((int)this + 8));
      *(undefined4 *)((int)this + 8) = uVar2;
      return this;
    }
  }
  PointerVector_clear(this);
  return this;
}

