// addr: 0x014e57c0
// name: FUN_014e57c0
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ArchCommand_AddArchetypesToDB_deserialize(void * this, void * stream) */

bool __thiscall ArchCommand_AddArchetypesToDB_deserialize(void *this,void *stream)

{
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  void *local_4;
  
                    /* Deserializes an AddArchetypesToDB command including common command data, an
                       integer count/id, and an archetype list/vector field. */
  local_4 = this;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&local_4);
  if (cVar1 != '\0') {
    cVar1 = Deserializer_readIntegerField(stream);
    if (cVar1 != '\0') {
      bVar2 = Deserializer_readInteger(stream,(int *)&local_4);
      if (bVar2) {
        *(void **)((int)this + 0xc) = local_4;
        cVar1 = FUN_013d1010(stream,(int)this + 8);
        if (cVar1 != '\0') {
          uVar3 = (**(code **)(*(int *)this + 0x14))(stream);
          return (bool)uVar3;
        }
      }
    }
  }
  return false;
}

