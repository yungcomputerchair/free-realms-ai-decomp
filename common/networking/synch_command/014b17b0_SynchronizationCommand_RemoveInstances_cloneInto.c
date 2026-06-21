// addr: 0x014b17b0
// name: SynchronizationCommand_RemoveInstances_cloneInto
// subsystem: common/networking/synch_command
// source (binary assert): common/networking/synch_command/SynchronizationCommandRemoveInstances.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_RemoveInstances_cloneInto(void * this, void *
   synchCommand) */

void __thiscall SynchronizationCommand_RemoveInstances_cloneInto(void *this,void *synchCommand)

{
  int iVar1;
  
                    /* Copies the RemoveInstances vector payload into a RTTI-validated destination
                       command after the base NetworkCommand cloneInto. The RTTI descriptor
                       identifies SynchronizationCommand_RemoveInstances. */
  iVar1 = FUN_00d8d382(synchCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                       &SynchronizationCommand_RemoveInstances::RTTI_Type_Descriptor,0);
  if (iVar1 == 0) {
    FUN_012f5a60("synchCommand",
                 "..\\common\\networking\\synch_command\\SynchronizationCommandRemoveInstances.cpp",
                 0x3e);
  }
  NetworkCommand_cloneBaseFields(synchCommand);
  CollectionElementVector_copyAssign((int)this + 4);
  return;
}

