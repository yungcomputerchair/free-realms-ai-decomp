// addr: 0x013d7da0
// name: PollCommand_AddPollControl_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PollCommand_AddPollControl_dump(void * this, void * serializer) */

void __thiscall PollCommand_AddPollControl_dump(void *this,void *serializer)

{
                    /* Dumps PollCommand_AddPollControl, including base PollCommand data and one
                       integer field, with explicit start/end debug strings naming the class.
                       Evidence is "Starting/Ending PollCommand_AddPollControl" and call to the poll
                       command base dump helper. */
  (**(code **)(*(int *)this + 8))(serializer);
  DebugStream_writeCString(serializer,"Starting PollCommand_AddPollControl\n");
  PollCommand_serialize(this,serializer);
  Serializer_appendInteger(serializer,*(uint *)((int)this + 4));
  DebugStream_writeCString(serializer,"Ending PollCommand_AddPollControl\n");
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

