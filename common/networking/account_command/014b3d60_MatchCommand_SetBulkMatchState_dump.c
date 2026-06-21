// addr: 0x014b3d60
// name: MatchCommand_SetBulkMatchState_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_SetBulkMatchState_dump(void * this, void * stream) */

void __thiscall MatchCommand_SetBulkMatchState_dump(void *this,void *stream)

{
  void *pvVar1;
  
                    /* Appends a textual/debug dump for MatchCommand_SetBulkMatchState, including
                       group id and match state lists. Evidence is the Starting/Ending
                       MatchCommand_SetBulkMatchState strings and list labels. */
  pvVar1 = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting MatchCommand_SetBulkMatchState\n");
  MatchCommand_dump(this,stream,pvVar1);
  DebugStream_writeCString(stream,"GroupID List:\n");
  STLVector_int_serialize(&stack0x00000000,(int)this + 0xc);
  DebugStream_writeCString(stream,"Match State List:\n");
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x1c);
  DebugStream_writeCString(stream,"Ending MatchCommand_SetBulkMatchState\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

