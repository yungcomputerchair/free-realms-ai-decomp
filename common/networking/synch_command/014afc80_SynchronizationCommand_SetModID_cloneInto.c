// addr: 0x014afc80
// name: SynchronizationCommand_SetModID_cloneInto
// subsystem: common/networking/synch_command
// source (binary assert): common/networking/synch_command/SynchronizationCommandSetModID.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_SetModID_cloneInto(void * this, void *
   synchCommand) */

void __thiscall SynchronizationCommand_SetModID_cloneInto(void *this,void *synchCommand)

{
  int iVar1;
  
                    /* Copies the SetModID command member into a RTTI-checked destination command.
                       RTTI identifies SynchronizationCommand_SetModID and the assert path confirms
                       the source file. */
  iVar1 = FUN_00d8d382(synchCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                       &SynchronizationCommand_SetModID::RTTI_Type_Descriptor,0);
  if (iVar1 == 0) {
    FUN_012f5a60("synchCommand",
                 "..\\common\\networking\\synch_command\\SynchronizationCommandSetModID.cpp",0x2f);
  }
  NetworkCommand_cloneBaseFields(synchCommand);
  *(undefined4 *)(iVar1 + 4) = *(undefined4 *)((int)this + 4);
  return;
}

