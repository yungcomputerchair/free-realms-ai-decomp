// addr: 0x014ee250
// name: AccountCommand_BulkIntroduceAccount_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_BulkIntroduceAccount_dump(void * this, void * writer) */

void __thiscall AccountCommand_BulkIntroduceAccount_dump(void *this,void *writer)

{
  void *serializer;
  
                    /* Appends a textual/debug dump for AccountCommand_BulkIntroduceAccount,
                       emitting base account-command fields and several account/id vector members.
                        */
  serializer = writer;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(writer,"Starting AccountCommand_BulkIntroduceAccount\n");
  AccountCommand_serialize(this,writer,(int)serializer);
  STLVector_int_serialize(&stack0x00000000,(int)this + 8);
  STLVector_string_serialize((int)this + 0x28);
  STLVector_int_serialize_014c9d60(&stack0xfffffff8,(void *)((int)this + 0x38),(int)serializer);
  STLVector_serializablePointer_serialize_014c9e10
            (&stack0xfffffff8,(void *)((int)this + 0x48),(int)serializer);
  STLVector_string_serialize((int)this + 0x18);
  DebugStream_writeCString(writer,"Ending AccountCommand_BulkIntroduceAccount\n");
  (**(code **)(*(int *)this + 0xc))(writer);
  return;
}

