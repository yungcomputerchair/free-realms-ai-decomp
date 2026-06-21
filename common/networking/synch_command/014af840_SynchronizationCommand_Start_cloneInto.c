// addr: 0x014af840
// name: SynchronizationCommand_Start_cloneInto
// subsystem: common/networking/synch_command
// source (binary assert): common/networking/synch_command/SynchronizationCommandStart.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_Start_cloneInto(void * this, void * synchCommand)
    */

void __thiscall SynchronizationCommand_Start_cloneInto(void *this,void *synchCommand)

{
  int iVar1;
  
                    /* Copies Start command scalar members into a RTTI-validated destination
                       command. The class name comes from
                       SynchronizationCommand_Start::RTTI_Type_Descriptor and the matching cpp path.
                        */
  iVar1 = FUN_00d8d382(synchCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                       &SynchronizationCommand_Start::RTTI_Type_Descriptor,0);
  if (iVar1 == 0) {
    FUN_012f5a60("synchCommand",
                 "..\\common\\networking\\synch_command\\SynchronizationCommandStart.cpp",0x56);
  }
  NetworkCommand_cloneBaseFields(synchCommand);
  *(undefined4 *)(iVar1 + 0xc) = *(undefined4 *)((int)this + 0xc);
  *(undefined4 *)(iVar1 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)((int)this + 4);
  *(undefined4 *)(iVar1 + 0x10) = *(undefined4 *)((int)this + 0x10);
  return;
}

