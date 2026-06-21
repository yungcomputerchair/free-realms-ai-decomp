// addr: 0x014da830
// name: GameCommand_ReplaceCard_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_ReplaceCard_ctor(void * this) */

void * __fastcall GameCommand_ReplaceCard_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a GameCommand_ReplaceCard command object by running its common
                       base constructor, installing the GameCommand_ReplaceCard vtable, and clearing
                       command-specific fields. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ade58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameCommand_ctor(this);
  *(undefined ***)this = GameCommand_ReplaceCard::vftable;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  ExceptionList = local_c;
  return this;
}

