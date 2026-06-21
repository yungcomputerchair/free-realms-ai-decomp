// addr: 0x013d61d0
// name: SynchronizationCommand_Complete_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_Complete_serialize(int * param_1, int param_2) */

void __thiscall SynchronizationCommand_Complete_serialize(void *this,int *param_1,int param_2)

{
  int *serializer;
  
                    /* Serializes/dumps SynchronizationCommand_Complete, including the
                       SynchronizationCommand base and DeliveryID field. */
  serializer = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting SynchronizationCommand_Complete\n");
  SynchronizationCommand_serialize(this,param_1,(int)serializer);
  DebugStream_writeCString(param_1,"DeliveryID: ");
  Serializer_appendInteger(param_1,*(uint *)((int)this + 4));
  DebugStream_writeCString(param_1,"Ending SynchronizationCommand_Complete\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

