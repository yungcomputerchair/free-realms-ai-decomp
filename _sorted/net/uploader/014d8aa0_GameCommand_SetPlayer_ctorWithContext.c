// addr: 0x014d8aa0
// name: GameCommand_SetPlayer_ctorWithContext
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_SetPlayer_ctorWithContext(void * this, undefined4 context_)
    */

void * __thiscall GameCommand_SetPlayer_ctorWithContext(void *this,undefined4 context_)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a GameCommand_SetPlayer with a supplied context after the
                       GameCommand base constructor. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ad8b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameCommand_ctor(this);
  local_4 = 0;
  *(undefined ***)this = GameCommand_SetPlayer::vftable;
  FUN_0141b3d0(context_);
  ExceptionList = local_c;
  return this;
}

