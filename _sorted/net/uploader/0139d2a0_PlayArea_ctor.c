// addr: 0x0139d2a0
// name: PlayArea_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PlayArea_ctor(void * this) */

void * __fastcall PlayArea_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs PlayArea, initializing its base, duplicated vtable/interface slot,
                       type value 2, and clearing state. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01685308;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  PlayElement_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = PlayArea::vftable;
  *(undefined ***)((int)this + 8) = PlayArea::vftable;
  *(undefined4 *)((int)this + 0x3c) = 2;
  *(undefined4 *)((int)this + 0x40) = 0;
  ExceptionList = local_c;
  return this;
}

