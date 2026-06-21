// addr: 0x013b46f0
// name: LobbyCommand_SendUChatText_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_SendUChatText_ctor(void * this) */

void * __fastcall LobbyCommand_SendUChatText_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LobbyCommand_SendUChatText by invoking LobbyCommand_ctor,
                       installing its vtable, and initializing multiple SSO string fields plus a
                       flag. Evidence is LobbyCommand_SendUChatText::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01687e6f;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LobbyCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = LobbyCommand_SendUChatText::vftable;
  *(undefined4 *)((int)this + 0x20) = 0xf;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined1 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x3c) = 0xf;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined1 *)((int)this + 0x28) = 0;
  *(undefined4 *)((int)this + 0x58) = 0xf;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined1 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x74) = 0xf;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined1 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0x90) = 0xf;
  *(undefined4 *)((int)this + 0x8c) = 0;
  *(undefined1 *)((int)this + 0x7c) = 0;
  *(undefined1 *)((int)this + 0x94) = 0;
  ExceptionList = local_c;
  return this;
}

