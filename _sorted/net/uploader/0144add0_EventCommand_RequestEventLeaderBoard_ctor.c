// addr: 0x0144add0
// name: EventCommand_RequestEventLeaderBoard_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EventCommand_RequestEventLeaderBoard_ctor(void * this) */

void * __fastcall EventCommand_RequestEventLeaderBoard_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs RequestEventLeaderBoard command, initializes the common
                       event-command base, installs vtable, and clears one field. Vtable identifies
                       the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169a878;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01447280(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = EventCommand_RequestEventLeaderBoard::vftable;
  *(undefined4 *)((int)this + 8) = 0;
  ExceptionList = local_c;
  return this;
}

