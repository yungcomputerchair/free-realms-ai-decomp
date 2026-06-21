// addr: 0x014c0bf0
// name: LobbyCommand_SelectCard_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_SelectCard_dump(void * this, void * stream) */

void __thiscall LobbyCommand_SelectCard_dump(void *this,void *stream)

{
  void *pvVar1;
  
                    /* Appends a textual/debug dump for LobbyCommand_SelectCard, including
                       tournamentID, groupID, and instance-related fields. Evidence is the
                       Starting/Ending LobbyCommand_SelectCard strings and labels. */
  pvVar1 = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting LobbyCommand_SelectCard\n");
  LobbyCommand_dump(this,stream,pvVar1);
  DebugStream_writeCString(stream,"tournamentID ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 8));
  DebugStream_writeCString(stream,"groupID ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x14));
  DebugStream_writeCString(stream,"InstanceID: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xc));
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x10));
  DebugStream_writeCString(stream,"Ending LobbyCommand_SelectCard\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

