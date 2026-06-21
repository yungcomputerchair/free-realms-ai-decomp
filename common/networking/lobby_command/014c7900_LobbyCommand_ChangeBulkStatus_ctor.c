// addr: 0x014c7900
// name: LobbyCommand_ChangeBulkStatus_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * LobbyCommand_ChangeBulkStatus_ctor(void * this) */

void * __fastcall LobbyCommand_ChangeBulkStatus_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs LobbyCommand_ChangeBulkStatus by invoking LobbyCommand_ctor,
                       installing its vtable, and zeroing two vector-like triplets. Evidence is
                       LobbyCommand_ChangeBulkStatus::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016aafce;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LobbyCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = LobbyCommand_ChangeBulkStatus::vftable;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 0x14) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined4 *)((int)this + 0x24) = 0;
  ExceptionList = local_c;
  return this;
}

