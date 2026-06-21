// addr: 0x014b1480
// name: SynchronizationCommand_RemoveInstances_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_RemoveInstances_dump(void * this, void * stream)
    */

void __thiscall SynchronizationCommand_RemoveInstances_dump(void *this,void *stream)

{
  void *vector;
  
                    /* Appends a textual/debug dump for SynchronizationCommand_RemoveInstances,
                       including the Instances vector/list member. Evidence is the Starting/Ending
                       SynchronizationCommand_RemoveInstances strings and Instances label. */
  vector = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting SynchronizationCommand_RemoveInstances\n");
  SynchronizationCommand_serialize(this,stream,(int)vector);
  DebugStream_writeCString(stream,"Instances:\n");
  STLVector_cardInstance_serialize(&stack0x00000000,(void *)((int)this + 4),vector);
  DebugStream_writeCString(stream,"Ending SynchronizationCommand_RemoveInstances\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

