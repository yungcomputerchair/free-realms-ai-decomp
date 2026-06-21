// addr: 0x014e1460
// name: GameCommand_BeginCardPlayed_ctorWithContext
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_BeginCardPlayed_ctorWithContext(void * this, undefined4
   context_) */

void * __thiscall GameCommand_BeginCardPlayed_ctorWithContext(void *this,undefined4 context_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a GameCommand_BeginCardPlayed with context and clears one payload
                       field. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016af528;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameCommand_ctor(this);
  local_4 = 0;
  *(undefined ***)this = GameCommand_BeginCardPlayed::vftable;
  FUN_0141b3d0(context_);
  *(undefined4 *)((int)this + 0x24) = 0;
  ExceptionList = local_c;
  return this;
}

