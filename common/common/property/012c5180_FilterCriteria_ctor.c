// addr: 0x012c5180
// name: FilterCriteria_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FilterCriteria_ctor(void * this) */

void * __fastcall FilterCriteria_ctor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a FilterCriteria object by installing FilterCriteria::vftable and
                       zeroing fields at +4,+8,+0x18. Evidence is the explicit vftable write in the
                       decompiled body. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166e9db;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)this = FilterCriteria::vftable;
  FUN_012fa910(uVar1);
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x18) = 0;
  ExceptionList = local_c;
  return this;
}

