// addr: 0x014ac940
// name: SynchronizationCommand_RespondConsumeHolocronCharge_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_RespondConsumeHolocronCharge_serialize(int *
   param_1, void * param_2) */

void __thiscall
SynchronizationCommand_RespondConsumeHolocronCharge_serialize(void *this,int *param_1,void *param_2)

{
  int *serializer;
  
                    /* Serializes SynchronizationCommand_RespondConsumeHolocronCharge by writing the
                       SynchronizationCommand base and one scalar response field. Evidence is the
                       start/end marker strings. */
  serializer = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting SynchronizationCommand_RespondConsumeHolocronCharge\n")
  ;
  SynchronizationCommand_serialize(this,param_1,(int)serializer);
  Serializer_appendInteger(param_1,*(uint *)((int)this + 4));
  DebugStream_writeCString(param_1,"Ending SynchronizationCommand_RespondConsumeHolocronCharge\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

