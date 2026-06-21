// addr: 0x013d8030
// name: LobbyCommand_ChangeStatus_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_ChangeStatus_ctor(void * this) */

void * __fastcall LobbyCommand_ChangeStatus_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LobbyCommand_ChangeStatus by running LobbyCommand_ctor and
                       installing LobbyCommand_ChangeStatus::vftable. Evidence is the class vtable
                       assignment. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168bcb8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LobbyCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = LobbyCommand_ChangeStatus::vftable;
  ExceptionList = local_c;
  return this;
}

