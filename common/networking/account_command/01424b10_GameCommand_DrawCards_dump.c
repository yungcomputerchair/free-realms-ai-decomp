// addr: 0x01424b10
// name: GameCommand_DrawCards_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void GameCommand_DrawCards_dump(int * this, void * stream) */

void __thiscall GameCommand_DrawCards_dump(void *this,void *stream)

{
                    /* Dumps GameCommand_DrawCards with base GameCommand data, card-source/list
                       fields, drawn card instance data, and a scalar count/source. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting GameCommand_DrawCards\n");
  GameCommand_serialize(this,stream);
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x38);
  DebugStream_writeCString(stream,"Drawn Card Instance Data:\n");
  STLVector_intPair_serialize(&stack0x00000000,(int)this + 0x28);
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x24));
  DebugStream_writeCString(stream,"Ending GameCommand_DrawCards\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

