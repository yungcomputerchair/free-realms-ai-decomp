// addr: 0x01470f00
// name: ExecuteRuleState_deserialize
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ExecuteRuleState_deserialize(void * this, void * reader) */

bool __thiscall ExecuteRuleState_deserialize(void *this,void *reader)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  void *local_4;
  
                    /* Runs deserialize hooks, deserializes StateMachineState with player, reads an
                       integer field and a boolean flag, then runs post-hook. */
  local_4 = this;
  cVar1 = (**(code **)(*(int *)this + 0x10))(reader,&local_4);
  if (cVar1 != '\0') {
    bVar2 = StateMachineState_deserializeWithPlayer(this,reader);
    if (bVar2) {
      bVar2 = Deserializer_readInteger(reader,(int *)((int)this + 0xf8));
      if (bVar2) {
        bVar2 = Deserializer_readInteger(reader,(int *)&local_4);
        if (bVar2) {
          *(bool *)((int)this + 0xfc) = local_4 != (void *)0x0;
          uVar3 = (**(code **)(*(int *)this + 0x14))(reader);
          return (bool)uVar3;
        }
      }
    }
  }
  return false;
}

