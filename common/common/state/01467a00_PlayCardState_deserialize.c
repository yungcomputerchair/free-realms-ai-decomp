// addr: 0x01467a00
// name: PlayCardState_deserialize
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool PlayCardState_deserialize(void * this, void * reader) */

bool __thiscall PlayCardState_deserialize(void *this,void *reader)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int unaff_EDI;
  int local_4;
  
                    /* Runs deserialize hooks, deserializes base StateMachineState with player, and
                       reads two integer/boolean fields into flags at +0xf8/+0xf9. */
  cVar1 = (**(code **)(*(int *)this + 0x10))(reader,&local_4);
  if (cVar1 != '\0') {
    bVar2 = StateMachineState_deserializeWithPlayer(this,reader);
    if (bVar2) {
      bVar2 = Deserializer_readInteger(reader,&local_4);
      if (bVar2) {
        *(bool *)((int)this + 0xf8) = local_4 != 0;
        bVar2 = Deserializer_readInteger(reader,(int *)&stack0xfffffff0);
        if (bVar2) {
          *(bool *)((int)this + 0xf9) = unaff_EDI != 0;
          uVar3 = (**(code **)(*(int *)this + 0x14))(reader);
          return (bool)uVar3;
        }
      }
    }
  }
  return false;
}

