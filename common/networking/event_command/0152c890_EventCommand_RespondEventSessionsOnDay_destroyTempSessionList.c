// addr: 0x0152c890
// name: EventCommand_RespondEventSessionsOnDay_destroyTempSessionList
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RespondEventSessionsOnDay_destroyTempSessionList(void *
   first, void * allocation, int arg3, int arg4) */

void EventCommand_RespondEventSessionsOnDay_destroyTempSessionList
               (void *first,void *allocation,int arg3,int arg4)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* EH cleanup helper for the temporary/session-list object used while cloning
                       RespondEventSessionsOnDay; it calls a collection cleanup and frees the
                       allocation when non-null. */
  puStack_8 = &LAB_016ba6c8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  FUN_005f1e5c(&first);
  local_4 = 0xffffffff;
  if (allocation != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(allocation);
  }
  ExceptionList = local_c;
  return;
}

