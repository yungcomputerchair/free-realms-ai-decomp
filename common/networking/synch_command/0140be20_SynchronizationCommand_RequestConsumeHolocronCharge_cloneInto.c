// addr: 0x0140be20
// name: SynchronizationCommand_RequestConsumeHolocronCharge_cloneInto
// subsystem: common/networking/synch_command
// source (binary assert): common/networking/synch_command/SynchronizationCommandRequestConsumeHolocronCharge.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_RequestConsumeHolocronCharge_cloneInto(void *
   this, void * synchCommand) */

void __thiscall
SynchronizationCommand_RequestConsumeHolocronCharge_cloneInto(void *this,void *synchCommand)

{
  int iVar1;
  
                    /* Performs the RequestConsumeHolocronCharge cloneInto path, including RTTI
                       validation of the destination and base NetworkCommand copy. The decompiler
                       only shows a helper touch on the source member, so the member-copy details
                       are uncertain. */
  iVar1 = FUN_00d8d382(synchCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                       &SynchronizationCommand_RequestConsumeHolocronCharge::RTTI_Type_Descriptor,0)
  ;
  if (iVar1 == 0) {
    FUN_012f5a60("synchCommand",
                 "..\\common\\networking\\synch_command\\SynchronizationCommandRequestConsumeHolocronCharge.cpp"
                 ,0x2e);
  }
  FUN_005f1e5c((int)this + 4);
  NetworkCommand_cloneBaseFields(synchCommand);
  return;
}

