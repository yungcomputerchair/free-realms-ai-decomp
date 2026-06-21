// addr: 0x014bdde0
// name: LobbyCommand_SetDraftReady_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_SetDraftReady_ctor(void * this) */

void * __fastcall LobbyCommand_SetDraftReady_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LobbyCommand_SetDraftReady by invoking LobbyCommand_ctor,
                       installing its vtable, and zeroing ready/draft fields. Evidence is
                       LobbyCommand_SetDraftReady::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a96b8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LobbyCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = LobbyCommand_SetDraftReady::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  ExceptionList = local_c;
  return this;
}

