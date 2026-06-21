// addr: 0x014c3880
// name: LobbyCommand_LeaveLeague_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_LeaveLeague_ctor(void * this) */

void * __fastcall LobbyCommand_LeaveLeague_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LeaveLeague lobby command via the common lobby-command initializer
                       and installs its vtable. Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016aa6f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_013d9830(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = LobbyCommand_LeaveLeague::vftable;
  ExceptionList = local_c;
  return this;
}

