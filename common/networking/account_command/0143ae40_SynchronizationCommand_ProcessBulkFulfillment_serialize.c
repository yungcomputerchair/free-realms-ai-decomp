// addr: 0x0143ae40
// name: SynchronizationCommand_ProcessBulkFulfillment_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_ProcessBulkFulfillment_serialize(int * param_1,
   int param_2) */

void __thiscall
SynchronizationCommand_ProcessBulkFulfillment_serialize(void *this,int *param_1,int param_2)

{
  int *vector;
  
                    /* Serializes/dumps SynchronizationCommand_ProcessBulkFulfillment, including the
                       SynchronizationCommand base and Instances collection. */
  vector = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting SynchronizationCommand_ProcessBulkFulfillment\n");
  SynchronizationCommand_serialize(this,param_1,(int)vector);
  DebugStream_writeCString(param_1,"Instances: ");
  STLVector_cardInstance_serialize(&stack0x00000000,(void *)((int)this + 4),vector);
  DebugStream_writeCString(param_1,"Ending SynchronizationCommand_ProcessBulkFulfillment\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

