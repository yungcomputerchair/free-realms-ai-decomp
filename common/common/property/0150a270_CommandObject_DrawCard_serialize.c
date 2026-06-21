// addr: 0x0150a270
// name: CommandObject_DrawCard_serialize
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CommandObject_DrawCard_serialize(void * this, void * serializer) */

void __thiscall CommandObject_DrawCard_serialize(void *this,void *serializer)

{
  uint value;
  
                    /* Serializes/dumps CommandObject_DrawCard fields: card source, draw position,
                       disposition, optional player id, number to draw, and reshuffle checks.
                       Evidence is the CommandObject_DrawCard strings and field labels. */
  (**(code **)(*(int *)this + 8))(serializer);
  DebugStream_writeCString(serializer,"Starting CommandObject_DrawCard\n");
  CommandObject_dump(this,serializer);
  DebugStream_writeCString(serializer,"CardSource: ");
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x11c));
  DebugStream_writeCString(serializer,"Card Draw Position: ");
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x120));
  DebugStream_writeCString(serializer,"Card Disposition: ");
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x124));
  DebugStream_writeCString(serializer,"Player: ");
  if (*(int *)((int)this + 0x128) == 0) {
    value = 0;
  }
  else {
    value = GamePlayer_getPlayerId();
  }
  Serializer_appendInteger(serializer,value);
  DebugStream_writeCString(serializer,"NumberToDraw");
  Serializer_appendInteger(serializer,*(uint *)((int)this + 300));
  DebugStream_writeCString(serializer,"ReshuffleChecks: ");
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x130));
  DebugStream_writeCString(serializer,"Ending CommandObject_DrawCard\n");
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

