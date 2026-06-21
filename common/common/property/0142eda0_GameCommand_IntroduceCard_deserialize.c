// addr: 0x0142eda0
// name: GameCommand_IntroduceCard_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GameCommand_IntroduceCard_deserialize(void * this, void * stream) */

bool __thiscall GameCommand_IntroduceCard_deserialize(void *this,void *stream)

{
  void *this_00;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Deserializes GameCommand_IntroduceCard by reading base GameCommand state
                       followed by three integer/card-related fields. */
  this_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 != '\0') {
    cVar1 = GameCommand_deserializeCommon(this_00);
    if (cVar1 != '\0') {
      bVar2 = Deserializer_readInteger(this_00,(int *)((int)this + 0x24));
      if (bVar2) {
        bVar2 = Deserializer_readInteger(this_00,(int *)((int)this + 0x28));
        if (bVar2) {
          bVar2 = Deserializer_readInteger(this_00,(int *)((int)this + 0x2c));
          if (bVar2) {
            uVar3 = (**(code **)(*(int *)this + 0x14))(this_00);
            return (bool)uVar3;
          }
        }
      }
    }
  }
  return false;
}

