// addr: 0x014c6e80
// name: LobbyCommand_ChangeBulkStatus_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_ChangeBulkStatus_dump(int * this, void * stream) */

void __thiscall LobbyCommand_ChangeBulkStatus_dump(void *this,void *stream)

{
  void *vector;
  
                    /* Dumps LobbyCommand_ChangeBulkStatus with base LobbyCommand data, a
                       vector/list field, and a bulk status integer vector. */
  vector = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting LobbyCommand_ChangeBulkStatus\n");
  LobbyCommand_dump(this,stream,vector);
  STLVector_int_serialize(&stack0x00000000,(int)this + 8);
  STLVector_int_serialize_014c6a60(&stack0x00000000,(void *)((int)this + 0x18),(int)vector);
  DebugStream_writeCString(stream,"Ending LobbyCommand_ChangeBulkStatus\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

