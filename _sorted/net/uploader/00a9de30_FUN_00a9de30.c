// addr: 0x00a9de30
// name: FUN_00a9de30
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * FUN_00a9de30(void * this) */

void * __fastcall FUN_00a9de30(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Initializes a tiny two-word object to zero under an exception frame, but no
                       class, strings, or vtable identify the type. This may be compiler/runtime
                       support rather than uploader logic. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015c0e0b;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined4 *)this = 0;
  *(undefined4 *)((int)this + 4) = 0;
  FUN_00703540(uVar1);
  ExceptionList = local_c;
  return this;
}

