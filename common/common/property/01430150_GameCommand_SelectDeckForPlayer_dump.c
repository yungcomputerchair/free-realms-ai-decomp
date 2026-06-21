// addr: 0x01430150
// name: GameCommand_SelectDeckForPlayer_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_SelectDeckForPlayer_dump(void * this, void * debugStream) */

void __thiscall GameCommand_SelectDeckForPlayer_dump(void *this,void *debugStream)

{
  int *piVar1;
  bool bVar2;
  
                    /* Dumps GameCommand_SelectDeckForPlayer, including base GameCommand fields,
                       deck id, and optional embedded deck object. Evidence is the 'Starting/Ending
                       GameCommand_SelectDeckForPlayer' strings. */
  (**(code **)(*(int *)this + 8))(debugStream);
  DebugStream_writeCString(debugStream,"Starting GameCommand_SelectDeckForPlayer\n");
  GameCommand_serialize(this,debugStream);
  DebugStream_writeCString(debugStream,"Deck ID: ");
  Serializer_appendString(debugStream,(void *)((int)this + 0x24));
  DebugStream_writeCString(debugStream,"Deck:");
  piVar1 = *(int **)((int)this + 0x40);
  if (piVar1 == (int *)0x0) {
    Serializer_appendInteger(debugStream,1);
  }
  else {
    bVar2 = Serializer_appendInteger(debugStream,0);
    if (bVar2) {
      (**(code **)(*piVar1 + 0x28))(debugStream);
    }
  }
  DebugStream_writeCString(debugStream,"Ending GameCommand_SelectDeckForPlayer\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

