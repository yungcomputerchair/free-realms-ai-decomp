// addr: 0x0144a600
// name: EventCommand_RequestCurrentSessionInfo_dtor
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RequestCurrentSessionInfo_dtor(void * this) */

void __fastcall EventCommand_RequestCurrentSessionInfo_dtor(void *this)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Destructor: installs the EventCommand_RequestCurrentSessionInfo vftable and
                       then invokes the base event-command destructor/helper. Evidence is the
                       vftable symbol in the body and destructor-shaped SEH cleanup. */
  puStack_8 = &LAB_0169a6c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined ***)this = EventCommand_RequestCurrentSessionInfo::vftable;
  local_4 = 0xffffffff;
  EventCommand_dtor(this);
  ExceptionList = local_c;
  return;
}

