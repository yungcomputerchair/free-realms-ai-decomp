// addr: 0x0142f1a0
// name: LobbyCommand_InfoEnumMessage_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_InfoEnumMessage_ctor(void * this) */

void * __fastcall LobbyCommand_InfoEnumMessage_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LobbyCommand_InfoEnumMessage by invoking LobbyCommand_ctor,
                       installing its vtable, and clearing three fields. Evidence is
                       LobbyCommand_InfoEnumMessage::vftable and Game_handleNoActionTimeout caller.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01696028;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LobbyCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = LobbyCommand_InfoEnumMessage::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  ExceptionList = local_c;
  return this;
}

