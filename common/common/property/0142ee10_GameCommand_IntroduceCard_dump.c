// addr: 0x0142ee10
// name: GameCommand_IntroduceCard_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_IntroduceCard_dump(void * this, void * serializer) */

void __thiscall GameCommand_IntroduceCard_dump(void *this,void *serializer)

{
                    /* Dumps GameCommand_IntroduceCard after the base GameCommand data, writing
                       introduced card id and two introduced instance id fields. Evidence is the
                       exact class and field-label strings. */
  (**(code **)(*(int *)this + 8))(serializer);
  DebugStream_writeCString(serializer,"Starting GameCommand_IntroduceCard\n");
  GameCommand_serialize(this,serializer);
  DebugStream_writeCString(serializer,"Introduced Card ID: ");
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x24));
  DebugStream_writeCString(serializer,"Introduced Instance ID (first): ");
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x28));
  DebugStream_writeCString(serializer,"Introduced Instance ID (second): ");
  Serializer_appendInteger(serializer,*(uint *)((int)this + 0x2c));
  DebugStream_writeCString(serializer,"Ending GameCommand_IntroduceCard\n");
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

