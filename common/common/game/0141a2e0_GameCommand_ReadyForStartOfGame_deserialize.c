// addr: 0x0141a2e0
// name: GameCommand_ReadyForStartOfGame_deserialize
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GameCommand_ReadyForStartOfGame_deserialize(void * this, void * stream)
    */

bool __thiscall GameCommand_ReadyForStartOfGame_deserialize(void *this,void *stream)

{
  void *pvVar1;
  char cVar2;
  undefined1 uVar3;
  
                    /* Deserializes the Ready For Start Of Game command by invoking the virtual
                       stream begin, base GameCommand deserializer, and virtual commit. */
  pvVar1 = stream;
  cVar2 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar2 != '\0') {
    cVar2 = GameCommand_deserializeCommon(pvVar1);
    if (cVar2 != '\0') {
      uVar3 = (**(code **)(*(int *)this + 0x14))(pvVar1);
      return (bool)uVar3;
    }
  }
  return false;
}

