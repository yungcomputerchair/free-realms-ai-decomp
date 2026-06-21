// addr: 0x013b2320
// name: MatchCommand_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * MatchCommand_ctor(void * this) */

void * __fastcall MatchCommand_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs MatchCommand by invoking LobbyCommand_ctor, assigning
                       MatchCommand::vftable, and clearing its match field. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01687848;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  LobbyCommand_ctor(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = MatchCommand::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  ExceptionList = local_c;
  return this;
}

