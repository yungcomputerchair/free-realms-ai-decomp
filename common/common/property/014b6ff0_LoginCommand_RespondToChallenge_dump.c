// addr: 0x014b6ff0
// name: LoginCommand_RespondToChallenge_dump
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LoginCommand_RespondToChallenge_dump(void * this, void * debug_stream) */

void __thiscall LoginCommand_RespondToChallenge_dump(void *this,void *debug_stream)

{
  void *map;
  
                    /* Dumps a LoginCommand_RespondToChallenge, including base LoginCommand data, a
                       16-byte buffer, a dword-pair map, and a series of strings. */
  map = debug_stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(debug_stream,"Starting LoginCommand_RespondToChallenge\n");
  LoginCommand_writeDebug(this,debug_stream);
  GrowableBuffer_append(debug_stream,(void *)((int)this + 4),&DAT_00000010,(int)map);
  Property_serializeDwordPairMap(&stack0x00000000,(void *)((int)this + 0x14),map);
  Serializer_appendString(debug_stream,(void *)((int)this + 0x20));
  Serializer_appendString(debug_stream,(void *)((int)this + 0x3c));
  Serializer_appendString(debug_stream,(void *)((int)this + 0x58));
  Serializer_appendString(debug_stream,(void *)((int)this + 0x74));
  Serializer_appendString(debug_stream,(void *)((int)this + 0x90));
  Serializer_appendString(debug_stream,(void *)((int)this + 0xac));
  Serializer_appendString(debug_stream,(void *)((int)this + 200));
  Serializer_appendString(debug_stream,(void *)((int)this + 0xe4));
  Serializer_appendString(debug_stream,(void *)((int)this + 0x100));
  Serializer_appendString(debug_stream,(void *)((int)this + 0x11c));
  (**(code **)(*(int *)this + 0xc))(debug_stream);
  return;
}

