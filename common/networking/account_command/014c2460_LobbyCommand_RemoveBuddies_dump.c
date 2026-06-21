// addr: 0x014c2460
// name: LobbyCommand_RemoveBuddies_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void LobbyCommand_RemoveBuddies_dump(void * this, void * stream) */

void __thiscall LobbyCommand_RemoveBuddies_dump(void *this,void *stream)

{
  void *pvVar1;
  
                    /* Appends a textual/debug dump for LobbyCommand_RemoveBuddies, including the
                       AccountID list member. Evidence is the Starting/Ending
                       LobbyCommand_RemoveBuddies strings and AccountID List label. */
  pvVar1 = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting LobbyCommand_RemoveBuddies\n");
  LobbyCommand_dump(this,stream,pvVar1);
  DebugStream_writeCString(stream,"AccountID List:\n");
  STLVector_int_serialize(&stack0x00000000,(int)this + 8);
  DebugStream_writeCString(stream,"Ending LobbyCommand_RemoveBuddies\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

