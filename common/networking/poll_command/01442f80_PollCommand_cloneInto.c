// addr: 0x01442f80
// name: PollCommand_cloneInto
// subsystem: common/networking/poll_command
// source (binary assert): common/networking/poll_command/PollCommand.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PollCommand_cloneInto(void * target) */

void PollCommand_cloneInto(void *target)

{
  void *this;
  
                    /* RTTI-checks the supplied object as PollCommand and forwards to the
                       NetworkCommand base cloneInto; no PollCommand-local fields are copied here.
                        */
  this = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                              &PollCommand::RTTI_Type_Descriptor,0);
  if (this == (void *)0x0) {
    FUN_012f5a60("pollCommand","..\\common\\networking\\poll_command\\PollCommand.cpp",0x1d);
  }
  NetworkCommand_cloneBaseFields(this);
  return;
}

