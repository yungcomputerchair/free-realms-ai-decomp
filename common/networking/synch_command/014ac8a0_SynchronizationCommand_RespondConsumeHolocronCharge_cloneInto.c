// addr: 0x014ac8a0
// name: SynchronizationCommand_RespondConsumeHolocronCharge_cloneInto
// subsystem: common/networking/synch_command
// source (binary assert): common/networking/synch_command/SynchronizationCommandRespondConsumeHolocronCharge.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_RespondConsumeHolocronCharge_cloneInto(void *
   this, void * synchCommand) */

void __thiscall
SynchronizationCommand_RespondConsumeHolocronCharge_cloneInto(void *this,void *synchCommand)

{
  int iVar1;
  
                    /* Copies a RespondConsumeHolocronCharge command field into a RTTI-validated
                       destination command. The class name comes from
                       SynchronizationCommand_RespondConsumeHolocronCharge::RTTI_Type_Descriptor. */
  iVar1 = FUN_00d8d382(synchCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                       &SynchronizationCommand_RespondConsumeHolocronCharge::RTTI_Type_Descriptor,0)
  ;
  if (iVar1 == 0) {
    FUN_012f5a60("synchCommand",
                 "..\\common\\networking\\synch_command\\SynchronizationCommandRespondConsumeHolocronCharge.cpp"
                 ,0x36);
  }
  NetworkCommand_cloneBaseFields(synchCommand);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)((int)this + 4);
  return;
}

