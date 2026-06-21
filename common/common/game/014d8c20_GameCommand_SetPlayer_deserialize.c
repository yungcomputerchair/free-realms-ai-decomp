// addr: 0x014d8c20
// name: GameCommand_SetPlayer_deserialize
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GameCommand_SetPlayer_deserialize(void * this, void * stream) */

bool __thiscall GameCommand_SetPlayer_deserialize(void *this,void *stream)

{
  void *pvVar1;
  char cVar2;
  undefined1 uVar3;
  
                    /* Deserializes a command with no subclass payload beyond the GameCommand base,
                       wrapping the stream begin/end virtual calls around the base GameCommand
                       deserialize. */
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

