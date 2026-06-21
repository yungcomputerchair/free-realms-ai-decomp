// addr: 0x014b2520
// name: PollCommand_PollResponse_cloneInto
// subsystem: common/networking/poll_command
// source (binary assert): common/networking/poll_command/PollCommandPollResponse.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PollCommand_PollResponse_cloneInto(void * this, void * target) */

void __thiscall PollCommand_PollResponse_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Copies a PollCommand_PollResponse into an RTTI-checked target by running
                       PollCommand cloneInto and copying the response fields at +4 and +8. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &PollCommand_PollResponse::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("pollCommand","..\\common\\networking\\poll_command\\PollCommandPollResponse.cpp",
                 0x2e);
  }
  PollCommand_cloneInto(target_00);
  *(undefined4 *)((int)target_00 + 4) = *(undefined4 *)((int)this + 4);
  *(undefined4 *)((int)target_00 + 8) = *(undefined4 *)((int)this + 8);
  return;
}

