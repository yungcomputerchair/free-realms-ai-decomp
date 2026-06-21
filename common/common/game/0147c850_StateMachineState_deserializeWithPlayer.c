// addr: 0x0147c850
// name: StateMachineState_deserializeWithPlayer
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool StateMachineState_deserializeWithPlayer(void * this, void * reader) */

bool __thiscall StateMachineState_deserializeWithPlayer(void *this,void *reader)

{
  code *pcVar1;
  char cVar2;
  char extraout_AL;
  bool bVar3;
  undefined1 uVar4;
  void *local_4;
  
                    /* Deserializes a StateMachineState-derived object by invoking virtual pre-read,
                       base StateMachineState_deserialize, reading an additional player/id field
                       into offset 0xf4, then invoking virtual post-read. */
  local_4 = this;
  cVar2 = (**(code **)(*(int *)this + 0x10))(reader,&local_4);
  if (cVar2 != '\0') {
    StateMachineState_deserialize(this,reader);
    if (extraout_AL != '\0') {
      bVar3 = Deserializer_readInteger(reader,(int *)&local_4);
      if (bVar3) {
        pcVar1 = *(code **)(*(int *)this + 0x14);
        *(void **)((int)this + 0xf4) = local_4;
        uVar4 = (*pcVar1)(reader);
        return (bool)uVar4;
      }
    }
  }
  return false;
}

