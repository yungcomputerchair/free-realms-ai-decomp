// addr: 0x01435560
// name: SynchronizationCommand_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_serialize(int * this_obj, int serializer) */

void __thiscall SynchronizationCommand_serialize(void *this,int *this_obj,int serializer)

{
                    /* Serializes/dumps the SynchronizationCommand base after invoking its inherited
                       base serializer. The embedded strings name SynchronizationCommand. */
  (**(code **)(*(int *)this + 8))(this_obj);
  DebugStream_writeCString(this_obj,"Starting SynchronizationCommand\n");
  NetworkCommand_dump(this,this_obj);
  DebugStream_writeCString(this_obj,"Ending SynchronizationCommand\n");
  (**(code **)(*(int *)this + 0xc))(this_obj);
  return;
}

