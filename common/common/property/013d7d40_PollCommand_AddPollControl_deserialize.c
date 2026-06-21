// addr: 0x013d7d40
// name: PollCommand_AddPollControl_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PollCommand_AddPollControl_deserialize(void * this, void * serializer) */

bool __thiscall PollCommand_AddPollControl_deserialize(void *this,void *serializer)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  void *local_4;
  
                    /* Deserializes a PollCommand_AddPollControl by reading base command data, a
                       poll-related subobject, and then an integer control/poll id into the object.
                       It returns false on the first failed read. */
  local_4 = this;
  cVar2 = (**(code **)(*(int *)this + 0x10))(serializer,&local_4);
  if (cVar2 != '\0') {
    bVar3 = LoginCommand_deserialize(this,serializer);
    if (bVar3) {
      bVar3 = Deserializer_readInteger(serializer,(int *)&local_4);
      if (bVar3) {
        pcVar1 = *(code **)(*(int *)this + 0x14);
        *(void **)((int)this + 4) = local_4;
        uVar4 = (*pcVar1)(serializer);
        return (bool)uVar4;
      }
    }
  }
  return false;
}

