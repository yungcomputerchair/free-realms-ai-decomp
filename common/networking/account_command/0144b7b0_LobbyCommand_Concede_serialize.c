// addr: 0x0144b7b0
// name: LobbyCommand_Concede_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_Concede_serialize(int * param_1, int param_2) */

void __thiscall LobbyCommand_Concede_serialize(void *this,int *param_1,int param_2)

{
  int *piVar1;
  
                    /* Serializes/dumps LobbyCommand_Concede after the LobbyCommand base, writing
                       one additional integer field. */
  piVar1 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting LobbyCommand_Concede\n");
  LobbyCommand_dump(this,param_1,piVar1);
  DebugStream_writeCString(param_1,"ID ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 8));
  DebugStream_writeCString(param_1,"Ending LobbyCommand_Concede\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

