// addr: 0x014ae810
// name: SynchronizationCommand_StartInstances_cloneInto
// subsystem: common/networking/synch_command
// source (binary assert): common/networking/synch_command/SynchronizationCommandStartInstances.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_StartInstances_cloneInto(void * this, void *
   synchCommand) */

void __thiscall SynchronizationCommand_StartInstances_cloneInto(void *this,void *synchCommand)

{
  int iVar1;
  
                    /* Copies StartInstances account/collection/count/mod fields into a RTTI-checked
                       destination command. RTTI names the class and the assert path is
                       SynchronizationCommandStartInstances.cpp. */
  iVar1 = FUN_00d8d382(synchCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                       &SynchronizationCommand_StartInstances::RTTI_Type_Descriptor,0);
  if (iVar1 == 0) {
    FUN_012f5a60("synchCommand",
                 "..\\common\\networking\\synch_command\\SynchronizationCommandStartInstances.cpp",
                 0x53);
  }
  NetworkCommand_cloneBaseFields(synchCommand);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)((int)this + 4);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)((int)this + 0x10);
  return;
}

