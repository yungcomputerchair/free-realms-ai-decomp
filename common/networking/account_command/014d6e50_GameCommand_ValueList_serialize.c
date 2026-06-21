// addr: 0x014d6e50
// name: GameCommand_ValueList_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_ValueList_serialize(int * this, int serializer) */

void __thiscall GameCommand_ValueList_serialize(void *this,int serializer)

{
                    /* Serializes GameCommand_ValueList by writing the GameCommand base data and a
                       ValueData list at this+9. */
  (**(code **)(*(int *)this + 8))(serializer);
  DebugStream_writeCString((void *)serializer,"Starting GameCommand_ValueList\n");
  GameCommand_serialize(this,(void *)serializer);
  STLVector_string_serialize((int)this + 0x24);
  DebugStream_writeCString((void *)serializer,"Ending GameCommand_ValueList\n");
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

