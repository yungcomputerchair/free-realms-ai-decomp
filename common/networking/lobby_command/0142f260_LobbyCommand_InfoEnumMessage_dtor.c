// addr: 0x0142f260
// name: LobbyCommand_InfoEnumMessage_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_InfoEnumMessage_dtor(void * this) */

void __fastcall LobbyCommand_InfoEnumMessage_dtor(void *this)

{
  uint uVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor for LobbyCommand_InfoEnumMessage; it deletes two owned polymorphic
                       members at offsets 0xc and 0x10, clears them, then calls LobbyCommand dtor.
                       Evidence is LobbyCommand_InfoEnumMessage::vftable. */
  puStack_8 = &LAB_01696058;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  *(undefined ***)this = LobbyCommand_InfoEnumMessage::vftable;
  local_4 = 0;
  if (*(undefined4 **)((int)this + 0xc) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0xc))(1,uVar1);
    *(undefined4 *)((int)this + 0xc) = 0;
  }
  if (*(undefined4 **)((int)this + 0x10) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x10))(1);
    *(undefined4 *)((int)this + 0x10) = 0;
  }
  local_4 = 0xffffffff;
  LobbyCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

