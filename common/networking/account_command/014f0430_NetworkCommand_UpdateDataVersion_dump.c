// addr: 0x014f0430
// name: NetworkCommand_UpdateDataVersion_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void NetworkCommand_UpdateDataVersion_dump(int * this, void * stream) */

void __thiscall NetworkCommand_UpdateDataVersion_dump(void *this,void *stream)

{
                    /* Dumps NetworkCommand_UpdateDataVersion with message/version scalar and two
                       string vectors after base NetworkCommand data. */
  (**(code **)(*(int *)this + 8))(stream);
  DebugStream_writeCString(stream,"Starting NetworkCommand_UpdateDataVersion\n");
  NetworkCommand_dump(this,stream);
  DebugStream_writeCString(stream,"Message:\n");
  Serializer_appendInteger(stream,*(uint *)((int)this + 4));
  STLVector_string_serialize((int)this + 8);
  STLVector_string_serialize((int)this + 0x18);
  DebugStream_writeCString(stream,"Ending NetworkCommand_UpdateDataVersion\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

