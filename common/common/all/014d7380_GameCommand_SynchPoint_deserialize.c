// addr: 0x014d7380
// name: GameCommand_SynchPoint_deserialize
// subsystem: common/common/all
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool GameCommand_SynchPoint_deserialize(void * this, void * stream) */

bool __thiscall GameCommand_SynchPoint_deserialize(void *this,void *stream)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  void *local_4;
  
                    /* Deserializes a GameCommand_SynchPoint by reading common GameCommand fields
                       and its additional integer/list field. */
  local_4 = this;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&local_4);
  if (cVar1 != '\0') {
    cVar1 = GameCommand_deserializeCommon(stream);
    if (cVar1 != '\0') {
      local_4 = stream;
      bVar2 = Deserializer_readStringVector(&local_4,(void *)((int)this + 0x24));
      if (bVar2) {
        uVar3 = (**(code **)(*(int *)this + 0x14))(stream);
        return (bool)uVar3;
      }
    }
  }
  return false;
}

