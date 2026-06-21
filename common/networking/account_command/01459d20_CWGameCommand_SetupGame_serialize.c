// addr: 0x01459d20
// name: CWGameCommand_SetupGame_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CWGameCommand_SetupGame_serialize(int * param_1, int param_2) */

void __thiscall CWGameCommand_SetupGame_serialize(void *this,int *param_1,int param_2)

{
                    /* Serializes/dumps CWGameCommand_SetupGame after the CWGameCommand base,
                       writing two setup fields at offsets 0x20 and 0x21. */
  (**(code **)(*(int *)this + 8))(param_1);
  DebugStream_writeCString(param_1,"Starting CWGameCommand_SetupGame\n");
  GameCommand_SetupGame_dump(this,param_1);
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x80));
  Serializer_appendInteger(param_1,*(uint *)((int)this + 0x84));
  DebugStream_writeCString(param_1,"Ending CWGameCommand_SetupGame\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

