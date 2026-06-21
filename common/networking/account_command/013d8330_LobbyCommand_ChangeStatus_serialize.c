// addr: 0x013d8330
// name: LobbyCommand_ChangeStatus_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_ChangeStatus_serialize(int * param_1, int param_2) */

void __thiscall LobbyCommand_ChangeStatus_serialize(void *this,int *param_1,int param_2)

{
  int *piVar1;
  
                    /* Serializes/dumps LobbyCommand_ChangeStatus after its LobbyCommand base,
                       writing the Lobby Status field. */
  piVar1 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting LobbyCommand_ChangeStatus\n");
  LobbyCommand_dump(this,param_1,piVar1);
  DebugStream_writeCString(param_1,"Lobby Status: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 8));
  DebugStream_writeCString(param_1,"Ending LobbyCommand_ChangeStatus\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

