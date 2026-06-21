// addr: 0x014a0770
// name: ValueDataList_getBackValuePtr
// subsystem: common/common/node
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: uint ValueDataList_getBackValuePtr(void * this) */

uint __fastcall ValueDataList_getBackValuePtr(void *this)

{
  uint uVar1;
  
                    /* Returns a pointer to the last 4-byte entry in a ValueData list/vector after
                       range checks. ActionNode.cpp uses it for valueList.back() assertions. */
  uVar1 = *(uint *)((int)this + 8);
  if (uVar1 < *(uint *)((int)this + 4)) {
    FUN_00d83c2d();
  }
  if ((*(uint *)((int)this + 8) < uVar1 - 4) || (uVar1 - 4 < *(uint *)((int)this + 4))) {
    FUN_00d83c2d();
  }
  if (*(uint *)((int)this + 8) <= uVar1 - 4) {
    FUN_00d83c2d();
  }
  return uVar1 - 4;
}

