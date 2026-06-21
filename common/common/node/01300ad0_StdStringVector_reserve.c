// addr: 0x01300ad0
// name: StdStringVector_reserve
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void StdStringVector_reserve(void * this, uint newCapacity_) */

void __thiscall StdStringVector_reserve(void *this,uint newCapacity_)

{
  uint *puVar1;
  uint uVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  uint uStack_38;
  int local_28 [2];
  int local_20 [2];
  int local_18;
  undefined1 *local_14;
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Reserves capacity for a vector of 0x1c-byte std::string elements. It checks
                       the maximum capacity, allocates a new buffer, copies the existing string
                       range, destroys the old range, and updates begin/end/capacity pointers. */
  local_8 = 0xffffffff;
  puStack_c = &LAB_01675b70;
  local_10 = ExceptionList;
  uStack_38 = DAT_01b839d8 ^ (uint)&stack0xfffffffc;
  local_14 = (undefined1 *)&uStack_38;
  ExceptionList = &local_10;
  puVar1 = &uStack_38;
  if (0x9249249 < newCapacity_) {
    FUN_01232450();
    puVar1 = (uint *)local_14;
  }
  local_14 = (undefined1 *)puVar1;
  uVar2 = 0;
  if (*(int *)((int)this + 4) != 0) {
    uVar2 = (*(int *)((int)this + 0xc) - *(int *)((int)this + 4)) / 0x1c;
  }
  if (uVar2 < newCapacity_) {
    iVar3 = FUN_01231620(newCapacity_);
    local_8 = 0;
    local_18 = iVar3;
    piVar4 = StdStringVector_makeEndIterator(this,local_20);
    piVar5 = StdStringVector_makeBeginIterator(this,local_28);
    FUN_01300650(*piVar5,piVar5[1],*piVar4,piVar4[1],iVar3);
    local_8 = 0xffffffff;
    if (*(void **)((int)this + 4) != (void *)0x0) {
      StdStringRange_destroy(*(void **)((int)this + 4),*(void **)((int)this + 8));
                    /* WARNING: Subroutine does not return */
      _free(*(void **)((int)this + 4));
    }
    *(uint *)((int)this + 0xc) = local_18 + newCapacity_ * 0x1c;
    *(int *)((int)this + 8) = local_18;
    *(int *)((int)this + 4) = local_18;
  }
  ExceptionList = local_10;
  return;
}

