// addr: 0x014ce770
// name: LobbyCommand_AddIgnore_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_AddIgnore_serialize(int * this, int serializer) */

void __thiscall LobbyCommand_AddIgnore_serialize(void *this,int serializer)

{
  void *pvVar1;
  
                    /* Serializes LobbyCommand_AddIgnore by emitting the base lobby command, an
                       AccountID list, and start/end markers. */
  pvVar1 = (void *)serializer;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString((void *)serializer,"Starting LobbyCommand_AddIgnore\n");
  LobbyCommand_dump(this,(int *)serializer,pvVar1);
  DebugStream_writeCString((void *)serializer,"AccountID List:\n");
  STLVector_int_serialize(&stack0x00000000,(int)this + 8);
  DebugStream_writeCString((void *)serializer,"Ending LobbyCommand_AddIgnore\n");
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

