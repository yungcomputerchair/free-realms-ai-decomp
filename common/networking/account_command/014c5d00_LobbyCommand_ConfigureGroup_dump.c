// addr: 0x014c5d00
// name: LobbyCommand_ConfigureGroup_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_ConfigureGroup_dump(void * this, void * stream) */

void __thiscall LobbyCommand_ConfigureGroup_dump(void *this,void *stream)

{
  void *pvVar1;
  
                    /* Appends a textual/debug dump for LobbyCommand_ConfigureGroup, including a
                       nested object dump and two scalar fields. Evidence is the Starting/Ending
                       LobbyCommand_ConfigureGroup strings and the virtual dump call on the member
                       at this+8. */
  pvVar1 = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting LobbyCommand_ConfigureGroup\n");
  LobbyCommand_dump(this,stream,pvVar1);
  (**(code **)(**(int **)((int)this + 8) + 0x28))(stream);
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xc));
  Serializer_appendInteger(stream,*(uint *)((int)this + 0x10));
  DebugStream_writeCString(stream,"Ending LobbyCommand_ConfigureGroup\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

