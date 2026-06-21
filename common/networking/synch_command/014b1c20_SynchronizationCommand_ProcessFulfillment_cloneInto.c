// addr: 0x014b1c20
// name: SynchronizationCommand_ProcessFulfillment_cloneInto
// subsystem: common/networking/synch_command
// source (binary assert): common/networking/synch_command/SynchronizationCommandProcessFulfillment.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_ProcessFulfillment_cloneInto(void * this, void *
   synchCommand) */

void __thiscall SynchronizationCommand_ProcessFulfillment_cloneInto(void *this,void *synchCommand)

{
  int iVar1;
  
                    /* Copies ProcessFulfillment data into a RTTI-checked destination command using
                       a helper for the member at +4. RTTI and the
                       SynchronizationCommandProcessFulfillment.cpp assert path identify the class.
                        */
  iVar1 = FUN_00d8d382(synchCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                       &SynchronizationCommand_ProcessFulfillment::RTTI_Type_Descriptor,0);
  if (iVar1 == 0) {
    FUN_012f5a60("synchCommand",
                 "..\\common\\networking\\synch_command\\SynchronizationCommandProcessFulfillment.cpp"
                 ,0x38);
  }
  NetworkCommand_cloneBaseFields(synchCommand);
  InstanceID_assignFrom((void *)(iVar1 + 4),(void *)((int)this + 4));
  return;
}

