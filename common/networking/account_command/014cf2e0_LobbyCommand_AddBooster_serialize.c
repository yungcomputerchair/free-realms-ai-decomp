// addr: 0x014cf2e0
// name: LobbyCommand_AddBooster_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_AddBooster_serialize(int * this, int serializer) */

void __thiscall LobbyCommand_AddBooster_serialize(void *this,int serializer)

{
  void *pvVar1;
  
                    /* Serializes LobbyCommand_AddBooster fields leagueID and Booster Week after the
                       lobby command base fields. */
  pvVar1 = (void *)serializer;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString((void *)serializer,"Starting LobbyCommand_AddBooster\n");
  LobbyCommand_dump(this,(int *)serializer,pvVar1);
  DebugStream_writeCString((void *)serializer,"leagueID ");
  Serializer_appendInteger((void *)serializer,*(uint *)((int)this + 8));
  DebugStream_writeCString((void *)serializer,"Booster Week ");
  Serializer_appendInteger((void *)serializer,*(uint *)((int)this + 0xc));
  DebugStream_writeCString((void *)serializer,"Ending LobbyCommand_AddBooster\n");
  (**(code **)(*(int *)this + 0xc))(serializer);
  return;
}

