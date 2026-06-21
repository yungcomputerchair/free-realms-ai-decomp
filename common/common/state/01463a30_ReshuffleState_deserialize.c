// addr: 0x01463a30
// name: ReshuffleState_deserialize
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ReshuffleState_deserialize(void * this, void * reader) */

bool __thiscall ReshuffleState_deserialize(void *this,void *reader)

{
  void *reader_00;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Runs deserialize hooks, deserializes StateMachineState with player, then
                       reads a string/value field at +0xf8. */
  reader_00 = reader;
  cVar1 = (**(code **)(*(int *)this + 0x10))(reader,&reader);
  if (cVar1 != '\0') {
    bVar2 = StateMachineState_deserializeWithPlayer(this,reader_00);
    if (bVar2) {
      bVar2 = Deserializer_readString(reader_00,(void *)((int)this + 0xf8));
      if (bVar2) {
        uVar3 = (**(code **)(*(int *)this + 0x14))(reader_00);
        return (bool)uVar3;
      }
    }
  }
  return false;
}

