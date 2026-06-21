// addr: 0x014b4740
// name: MatchCommand_SelectStartPosition_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void MatchCommand_SelectStartPosition_dump(int * this, void * stream) */

void __thiscall MatchCommand_SelectStartPosition_dump(void *this,void *stream)

{
  void *pvVar1;
  
                    /* Dumps MatchCommand_SelectStartPosition after the base MatchCommand data,
                       including selected position and the position vector/list. */
  pvVar1 = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting MatchCommand_SelectStartPosition\n");
  MatchCommand_dump(this,stream,pvVar1);
  DebugStream_writeCString(stream,"SelectedPosition: ");
  Serializer_appendInteger(stream,*(uint *)((int)this + 0xc));
  STLVector_int_serialize(&stack0x00000000,(int)this + 0x10);
  DebugStream_writeCString(stream,"Ending MatchCommand_SelectStartPosition\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

