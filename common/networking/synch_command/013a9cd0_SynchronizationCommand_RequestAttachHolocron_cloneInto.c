// addr: 0x013a9cd0
// name: SynchronizationCommand_RequestAttachHolocron_cloneInto
// subsystem: common/networking/synch_command
// source (binary assert): common/networking/synch_command/SynchronizationCommandRequestAttachHolocron.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_RequestAttachHolocron_cloneInto(void * this, void
   * synchCommand) */

void __thiscall
SynchronizationCommand_RequestAttachHolocron_cloneInto(void *this,void *synchCommand)

{
  int iVar1;
  
                    /* Copies RequestAttachHolocron fields into an already-created synchronization
                       command after RTTI-casting it to
                       SynchronizationCommand_RequestAttachHolocron. The class is authoritative from
                       the RTTI descriptor and the assert names synchCommand in
                       SynchronizationCommandRequestAttachHolocron.cpp. */
  iVar1 = FUN_00d8d382(synchCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                       &SynchronizationCommand_RequestAttachHolocron::RTTI_Type_Descriptor,0);
  if (iVar1 == 0) {
    FUN_012f5a60("synchCommand",
                 "..\\common\\networking\\synch_command\\SynchronizationCommandRequestAttachHolocron.cpp"
                 ,0x3a);
  }
  NetworkCommand_cloneBaseFields(synchCommand);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)((int)this + 4);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)((int)this + 8);
  return;
}

