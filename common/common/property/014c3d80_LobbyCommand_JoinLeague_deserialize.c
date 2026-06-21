// addr: 0x014c3d80
// name: LobbyCommand_JoinLeague_deserialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool LobbyCommand_JoinLeague_deserialize(void * this, void * stream) */

bool __thiscall LobbyCommand_JoinLeague_deserialize(void *this,void *stream)

{
  void *stream_00;
  char cVar1;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Deserializes a LobbyCommand_JoinLeague object from a scoped stream record. It
                       delegates the actual field/base reads to FUN_013b36a0 and finalizes the scope
                       on success. */
  stream_00 = stream;
  cVar1 = (**(code **)(*(int *)this + 0x10))(stream,&stream);
  if (cVar1 != '\0') {
    bVar2 = LobbyCommand_JoinLeague_deserializeBody(this,stream_00);
    if (bVar2) {
      uVar3 = (**(code **)(*(int *)this + 0x14))(stream_00);
      return (bool)uVar3;
    }
  }
  return false;
}

