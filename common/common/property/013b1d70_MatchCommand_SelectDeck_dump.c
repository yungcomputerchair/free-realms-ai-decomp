// addr: 0x013b1d70
// name: MatchCommand_SelectDeck_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_SelectDeck_dump(void * this, void * debugStream) */

void __thiscall MatchCommand_SelectDeck_dump(void *this,void *debugStream)

{
  int *piVar1;
  bool bVar2;
  void *pvVar3;
  
                    /* Dumps MatchCommand_SelectDeck including base MatchCommand fields, deck id,
                       deck-id-only flag, and optional embedded deck object. Evidence is the
                       'Starting/Ending MatchCommand_SelectDeck' strings. */
  pvVar3 = debugStream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(debugStream,"Starting MatchCommand_SelectDeck\n");
  MatchCommand_dump(this,debugStream,pvVar3);
  DebugStream_writeCString(debugStream,"Deck ID: ");
  Serializer_appendString(debugStream,(void *)((int)this + 0xc));
  DebugStream_writeCString(debugStream,"Deck ID Only: ");
  Serializer_appendInteger(debugStream,(uint)*(byte *)((int)this + 0x28));
  piVar1 = *(int **)((int)this + 0x2c);
  if (piVar1 == (int *)0x0) {
    Serializer_appendInteger(debugStream,1);
  }
  else {
    bVar2 = Serializer_appendInteger(debugStream,0);
    if (bVar2) {
      (**(code **)(*piVar1 + 0x28))(debugStream);
    }
  }
  DebugStream_writeCString(debugStream,"Ending MatchCommand_SelectDeck\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

