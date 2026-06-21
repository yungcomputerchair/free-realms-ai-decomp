// addr: 0x014bd9d0
// name: LobbyCommand_SetFlag_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_SetFlag_ctor(void * this) */

void * __fastcall LobbyCommand_SetFlag_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LobbyCommand_SetFlag by invoking LobbyCommand_ctor, installing
                       LobbyCommand_SetFlag::vftable, and clearing a flag field. Evidence is the
                       vtable assignment. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a95c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LobbyCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = LobbyCommand_SetFlag::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  ExceptionList = local_c;
  return this;
}

