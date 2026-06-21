// addr: 0x014c1f90
// name: LobbyCommand_RemoveGroups_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_RemoveGroups_dump(void * this, void * stream) */

void __thiscall LobbyCommand_RemoveGroups_dump(void *this,void *stream)

{
  void *pvVar1;
  
                    /* Appends a textual/debug dump for LobbyCommand_RemoveGroups, dumping its group
                       list member after the base lobby command dump. Evidence is the
                       Starting/Ending LobbyCommand_RemoveGroups strings. */
  pvVar1 = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting LobbyCommand_RemoveGroups\n");
  LobbyCommand_dump(this,stream,pvVar1);
  STLVector_int_serialize(&stack0x00000000,(int)this + 8);
  DebugStream_writeCString(stream,"Ending LobbyCommand_RemoveGroups\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

