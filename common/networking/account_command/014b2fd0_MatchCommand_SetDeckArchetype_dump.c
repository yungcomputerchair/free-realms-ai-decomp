// addr: 0x014b2fd0
// name: MatchCommand_SetDeckArchetype_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_SetDeckArchetype_dump(void * this, void * stream) */

void __thiscall MatchCommand_SetDeckArchetype_dump(void *this,void *stream)

{
  void *pvVar1;
  
                    /* Appends a textual/debug dump for MatchCommand_SetDeckArchetype, including the
                       Deck Archetype field. Evidence is the Starting/Ending
                       MatchCommand_SetDeckArchetype strings and Deck Archetype label. */
  pvVar1 = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting MatchCommand_SetDeckArchetype\n");
  MatchCommand_dump(this,stream,pvVar1);
  DebugStream_writeCString(stream,"Deck Archetype: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xc));
  DebugStream_writeCString(stream,"Ending MatchCommand_SetDeckArchetype\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

