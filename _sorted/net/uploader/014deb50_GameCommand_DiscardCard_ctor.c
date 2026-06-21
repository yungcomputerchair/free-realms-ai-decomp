// addr: 0x014deb50
// name: GameCommand_DiscardCard_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_DiscardCard_ctor(void * this) */

void * __fastcall GameCommand_DiscardCard_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a GameCommand_DiscardCard command object by running its common
                       base constructor, installing the GameCommand_DiscardCard vtable, and clearing
                       command-specific fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016aede3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameCommand_ctor(this);
  *(undefined ***)this = GameCommand_DiscardCard::vftable;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x48) = 0xf;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined1 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined1 *)((int)this + 0x4c) = 0;
  ExceptionList = local_c;
  return this;
}

