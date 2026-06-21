// addr: 0x013dfde0
// name: EventCommand_RequestCurrentSessionInfo_sendIfRequested
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RequestCurrentSessionInfo_sendIfRequested(char shouldSend)
    */

void EventCommand_RequestCurrentSessionInfo_sendIfRequested(char shouldSend)

{
  void *handle;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* If the flag is nonzero it does nothing; if zero it constructs
                       EventCommand_RequestCurrentSessionInfo, ensures the client command system
                       exists, sends it, and destroys it. Evidence: ctor/dtor callees install
                       EventCommand_RequestCurrentSessionInfo::vftable. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168d0f8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (shouldSend == '\0') {
    EventCommand_RequestCurrentSessionInfo_ctor(local_14);
    local_4 = 0;
    DisplayActionManager_ensureSingleton();
    CommandHandle_releaseIfPresent(handle);
    local_4 = 0xffffffff;
    EventCommand_RequestCurrentSessionInfo_dtor(local_14);
  }
  ExceptionList = local_c;
  return;
}

