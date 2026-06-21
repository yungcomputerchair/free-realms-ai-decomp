// addr: 0x014d89e0
// name: GameCommand_SetPlayer_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_SetPlayer_ctor(void * this) */

void * __fastcall GameCommand_SetPlayer_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a GameCommand_SetPlayer command object by running its common base
                       constructor, installing the GameCommand_SetPlayer vtable, and clearing
                       command-specific fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ad888;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameCommand_ctor(this);
  *(undefined ***)this = GameCommand_SetPlayer::vftable;
  ExceptionList = local_c;
  return this;
}

