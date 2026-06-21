// addr: 0x00a0a5a0
// name: BoolFlag_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * BoolFlag_ctor(void * this) */

void * __fastcall BoolFlag_ctor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a tiny flag object by setting its first word to 1 and invoking a
                       helper under exception tracking. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015ac7eb;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined4 *)this = 1;
  FUN_00a0a330(uVar1);
  ExceptionList = local_c;
  return this;
}

