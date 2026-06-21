// addr: 0x0108f4e0
// name: FUN_0108f4e0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FUN_0108f4e0(void * this) */

void __fastcall FUN_0108f4e0(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes an unnamed YouTube uploader helper containing a FunctionObject
                       deque and two empty IString fields. */
  puStack_8 = &LAB_01642659;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  local_4 = 0;
  *(undefined4 *)((int)this + 8) = 0;
  FUN_0108e1f0(uVar1);
  *(undefined ***)((int)this + 0x40) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0x44) = &DAT_01cb845f;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined ***)((int)this + 0x50) = SoeUtil::IString<char>::vftable;
  *(undefined **)((int)this + 0x54) = &DAT_01cb845f;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined1 *)((int)this + 0x60) = 0;
  ExceptionList = local_c;
  return;
}

