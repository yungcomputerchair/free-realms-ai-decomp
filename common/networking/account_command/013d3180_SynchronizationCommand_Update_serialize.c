// addr: 0x013d3180
// name: SynchronizationCommand_Update_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_Update_serialize(int * this_obj, int serializer)
    */

void __thiscall SynchronizationCommand_Update_serialize(void *this,int *this_obj,int serializer)

{
  int *serializer_00;
  
                    /* Serializes/dumps SynchronizationCommand_Update, wrapping the
                       SynchronizationCommand base serializer with start/end markers. The class is
                       named by the embedded start/end strings. */
  serializer_00 = this_obj;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(this_obj,"Starting SynchronizationCommand_Update\n");
  SynchronizationCommand_serialize(this,this_obj,(int)serializer_00);
  DebugStream_writeCString(this_obj,"Ending SynchronizationCommand_Update\n");
  (**(code **)(*(int *)this + 0xc))(this_obj);
  return;
}

