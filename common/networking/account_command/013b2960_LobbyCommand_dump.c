// addr: 0x013b2960
// name: LobbyCommand_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_dump(int * param_1, void * param_2) */

void __thiscall LobbyCommand_dump(void *this,int *param_1,void *param_2)

{
                    /* Emits a textual/debug dump for the LobbyCommand base, including
                       NetworkCommand/account base fields and AccountID. */
  (**(code **)(*(int *)this + 8))(param_1);
  DebugStream_writeCString(param_1,"Starting LobbyCommand\n");
  NetworkCommand_dump(this,param_1);
  DebugStream_writeCString(param_1,"AccountID: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 4));
  DebugStream_writeCString(param_1,"Ending LobbyCommand\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

