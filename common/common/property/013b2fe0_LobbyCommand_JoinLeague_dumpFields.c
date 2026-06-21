// addr: 0x013b2fe0
// name: LobbyCommand_JoinLeague_dumpFields
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_JoinLeague_dumpFields(void * this, void * debugStream) */

void __thiscall LobbyCommand_JoinLeague_dumpFields(void *this,void *debugStream)

{
  int *piVar1;
  bool bVar2;
  void *pvVar3;
  
                    /* Writes the field payload used by LobbyCommand_JoinLeague: base LobbyCommand
                       fields, several integers/strings, an int vector, optional deck-like object,
                       and additional result text. Evidence is caller 014c3dc0 wrapping this with
                       'Starting/Ending LobbyCommand_JoinLeague'. */
  pvVar3 = debugStream;
  (**(code **)(*(int *)this + 8))();
  LobbyCommand_dump(this,debugStream,pvVar3);
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 8));
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0xc));
  Serializer_appendString(debugStream,(void *)((int)this + 0x10));
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x2c);
  Serializer_appendString(debugStream,(void *)((int)this + 0x3c));
  piVar1 = *(int **)((int)this + 0x78);
  if (piVar1 == (int *)0x0) {
    Serializer_appendInteger(debugStream,1);
  }
  else {
    bVar2 = Serializer_appendInteger(debugStream,0);
    if (bVar2) {
      (**(code **)(*piVar1 + 0x28))(debugStream);
    }
  }
  Serializer_appendInteger(debugStream,*(uint *)((int)this + 0x58));
  Serializer_appendString(debugStream,(void *)((int)this + 0x5c));
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

