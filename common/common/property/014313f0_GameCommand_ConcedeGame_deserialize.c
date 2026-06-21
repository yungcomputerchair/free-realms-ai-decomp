// addr: 0x014313f0
// name: GameCommand_ConcedeGame_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GameCommand_ConcedeGame_deserialize(void * this, void * stream) */

bool __thiscall GameCommand_ConcedeGame_deserialize(void *this,void *stream)

{
  void *this_00;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  int unaff_EDI;
  
                    /* Deserializes GameCommand_ConcedeGame, reading base GameCommand state and, for
                       newer stream versions, a boolean flag. */
  this_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if ((cVar1 != '\0') && (cVar1 = GameCommand_deserializeCommon(this_00), cVar1 != '\0')) {
    if (2 < (int)this) {
      bVar2 = Deserializer_readInteger(this_00,(int *)&stack0xfffffff4);
      if (!bVar2) {
        return false;
      }
      *(bool *)((int)this + 0x24) = unaff_EDI != 0;
    }
    uVar3 = (**(code **)(*(int *)this + 0x14))(this_00);
    return (bool)uVar3;
  }
  return false;
}

