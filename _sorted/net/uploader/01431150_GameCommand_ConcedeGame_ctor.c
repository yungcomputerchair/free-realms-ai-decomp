// addr: 0x01431150
// name: GameCommand_ConcedeGame_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_ConcedeGame_ctor(void * this) */

void * __fastcall GameCommand_ConcedeGame_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs ConcedeGame command and clears its concede flag/status byte.
                       Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01696718;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameCommand_ctor(this);
  *(undefined ***)this = GameCommand_ConcedeGame::vftable;
  *(undefined1 *)((int)this + 0x24) = 0;
  ExceptionList = local_c;
  return this;
}

