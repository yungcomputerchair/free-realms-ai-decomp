// addr: 0x014d9fc0
// name: GameCommand_RevealCards_deserialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GameCommand_RevealCards_deserialize(void * this, void * stream) */

bool __thiscall GameCommand_RevealCards_deserialize(void *this,void *stream)

{
  char cVar1;
  undefined1 uVar2;
  void *local_4;
  
                    /* Deserializes a GameCommand_RevealCards object by reading common GameCommand
                       data and clearing/reading its card list field. */
  local_4 = this;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&local_4);
  if (cVar1 != '\0') {
    cVar1 = GameCommand_deserializeCommon(stream);
    if (cVar1 != '\0') {
      local_4 = stream;
      Deserializer_readIntegerVector(&local_4,(void *)((int)this + 0x24));
      uVar2 = (**(code **)(*(int *)this + 0x14))(stream);
      return (bool)uVar2;
    }
  }
  return false;
}

