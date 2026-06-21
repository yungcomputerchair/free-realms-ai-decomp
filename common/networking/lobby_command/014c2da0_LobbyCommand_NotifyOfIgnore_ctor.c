// addr: 0x014c2da0
// name: LobbyCommand_NotifyOfIgnore_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_NotifyOfIgnore_ctor(void * this) */

void * __fastcall LobbyCommand_NotifyOfIgnore_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LobbyCommand_NotifyOfIgnore by invoking LobbyCommand_ctor,
                       installing its vtable, and clearing an id/boolean pair. Evidence is
                       LobbyCommand_NotifyOfIgnore::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016aa4b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LobbyCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = LobbyCommand_NotifyOfIgnore::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined1 *)((int)this + 0xc) = 0;
  ExceptionList = local_c;
  return this;
}

