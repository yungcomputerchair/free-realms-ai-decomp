// addr: 0x0144a540
// name: EventCommand_RequestCurrentSessionInfo_ctor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * EventCommand_RequestCurrentSessionInfo_ctor(void * this) */

void * __fastcall EventCommand_RequestCurrentSessionInfo_ctor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs EventCommand_RequestCurrentSessionInfo by running base
                       event-command setup and installing its vtable. Evidence is
                       EventCommand_RequestCurrentSessionInfo::vftable and create/sendIfRequested
                       callers. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169a698;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_01447280(DAT_01b839d8 ^ (uint)&stack0xffffffec);
  *(undefined ***)this = EventCommand_RequestCurrentSessionInfo::vftable;
  ExceptionList = local_c;
  return this;
}

