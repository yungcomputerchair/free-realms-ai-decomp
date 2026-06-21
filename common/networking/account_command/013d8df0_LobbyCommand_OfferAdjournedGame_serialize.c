// addr: 0x013d8df0
// name: LobbyCommand_OfferAdjournedGame_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_OfferAdjournedGame_serialize(int * param_1, int param_2) */

void __thiscall LobbyCommand_OfferAdjournedGame_serialize(void *this,int *param_1,int param_2)

{
  int *piVar1;
  
                    /* Serializes/dumps LobbyCommand_OfferAdjournedGame, writing GameID, MatchID,
                       and CurrentLobbyID after the LobbyCommand base. */
  piVar1 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting LobbyCommand_OfferAdjournedGame\n");
  LobbyCommand_dump(this,param_1,piVar1);
  DebugStream_writeCString(param_1,"GameID: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 8));
  DebugStream_writeCString(param_1,"MatchID: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0xc));
  DebugStream_writeCString(param_1,"CurrentLobbyID: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x10));
  DebugStream_writeCString(param_1,"Ending LobbyCommand_OfferAdjournedGame\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

