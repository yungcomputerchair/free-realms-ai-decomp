// addr: 0x014302c0
// name: GameCommand_SelectDeckForPlayer_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_SelectDeckForPlayer_ctor(void * this) */

void * __fastcall GameCommand_SelectDeckForPlayer_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs SelectDeckForPlayer command, initializes an inline deck-name
                       string and another field, and installs the vtable. Vtable identifies the
                       class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016963b3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameCommand_ctor(this);
  *(undefined ***)this = GameCommand_SelectDeckForPlayer::vftable;
  *(undefined4 *)((int)this + 0x3c) = 0xf;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x40) = 0;
  ExceptionList = local_c;
  return this;
}

