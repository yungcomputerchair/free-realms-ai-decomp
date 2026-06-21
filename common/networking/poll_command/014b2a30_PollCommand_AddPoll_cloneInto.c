// addr: 0x014b2a30
// name: PollCommand_AddPoll_cloneInto
// subsystem: common/networking/poll_command
// source (binary assert): common/networking/poll_command/PollCommandAddPoll.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PollCommand_AddPoll_cloneInto(void * target) */

void PollCommand_AddPoll_cloneInto(void *target)

{
  void *target_00;
  
                    /* RTTI-checks the supplied target as PollCommand_AddPoll and delegates to
                       PollCommand cloneInto; this derived command has no extra fields copied in
                       this routine. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &PollCommand_AddPoll::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("lobbyCommand","..\\common\\networking\\poll_command\\PollCommandAddPoll.cpp",0x32)
    ;
  }
  PollCommand_cloneInto(target_00);
  return;
}

