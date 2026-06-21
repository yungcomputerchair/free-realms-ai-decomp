// addr: 0x014bf310
// name: LobbyCommand_SetDraft_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_SetDraft_ctor(void * this) */

void * __fastcall LobbyCommand_SetDraft_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LobbyCommand_SetDraft by invoking LobbyCommand_ctor, installing
                       its vtable, and clearing draft member fields including a byte flag. Evidence
                       is LobbyCommand_SetDraft::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a99d3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LobbyCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = LobbyCommand_SetDraft::vftable;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  ExceptionList = local_c;
  return this;
}

