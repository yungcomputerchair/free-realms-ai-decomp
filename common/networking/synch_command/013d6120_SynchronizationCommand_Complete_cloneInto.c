// addr: 0x013d6120
// name: SynchronizationCommand_Complete_cloneInto
// subsystem: common/networking/synch_command
// source (binary assert): common/networking/synch_command/SynchronizationCommandComplete.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_Complete_cloneInto(void * this, void *
   synchCommand) */

void __thiscall SynchronizationCommand_Complete_cloneInto(void *this,void *synchCommand)

{
  int iVar1;
  
                    /* Copies a Complete command into a destination NetworkCommand after verifying
                       the destination is SynchronizationCommand_Complete. The RTTI descriptor
                       supplies the class name and the cpp path/assert identify the synchCommand
                       copy path. */
  iVar1 = FUN_00d8d382(synchCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                       &SynchronizationCommand_Complete::RTTI_Type_Descriptor,0);
  if (iVar1 == 0) {
    FUN_012f5a60("synchCommand",
                 "..\\common\\networking\\synch_command\\SynchronizationCommandComplete.cpp",0x33);
  }
  NetworkCommand_cloneBaseFields(synchCommand);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)((int)this + 4);
  return;
}

