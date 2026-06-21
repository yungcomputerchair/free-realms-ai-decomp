// addr: 0x014ae380
// name: SynchronizationCommand_ChangeFlags_cloneInto
// subsystem: common/networking/synch_command
// source (binary assert): common/networking/synch_command/synchronizationcommandchangeflags.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_ChangeFlags_cloneInto(void * this, void *
   synchCommand) */

void __thiscall SynchronizationCommand_ChangeFlags_cloneInto(void *this,void *synchCommand)

{
  int iVar1;
  
                    /* Copies ChangeFlags data into a RTTI-checked destination command, including a
                       vector-like member and three scalar fields. The authoritative class is
                       SynchronizationCommand_ChangeFlags from RTTI. */
  iVar1 = FUN_00d8d382(synchCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                       &SynchronizationCommand_ChangeFlags::RTTI_Type_Descriptor,0);
  if (iVar1 == 0) {
    FUN_012f5a60("synchCommand",
                 "..\\common\\networking\\synch_command\\synchronizationcommandchangeflags.cpp",0xa6
                );
  }
  NetworkCommand_cloneBaseFields(synchCommand);
  CollectionElementVector_copyAssign((int)this + 4);
  *(undefined4 *)(iVar1 + 0x18) = *(undefined4 *)((int)this + 0x18);
  *(undefined4 *)(iVar1 + 0x14) = *(undefined4 *)((int)this + 0x14);
  *(undefined4 *)(iVar1 + 0x1c) = *(undefined4 *)((int)this + 0x1c);
  return;
}

