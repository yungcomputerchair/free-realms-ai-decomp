// addr: 0x014eefa0
// name: AccountCommand_BulkBriefIntroduceAccount_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_BulkBriefIntroduceAccount_dump(int * this, void * stream)
    */

void __thiscall AccountCommand_BulkBriefIntroduceAccount_dump(void *this,void *stream)

{
  void *serializer;
  
                    /* Dumps AccountCommand_BulkBriefIntroduceAccount by emitting base
                       AccountCommand data and three account/vector fields. */
  serializer = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting AccountCommand_BulkBriefIntroduceAccount\n");
  AccountCommand_serialize(this,stream,(int)serializer);
  STLVector_int_serialize(&stack0x00000000,(int)this + 8);
  STLVector_string_serialize((int)this + 0x28);
  STLVector_string_serialize((int)this + 0x18);
  DebugStream_writeCString(stream,"Ending AccountCommand_BulkBriefIntroduceAccount\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

