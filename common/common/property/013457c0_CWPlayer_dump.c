// addr: 0x013457c0
// name: CWPlayer_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWPlayer_dump(void * this, void * debugStream) */

void __thiscall CWPlayer_dump(void *this,void *debugStream)

{
  int *piVar1;
  bool bVar2;
  void *stream;
  uint uVar3;
  
                    /* Writes a detailed CWPlayer debug dump including game, account, player, deck,
                       play area, language, and state-machine fields. */
  if (debugStream == (void *)0x0) {
    stream = (void *)(**(code **)(*(int *)this + 4))();
  }
  else {
    stream = (void *)(**(code **)(*(int *)this + 8))(debugStream);
  }
  DebugStream_writeCString(stream,"Starting Player\n");
  DebugStream_writeCString(stream,"mPlayerID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x34));
  DebugStream_writeCString(stream,"mAccountID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x38));
  DebugStream_writeCString(stream,"mGameID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x3c));
  DebugStream_writeCString(stream,"PreferredLanguage: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x40));
  DebugStream_writeCString(stream,"Gender: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x44));
  Game_logGeneral(*(void **)((int)this + 8),"mAccountID: %d",*(undefined4 *)((int)this + 0x38));
  DebugStream_writeCString(stream,"PlayArea: ");
  if (*(int *)((int)this + 4) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = PlayElement_getId();
  }
  Serializer_appendInteger(stream,uVar3);
  DebugStream_writeCString(stream,"GameID: ");
  uVar3 = StateMachine_getCurrentState();
  Serializer_appendInteger(stream,uVar3);
  DebugStream_writeCString(stream,"DeckID: ");
  Serializer_appendString(stream,(void *)((int)this + 0xc));
  DebugStream_writeCString(stream,"Deck: ");
  piVar1 = *(int **)((int)this + 0x28);
  if (piVar1 == (int *)0x0) {
    Serializer_appendInteger(stream,1);
  }
  else {
    bVar2 = Serializer_appendInteger(stream,0);
    if (bVar2) {
      (**(code **)(*piVar1 + 0x28))(stream);
    }
  }
  DebugStream_writeCString(stream,"PlayerCard: ");
  if (*(int *)((int)this + 0x30) == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = PlayElement_getId();
  }
  Serializer_appendInteger(stream,uVar3);
  DebugStream_writeCString(stream,"Ending Player\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

