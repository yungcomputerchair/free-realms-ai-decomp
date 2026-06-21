// addr: 0x014cebf0
// name: LobbyCommand_AddBuddies_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_AddBuddies_serialize(int * this, int serializer) */

void __thiscall LobbyCommand_AddBuddies_serialize(void *this,int serializer)

{
  void *pvVar1;
  
                    /* Serializes LobbyCommand_AddBuddies by emitting the base lobby command and its
                       integer buddy list. */
  pvVar1 = (void *)serializer;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString((void *)serializer,"Starting LobbyCommand_AddBuddies\n");
  LobbyCommand_dump(this,(int *)serializer,pvVar1);
  DebugStream_writeCString((void *)serializer,"IntegerList:\n");
  STLVector_int_serialize(&stack0x00000000,(int)this + 8);
  DebugStream_writeCString((void *)serializer,"Ending LobbyCommand_AddBuddies\n");
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

