// addr: 0x014aff40
// name: SynchronizationCommand_SetDesired_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_SetDesired_dump(void * this, void * stream) */

void __thiscall SynchronizationCommand_SetDesired_dump(void *this,void *stream)

{
  void *serializer;
  
                    /* Appends a textual/debug dump for SynchronizationCommand_SetDesired, dumping
                       the Instances vector/list member. Evidence is the Starting/Ending
                       SynchronizationCommand_SetDesired strings and Instances label. */
  serializer = stream;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(stream,"Starting SynchronizationCommand_SetDesired\n");
  SynchronizationCommand_serialize(this,stream,(int)serializer);
  DebugStream_writeCString(stream,"Instances:\n");
  STLVector_intPair_serialize(&stack0x00000000,(int)this + 4);
  DebugStream_writeCString(stream,"Ending SynchronizationCommand_SetDesired\n");
  (**(code **)(*(int *)this + 0xc))(stream);
  return;
}

