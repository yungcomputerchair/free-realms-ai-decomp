// addr: 0x01430a50
// name: GameCommand_AcceptDraw_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GameCommand_AcceptDraw_deserialize(void * this, void * stream) */

bool __thiscall GameCommand_AcceptDraw_deserialize(void *this,void *stream)

{
  code *pcVar1;
  char cVar2;
  bool bVar3;
  undefined1 uVar4;
  void *local_4;
  
                    /* Deserializes GameCommand_AcceptDraw, reading base GameCommand state and a
                       boolean response flag. */
  local_4 = this;
  cVar2 = (**(code **)(*(int *)this + 0x10))(stream,&local_4);
  if (cVar2 != '\0') {
    cVar2 = GameCommand_deserializeCommon(stream);
    if (cVar2 != '\0') {
      bVar3 = Deserializer_readInteger(stream,(int *)&local_4);
      if (bVar3) {
        pcVar1 = *(code **)(*(int *)this + 0x14);
        *(bool *)((int)this + 0x24) = local_4 != (void *)0x0;
        uVar4 = (*pcVar1)(stream);
        return (bool)uVar4;
      }
    }
  }
  return false;
}

