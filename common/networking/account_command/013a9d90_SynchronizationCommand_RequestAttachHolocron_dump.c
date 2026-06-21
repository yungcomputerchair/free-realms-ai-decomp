// addr: 0x013a9d90
// name: SynchronizationCommand_RequestAttachHolocron_dump
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_RequestAttachHolocron_dump(int * param_1, void *
   param_2) */

void __thiscall
SynchronizationCommand_RequestAttachHolocron_dump(void *this,int *param_1,void *param_2)

{
  int *serializer;
  
                    /* Emits a textual/debug dump for SynchronizationCommand_RequestAttachHolocron,
                       including the synchronization base and two integer/id fields. */
  serializer = param_1;
  (**(code **)(*(int *)this + 8))();
  DebugStream_writeCString(param_1,"Starting SynchronizationCommand_RequestAttachHolocron\n");
  SynchronizationCommand_serialize(this,param_1,(int)serializer);
  Serializer_appendInteger(param_1,*(uint *)((int)this + 4));
  Serializer_appendInteger(param_1,*(uint *)((int)this + 8));
  DebugStream_writeCString(param_1,"Ending SynchronizationCommand_RequestAttachHolocron\n");
  (**(code **)(*(int *)this + 0xc))(param_1);
  return;
}

