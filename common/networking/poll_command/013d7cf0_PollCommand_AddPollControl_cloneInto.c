// addr: 0x013d7cf0
// name: PollCommand_AddPollControl_cloneInto
// subsystem: common/networking/poll_command
// source (binary assert): common/networking/poll_command/PollCommandAddPollControl.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PollCommand_AddPollControl_cloneInto(void * this, void * target) */

void __thiscall PollCommand_AddPollControl_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Copies a PollCommand_AddPollControl into an already allocated target after
                       RTTI-checking it as PollCommand_AddPollControl, then invokes the PollCommand
                       base cloneInto and copies the field at +4. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &PollCommand_AddPollControl::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("pollCommand","..\\common\\networking\\poll_command\\PollCommandAddPollControl.cpp"
                 ,0x3a);
  }
  PollCommand_cloneInto(target_00);
  *(undefined4 *)((int)target_00 + 4) = *(undefined4 *)((int)this + 4);
  return;
}

