// addr: 0x01467500
// name: PlaySingleCardState_deserialize
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PlaySingleCardState_deserialize(void * this, void * reader) */

bool __thiscall PlaySingleCardState_deserialize(void *this,void *reader)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  void *local_4;
  
                    /* Runs deserialize hooks, deserializes base StateMachineState with player, and
                       reads an additional field via FUN_01300540. */
  local_4 = this;
  cVar1 = (**(code **)(*(int *)this + 0x10))(reader,&local_4);
  if (cVar1 != '\0') {
    bVar2 = StateMachineState_deserializeWithPlayer(this,reader);
    if (bVar2) {
      local_4 = reader;
      bVar2 = Deserializer_readIntegerVector(&local_4,(void *)((int)this + 0xf8));
      if (bVar2) {
        uVar3 = (**(code **)(*(int *)this + 0x14))(reader);
        return (bool)uVar3;
      }
    }
  }
  return false;
}

