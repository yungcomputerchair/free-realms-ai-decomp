// addr: 0x0141a060
// name: GameCommand_ReadyForStartOfGame_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * GameCommand_ReadyForStartOfGame_ctor(void * this) */

void * __fastcall GameCommand_ReadyForStartOfGame_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs ReadyForStartOfGame command via common GameCommand base and
                       installs its vtable. Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01693618;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  GameCommand_ctor(this);
  *(undefined ***)this = GameCommand_ReadyForStartOfGame::vftable;
  ExceptionList = local_c;
  return this;
}

