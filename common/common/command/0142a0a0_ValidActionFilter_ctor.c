// addr: 0x0142a0a0
// name: ValidActionFilter_ctor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * ValidActionFilter_ctor(void * this) */

void * __fastcall ValidActionFilter_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a ValidActionFilter, installs both vftable pointers, and
                       initializes filter fields/flags. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016957a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  PlayElement_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = ValidActionFilter::vftable;
  *(undefined ***)((int)this + 8) = ValidActionFilter::vftable;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined1 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined1 *)((int)this + 0x54) = 1;
  ExceptionList = local_c;
  return this;
}

