// addr: 0x014b39c0
// name: MatchCommand_SetMatchState_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_SetMatchState_dump(void * this, void * stream) */

void __thiscall MatchCommand_SetMatchState_dump(void *this,void *stream)

{
  void *pvVar1;
  
                    /* Appends a textual/debug dump for MatchCommand_SetMatchState, including the
                       Match State field. Evidence is the Starting/Ending MatchCommand_SetMatchState
                       strings and Match State label. */
  pvVar1 = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting MatchCommand_SetMatchState\n");
  MatchCommand_dump(this,stream,pvVar1);
  DebugStream_writeCString(stream,"Match State: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xc));
  DebugStream_writeCString(stream,"Ending MatchCommand_SetMatchState\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

