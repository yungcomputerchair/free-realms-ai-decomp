// addr: 0x014b3530
// name: MatchCommand_SetTimer_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_SetTimer_dump(void * this, void * stream) */

void __thiscall MatchCommand_SetTimer_dump(void *this,void *stream)

{
  void *pvVar1;
  
                    /* Appends a textual/debug dump for MatchCommand_SetTimer, including the
                       Duration field. Evidence is the Starting/Ending MatchCommand_SetTimer strings
                       and Duration label. */
  pvVar1 = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting MatchCommand_SetTimer\n");
  MatchCommand_dump(this,stream,pvVar1);
  DebugStream_writeCString(stream,"Duration: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xc));
  DebugStream_writeCString(stream,"Ending MatchCommand_SetTimer\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

