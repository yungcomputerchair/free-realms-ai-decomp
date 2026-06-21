// addr: 0x014accf0
// name: SynchronizationCommand_RespondAttachHolocron_cloneInto
// subsystem: common/networking/synch_command
// source (binary assert): common/networking/synch_command/SynchronizationCommandRespondAttachHolocron.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_RespondAttachHolocron_cloneInto(void * this, void
   * synchCommand) */

void __thiscall
SynchronizationCommand_RespondAttachHolocron_cloneInto(void *this,void *synchCommand)

{
  int iVar1;
  
                    /* Copies a RespondAttachHolocron command into a verified
                       SynchronizationCommand_RespondAttachHolocron destination. The RTTI descriptor
                       is the authoritative class evidence. */
  iVar1 = FUN_00d8d382(synchCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                       &SynchronizationCommand_RespondAttachHolocron::RTTI_Type_Descriptor,0);
  if (iVar1 == 0) {
    FUN_012f5a60("synchCommand",
                 "..\\common\\networking\\synch_command\\SynchronizationCommandRespondAttachHolocron.cpp"
                 ,0x36);
  }
  NetworkCommand_cloneBaseFields(synchCommand);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)((int)this + 4);
  return;
}

