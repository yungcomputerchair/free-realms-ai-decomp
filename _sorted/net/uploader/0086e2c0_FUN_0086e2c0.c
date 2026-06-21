// addr: 0x0086e2c0
// name: FUN_0086e2c0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_0086e2c0(void * this) */

void * __fastcall FUN_0086e2c0(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes a small two-field object and calls the same helper twice under
                       exception handling. Class identity and semantics are unclear. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01574d09;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  FUN_0086cef0(uVar1);
  local_4 = 0;
  FUN_0086cef0();
  ExceptionList = local_c;
  return this;
}

