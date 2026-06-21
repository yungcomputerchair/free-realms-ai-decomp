// addr: 0x014b2a80
// name: PollCommand_AddPoll_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void PollCommand_AddPoll_serialize(void * this, void * stream) */

void __thiscall PollCommand_AddPoll_serialize(void *this,void *stream)

{
  int *piVar1;
  bool bVar2;
  
                    /* Writes PollCommand_AddPoll, including base PollCommand fields and a nullable
                       poll object pointer whose own serializer is invoked when present. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting PollCommand_AddPoll\n");
  PollCommand_serialize(this,stream);
  piVar1 = *(int **)((int)this + 4);
  if (piVar1 == (int *)0x0) {
    Serializer_appendInteger(stream,1);
  }
  else {
    bVar2 = Serializer_appendInteger(stream,0);
    if (bVar2) {
      (**(code **)(*piVar1 + 0x28))(stream);
    }
  }
  DebugStream_writeCString(stream,"Ending PollCommand_AddPoll\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

