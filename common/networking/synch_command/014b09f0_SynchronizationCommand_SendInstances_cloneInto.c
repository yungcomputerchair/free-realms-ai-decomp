// addr: 0x014b09f0
// name: SynchronizationCommand_SendInstances_cloneInto
// subsystem: common/networking/synch_command
// source (binary assert): common/networking/synch_command/SynchronizationCommandSendInstances.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_SendInstances_cloneInto(void * this, void *
   synchCommand) */

void __thiscall SynchronizationCommand_SendInstances_cloneInto(void *this,void *synchCommand)

{
  int iVar1;
  
                    /* Copies SendInstances scalars and instance vectors into a RTTI-checked
                       destination command. The class is named by
                       SynchronizationCommand_SendInstances RTTI and debug output siblings show the
                       same member layout. */
  iVar1 = FUN_00d8d382(synchCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                       &SynchronizationCommand_SendInstances::RTTI_Type_Descriptor,0);
  if (iVar1 == 0) {
    FUN_012f5a60("synchCommand",
                 "..\\common\\networking\\synch_command\\SynchronizationCommandSendInstances.cpp",
                 0xc3);
  }
  NetworkCommand_cloneBaseFields(synchCommand);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)((int)this + 0xc);
  CollectionElementVector_copyAssign((int)this + 0x10);
  CollectionElementVector_copyAssign((int)this + 0x24);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)((int)this + 4);
  return;
}

