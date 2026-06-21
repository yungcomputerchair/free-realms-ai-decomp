// addr: 0x01407d30
// name: AccountCommand_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AccountCommand_serialize(int * this_obj, int serializer) */

void __thiscall AccountCommand_serialize(void *this,int *this_obj,int serializer)

{
                    /* Serializes/dumps the AccountCommand base object, including its AccountID
                       field. The literals 'Starting AccountCommand', 'AccountID:', and 'Ending
                       AccountCommand' identify the class and field. */
  (**(code **)(*(int *)this + 8))(this_obj);
  DebugStream_writeCString(this_obj,"Starting AccountCommand\n");
  DebugStream_writeCString(this_obj,"AccountID: ");
  Serializer_appendInteger(this_obj,*(uint *)((int)this + 4));
  DebugStream_writeCString(this_obj,"Ending AccountCommand\n");
  (**(code **)(*(int *)this + 0xc))(this_obj);
  return;
}

