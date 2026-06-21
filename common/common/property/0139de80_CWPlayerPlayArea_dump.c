// addr: 0x0139de80
// name: CWPlayerPlayArea_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWPlayerPlayArea_dump(void * this, void * debugStream) */

void __thiscall CWPlayerPlayArea_dump(void *this,void *debugStream)

{
  uint uVar1;
  
                    /* Writes debug output for a CWPlayerPlayArea, including the base PlayArea and
                       draw deck, discard pile, and hand object ids. Evidence is the
                       'Starting/Ending PlayerPlayArea' and field label strings. */
  (**(code **)(*(int *)this + 8))(debugStream);
  DebugStream_writeCString(debugStream,"Starting PlayerPlayArea\n");
  (**(code **)(*(int *)this + 8))(debugStream);
  DebugStream_writeCString(debugStream,"Starting PlayArea\n");
  PlayElement_serialize(this,debugStream);
  DebugStream_writeCString(debugStream,"Ending PlayArea\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  DebugStream_writeCString(debugStream,"Draw Deck: ");
  if (*(int *)((int)this + 0x40) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = PlayElement_getId();
  }
  Serializer_appendInteger(debugStream,uVar1);
  DebugStream_writeCString(debugStream,"Discard Pile: ");
  if (*(int *)((int)this + 0x44) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = PlayElement_getId();
  }
  Serializer_appendInteger(debugStream,uVar1);
  DebugStream_writeCString(debugStream,"Hand: ");
  if (*(int *)((int)this + 0x48) == 0) {
    uVar1 = 0;
  }
  else {
    uVar1 = PlayElement_getId();
  }
  Serializer_appendInteger(debugStream,uVar1);
  DebugStream_writeCString(debugStream,"Ending PlayerPlayArea\n");
  (**(code **)(*(int *)this + 0xc))(debugStream);
  return;
}

