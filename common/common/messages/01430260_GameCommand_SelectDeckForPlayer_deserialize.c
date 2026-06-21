// addr: 0x01430260
// name: GameCommand_SelectDeckForPlayer_deserialize
// subsystem: common/common/messages
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GameCommand_SelectDeckForPlayer_deserialize(void * thisObj, void *
   deserializer) */

bool __thiscall
GameCommand_SelectDeckForPlayer_deserialize(void *this,void *thisObj,void *deserializer)

{
  void *this_00;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Deserializes GameCommand_SelectDeckForPlayer by reading the GameCommand base,
                       deck id/string member, and referenced deck object pointer before leaving the
                       object. Evidence is the neighboring GameCommand_SelectDeckForPlayer
                       vtable/strings and calls to GameCommand_deserializeCommon plus field readers.
                        */
  this_00 = thisObj;
  cVar1 = (**(code **)(*(int *)this + 0x10))(thisObj,&thisObj);
  if (cVar1 != '\0') {
    cVar1 = GameCommand_deserializeCommon(this_00);
    if (cVar1 != '\0') {
      bVar2 = Deserializer_readString(this_00,(void *)((int)this + 0x24));
      if (bVar2) {
        cVar1 = FUN_01302e20(this_00,(int)this + 0x40);
        if (cVar1 != '\0') {
          uVar3 = (**(code **)(*(int *)this + 0x14))(this_00);
          return (bool)uVar3;
        }
      }
    }
  }
  return false;
}

