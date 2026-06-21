// addr: 0x014dc740
// name: GameCommand_GameOverReached_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_GameOverReached_ctor(void * this) */

void * __fastcall GameCommand_GameOverReached_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a GameCommand_GameOverReached command object by running its common
                       base constructor, installing the GameCommand_GameOverReached vtable, and
                       clearing command-specific fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ae5f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameCommand_ctor(this);
  *(undefined ***)this = GameCommand_GameOverReached::vftable;
  ExceptionList = local_c;
  return this;
}

