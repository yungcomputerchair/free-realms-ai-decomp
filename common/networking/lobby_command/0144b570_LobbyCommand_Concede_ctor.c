// addr: 0x0144b570
// name: LobbyCommand_Concede_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_Concede_ctor(void * this) */

void * __fastcall LobbyCommand_Concede_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LobbyCommand_Concede by invoking LobbyCommand_ctor, installing
                       LobbyCommand_Concede::vftable, and clearing one member. Evidence is vtable
                       and create/createAndRegister callers. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169aa58;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LobbyCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = LobbyCommand_Concede::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  ExceptionList = local_c;
  return this;
}

