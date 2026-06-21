// addr: 0x00993fb0
// name: EmbeddedWebBrowserLibrary_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EmbeddedWebBrowserLibrary_ctor(void * this) */

void * __fastcall EmbeddedWebBrowserLibrary_ctor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs EmbeddedWebBrowserLibrary, clears state flags, initializes
                       embedded browser/library storage, and clears a large status field. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0159beb9;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffe8;
  ExceptionList = &local_c;
  *(undefined ***)this = EmbeddedWebBrowserLibrary::vftable;
  *(undefined4 *)((int)this + 4) = 0;
  *(undefined1 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 9) = 0;
  FUN_00ae8360(0);
  local_4 = 0;
  *(undefined4 *)((int)this + 0x2ba70) = 0;
  FUN_00703540(uVar1);
  ExceptionList = local_c;
  return this;
}

