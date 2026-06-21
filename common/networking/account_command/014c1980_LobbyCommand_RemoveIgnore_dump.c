// addr: 0x014c1980
// name: LobbyCommand_RemoveIgnore_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_RemoveIgnore_dump(void * this, void * stream) */

void __thiscall LobbyCommand_RemoveIgnore_dump(void *this,void *stream)

{
  void *pvVar1;
  
                    /* Appends a textual/debug dump for LobbyCommand_RemoveIgnore, including the
                       AccountID list member. Evidence is the Starting/Ending
                       LobbyCommand_RemoveIgnore strings and AccountID List label. */
  pvVar1 = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting LobbyCommand_RemoveIgnore\n");
  LobbyCommand_dump(this,stream,pvVar1);
  DebugStream_writeCString(stream,"AccountID List:\n");
  STLVector_int_serialize(&stack0x00000000,(int)this + 8);
  DebugStream_writeCString(stream,"Ending LobbyCommand_RemoveIgnore\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

