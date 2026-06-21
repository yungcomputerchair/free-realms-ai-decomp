// addr: 0x012c51e0
// name: FilterCriteria_dtor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FilterCriteria_dtor(void * this) */

void __fastcall FilterCriteria_dtor(void *this)

{
  uint uVar1;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructs a FilterCriteria object by restoring FilterCriteria::vftable,
                       clearing field +0x18 if set, and running the stack cookie/cleanup helper.
                       Evidence is the vftable assignment and destructor-style cleanup path. */
  puStack_8 = &LAB_0166ea0b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&local_10;
  ExceptionList = &local_c;
  *(undefined ***)this = FilterCriteria::vftable;
  if (*(int *)((int)this + 0x18) != 0) {
    *(undefined4 *)((int)this + 0x18) = 0;
  }
  local_4 = 0xffffffff;
  local_10 = this;
  FUN_01300cd0(uVar1);
  ExceptionList = local_c;
  return;
}

