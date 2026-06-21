// addr: 0x013d8520
// name: LobbyCommand_AcceptAdjournedGame_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_AcceptAdjournedGame_ctor(void * this) */

void * __fastcall LobbyCommand_AcceptAdjournedGame_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LobbyCommand_AcceptAdjournedGame by invoking LobbyCommand_ctor,
                       installing its vtable, and clearing member fields. Evidence is
                       LobbyCommand_AcceptAdjournedGame::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168bdd8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LobbyCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = LobbyCommand_AcceptAdjournedGame::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  ExceptionList = local_c;
  return this;
}

