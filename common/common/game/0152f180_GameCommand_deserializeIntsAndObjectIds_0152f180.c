// addr: 0x0152f180
// name: GameCommand_deserializeIntsAndObjectIds_0152f180
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GameCommand_deserializeIntsAndObjectIds_0152f180(void * this, void *
   deserializer) */

bool __thiscall GameCommand_deserializeIntsAndObjectIds_0152f180(void *this,void *deserializer)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  void *local_4;
  
                    /* Deserializes four integer fields followed by a GameObjectId vector, then
                       finalizes the command. Evidence: consecutive Deserializer_readInteger calls
                       and GameObjectIdVector_deserialize. */
  local_4 = this;
  cVar1 = (**(code **)(*(int *)this + 0x10))(deserializer,&local_4);
  if (cVar1 != '\0') {
    bVar2 = StreamAdapter_readThenCommit(this,deserializer);
    if (bVar2) {
      bVar2 = Deserializer_readInteger(deserializer,(int *)((int)this + 8));
      if (bVar2) {
        bVar2 = Deserializer_readInteger(deserializer,(int *)((int)this + 0xc));
        if (bVar2) {
          bVar2 = Deserializer_readInteger(deserializer,(int *)((int)this + 0x10));
          if (bVar2) {
            bVar2 = Deserializer_readInteger(deserializer,(int *)((int)this + 0x14));
            if (bVar2) {
              FUN_01244910();
              local_4 = deserializer;
              cVar1 = GameObjectIdVector_deserialize((int)this + 0x18);
              if (cVar1 != '\0') {
                uVar3 = (**(code **)(*(int *)this + 0x14))(deserializer);
                return (bool)uVar3;
              }
            }
          }
        }
      }
    }
  }
  return false;
}

