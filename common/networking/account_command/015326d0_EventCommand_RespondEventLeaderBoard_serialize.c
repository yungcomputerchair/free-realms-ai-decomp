// addr: 0x015326d0
// name: EventCommand_RespondEventLeaderBoard_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void EventCommand_RespondEventLeaderBoard_serialize(int * this, void * stream)
    */

void __thiscall EventCommand_RespondEventLeaderBoard_serialize(void *this,void *stream)

{
                    /* Serializes EventCommand_RespondEventLeaderBoard after the EventCommand base,
                       writing multiple scalar and vector fields plus a ValueData list. */
  (**(code **)(*(int *)this + 8))(stream);
  SerializableIntField_serialize(this,stream);
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x18);
  STLVector_string_serialize((int)this + 0x28);
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x38);
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x88));
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x8c));
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xc));
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x48);
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x58);
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x78);
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x10));
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x14));
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x68);
  FUN_015324d0((int)this + 0x90);
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

