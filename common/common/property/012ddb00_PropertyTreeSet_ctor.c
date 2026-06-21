// addr: 0x012ddb00
// name: PropertyTreeSet_ctor
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PropertyTreeSet_ctor(void * this) */

void __fastcall PropertyTreeSet_ctor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a small aggregate containing multiple PropertyTree21 members and
                       an additional property-tree object under SEH cleanup. Evidence is three calls
                       to PropertyTree21_ctor followed by related property tree
                       construction/destruction helpers. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016715a4;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  PropertyTree21_ctor((int)this);
  local_4 = 0;
  PropertyTree21_ctor((int)this + 0xc);
  local_4._0_1_ = 1;
  PropertyTree21_ctor((int)this + 0x18);
  local_4._0_1_ = 2;
  FUN_012dda90(uVar1);
  local_4 = CONCAT31(local_4._1_3_,3);
  FUN_012d9ec0();
  ExceptionList = local_c;
  return;
}

