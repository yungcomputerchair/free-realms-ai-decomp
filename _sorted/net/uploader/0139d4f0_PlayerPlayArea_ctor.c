// addr: 0x0139d4f0
// name: PlayerPlayArea_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * PlayerPlayArea_ctor(void * this) */

void * __fastcall PlayerPlayArea_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs PlayerPlayArea via PlayArea_ctor, assigns PlayerPlayArea vtable
                       slots, clears player-specific fields, and sets play-area type to 0. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016853c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  PlayArea_ctor(this);
  *(undefined ***)this = PlayerPlayArea::vftable;
  *(undefined ***)((int)this + 8) = PlayerPlayArea::vftable;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0;
  ExceptionList = local_c;
  return this;
}

