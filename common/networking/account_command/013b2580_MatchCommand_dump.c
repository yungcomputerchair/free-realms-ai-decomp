// addr: 0x013b2580
// name: MatchCommand_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_dump(int * param_1, void * param_2) */

void __thiscall MatchCommand_dump(void *this,int *param_1,void *param_2)

{
  int *piVar1;
  
                    /* Emits a textual/debug dump for the MatchCommand base, including LobbyCommand
                       base fields and the Match ID. */
  piVar1 = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting MatchCommand\n");
  LobbyCommand_dump(this,param_1,piVar1);
  DebugStream_writeCString(param_1,"Match ID: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 8));
  DebugStream_writeCString(param_1,"Ending MatchCommand\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

