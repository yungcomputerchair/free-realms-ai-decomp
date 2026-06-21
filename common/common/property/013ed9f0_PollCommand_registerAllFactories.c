// addr: 0x013ed9f0
// name: PollCommand_registerAllFactories
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void PollCommand_registerAllFactories(void) */

void PollCommand_registerAllFactories(void)

{
                    /* Registers all PollCommand factories: base PollCommand, AddPoll,
                       AddPollControl, and PollResponse. Evidence is the four called functions
                       already named as PollCommand_*_registerFactory. */
  PollCommand_registerFactory();
  PollCommand_AddPoll_registerFactory();
  PollCommand_AddPollControl_registerFactory();
  PollCommand_PollResponse_registerFactory();
  return;
}

