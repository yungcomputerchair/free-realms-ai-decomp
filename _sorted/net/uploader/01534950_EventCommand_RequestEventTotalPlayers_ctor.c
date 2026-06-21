// addr: 0x01534950
// name: EventCommand_RequestEventTotalPlayers_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EventCommand_RequestEventTotalPlayers_ctor(void * this) */

void * __fastcall EventCommand_RequestEventTotalPlayers_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs EventCommand_RequestEventTotalPlayers by running the EventCommand
                       base constructor and assigning the derived vtable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016bbab8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01447280(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = EventCommand_RequestEventTotalPlayers::vftable;
  ExceptionList = local_c;
  return this;
}

