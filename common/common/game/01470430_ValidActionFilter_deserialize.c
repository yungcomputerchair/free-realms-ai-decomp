// addr: 0x01470430
// name: ValidActionFilter_deserialize
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ValidActionFilter_deserialize(void * this, void * packet) */

bool __thiscall ValidActionFilter_deserialize(void *this,void *packet)

{
  char cVar1;
  undefined1 uVar2;
  uint uVar3;
  void *local_4;
  
                    /* Deserializes a filter-like object by running the base deserialize,
                       clearing/resetting state, reading a vector at +0xf8 and a pair-vector at
                       +0x104, then finalizing through a vfunc. */
  local_4 = this;
  cVar1 = (**(code **)(*(int *)this + 0x10))(packet,&local_4);
  if (cVar1 != '\0') {
    StateMachineState_deserializeWithPlayer(this,packet);
    local_4 = packet;
    cVar1 = GameObjectIdVector_deserialize((int)this + 0xf8);
    if (cVar1 != '\0') {
      local_4 = packet;
      uVar3 = Game_deserializeIntPairVector_01300190(&local_4,(void *)((int)this + 0x104));
      if ((char)uVar3 != '\0') {
        uVar2 = (**(code **)(*(int *)this + 0x14))(packet);
        return (bool)uVar2;
      }
    }
  }
  return false;
}

