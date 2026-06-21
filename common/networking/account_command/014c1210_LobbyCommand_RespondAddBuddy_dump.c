// addr: 0x014c1210
// name: LobbyCommand_RespondAddBuddy_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_RespondAddBuddy_dump(void * this, void * stream) */

void __thiscall LobbyCommand_RespondAddBuddy_dump(void *this,void *stream)

{
  void *pvVar1;
  
                    /* Appends a textual/debug dump for LobbyCommand_RespondAddBuddy, including
                       requesting user id, target user id, and yes/no response. Evidence is the
                       Starting/Ending LobbyCommand_RespondAddBuddy strings and labels. */
  pvVar1 = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting LobbyCommand_RespondAddBuddy\n");
  LobbyCommand_dump(this,stream,pvVar1);
  DebugStream_writeCString(stream,"Requesting UserID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  DebugStream_writeCString(stream,"Target UserID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xc));
  DebugStream_writeCString(stream,"Yes or no: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x10));
  DebugStream_writeCString(stream,"Ending LobbyCommand_RespondAddBuddy\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

