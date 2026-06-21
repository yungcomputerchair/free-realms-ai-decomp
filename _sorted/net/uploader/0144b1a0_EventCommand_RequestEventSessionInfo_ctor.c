// addr: 0x0144b1a0
// name: EventCommand_RequestEventSessionInfo_ctor
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EventCommand_RequestEventSessionInfo_ctor(void * this) */

void * __fastcall EventCommand_RequestEventSessionInfo_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs RequestEventSessionInfo command via the common event-command
                       initializer and installs its vtable. Vtable identifies the class. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169a968;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01447280(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = EventCommand_RequestEventSessionInfo::vftable;
  ExceptionList = local_c;
  return this;
}

