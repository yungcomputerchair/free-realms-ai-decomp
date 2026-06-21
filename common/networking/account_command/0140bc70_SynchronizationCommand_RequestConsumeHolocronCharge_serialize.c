// addr: 0x0140bc70
// name: SynchronizationCommand_RequestConsumeHolocronCharge_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_RequestConsumeHolocronCharge_serialize(int *
   param_1, int param_2) */

void __thiscall
SynchronizationCommand_RequestConsumeHolocronCharge_serialize(void *this,int *param_1,int param_2)

{
  int *serializer;
  
                    /* Serializes/dumps SynchronizationCommand_RequestConsumeHolocronCharge after
                       the SynchronizationCommand base, writing the member at param_1+1. */
  serializer = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting SynchronizationCommand_RequestConsumeHolocronCharge\n")
  ;
  SynchronizationCommand_serialize(this,param_1,(int)serializer);
  STLVector_int_serialize(&stack0x00000000,(int)this + 4);
  DebugStream_writeCString(param_1,"Ending SynchronizationCommand_RequestConsumeHolocronCharge\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

