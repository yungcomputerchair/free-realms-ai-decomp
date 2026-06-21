// addr: 0x014bdc60
// name: LobbyCommand_SetFlag_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SetFlag_dump(void * this, void * stream) */

void __thiscall LobbyCommand_SetFlag_dump(void *this,void *stream)

{
  void *pvVar1;
  
                    /* Appends a textual/debug dump for LobbyCommand_SetFlag, writing its flag/value
                       field after the base lobby command dump. Evidence is the Starting/Ending
                       LobbyCommand_SetFlag strings. */
  pvVar1 = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting LobbyCommand_SetFlag\n");
  LobbyCommand_dump(this,stream,pvVar1);
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  DebugStream_writeCString(stream,"Ending LobbyCommand_SetFlag\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

