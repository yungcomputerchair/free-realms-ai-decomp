// addr: 0x00b30950
// name: FUN_00b30950
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_00b30950(void * this, undefined4 arg_) */

void * __thiscall FUN_00b30950(void *this,undefined4 arg_)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Ctor-shaped initializer that calls several helper/base constructors and
                       clears fields at offsets 0x1c0 and 0x1c4. No vtable or string evidence
                       identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015d54c3;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  FUN_00b2c6a0(1);
  local_4 = 0;
  FUN_00d5e2f0(uVar1);
  local_4 = CONCAT31(local_4._1_3_,1);
  *(undefined4 *)((int)this + 0x1c0) = 0;
  *(undefined4 *)((int)this + 0x1c4) = 0;
  FUN_00d5e5e0(arg_);
  ExceptionList = local_c;
  return this;
}

