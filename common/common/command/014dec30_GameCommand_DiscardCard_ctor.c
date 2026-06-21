// addr: 0x014dec30
// name: GameCommand_DiscardCard_ctor
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_DiscardCard_ctor(void * this, void * game) */

void * __thiscall GameCommand_DiscardCard_ctor(void *this,void *game)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructor for GameCommand_DiscardCard: runs GameCommand base construction,
                       installs the GameCommand_DiscardCard vftable, initializes card/string/vector
                       fields, stores the game, and clears the random flag byte. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016aee13;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameCommand_ctor(this);
  *(undefined ***)this = GameCommand_DiscardCard::vftable;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x48) = 0xf;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined1 *)((int)this + 0x34) = 0;
  local_4 = 1;
  *(undefined4 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x2c) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  FUN_0141b3d0(game);
  *(undefined1 *)((int)this + 0x4c) = 0;
  ExceptionList = local_c;
  return this;
}

