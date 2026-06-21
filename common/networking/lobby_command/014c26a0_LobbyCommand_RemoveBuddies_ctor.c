// addr: 0x014c26a0
// name: LobbyCommand_RemoveBuddies_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_RemoveBuddies_ctor(void * this) */

void * __fastcall LobbyCommand_RemoveBuddies_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LobbyCommand_RemoveBuddies by invoking LobbyCommand_ctor,
                       installing its vtable, and clearing buddy-list fields. Evidence is
                       LobbyCommand_RemoveBuddies::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016aa343;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LobbyCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = LobbyCommand_RemoveBuddies::vftable;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  ExceptionList = local_c;
  return this;
}

