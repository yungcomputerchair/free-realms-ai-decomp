// addr: 0x013b2910
// name: LobbyCommand_deserialize
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool LobbyCommand_deserialize(void * this, void * deserializer) */

bool __thiscall LobbyCommand_deserialize(void *this,void *deserializer)

{
  void *reader;
  char cVar1;
  char extraout_AL;
  bool bVar2;
  undefined1 uVar3;
  
                    /* Deserializes the base LobbyCommand envelope by invoking virtual begin/end
                       hooks, NetworkCommand_deserializeTemplate, and Deserializer_readInteger for
                       the command payload field. Evidence is its many
                       LobbyCommand_*_deserializeBody callers. */
  reader = deserializer;
  cVar1 = (**(code **)(*(int *)this + 0x10))(deserializer,&deserializer);
  if (cVar1 != '\0') {
    NetworkCommand_deserializeTemplate(this,reader);
    if (extraout_AL != '\0') {
      bVar2 = Deserializer_readInteger(reader,(int *)((int)this + 4));
      if (bVar2) {
        uVar3 = (**(code **)(*(int *)this + 0x14))(reader);
        return (bool)uVar3;
      }
    }
  }
  return false;
}

