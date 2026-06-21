// addr: 0x014c3a60
// name: LobbyCommand_LeaveLeague_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_LeaveLeague_dump(int * param_1, void * param_2) */

void __thiscall LobbyCommand_LeaveLeague_dump(void *this,int *param_1,void *param_2)

{
  int *piVar1;
  
                    /* Emits a textual/debug dump for LobbyCommand_LeaveLeague, wrapping the
                       LobbyCommand base dump between Starting/Ending markers. */
  piVar1 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting LobbyCommand_LeaveLeague\n");
  LobbyCommand_League_serialize(this,param_1,(int)piVar1);
  DebugStream_writeCString(param_1,"Ending LobbyCommand_LeaveLeague\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

