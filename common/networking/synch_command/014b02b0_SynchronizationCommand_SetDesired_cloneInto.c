// addr: 0x014b02b0
// name: SynchronizationCommand_SetDesired_cloneInto
// subsystem: common/networking/synch_command
// source (binary assert): common/networking/synch_command/SynchronizationCommandSetDesired.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void SynchronizationCommand_SetDesired_cloneInto(void * this, void *
   synchCommand) */

void __thiscall SynchronizationCommand_SetDesired_cloneInto(void *this,void *synchCommand)

{
  int iVar1;
  
                    /* Copies SetDesired data into a RTTI-validated destination command, using the
                       pair-vector assignment helper for the member at +4. RTTI and the cpp assert
                       path identify the class. */
  iVar1 = FUN_00d8d382(synchCommand,0,&NetworkCommand::RTTI_Type_Descriptor,
                       &SynchronizationCommand_SetDesired::RTTI_Type_Descriptor,0);
  if (iVar1 == 0) {
    FUN_012f5a60("synchCommand",
                 "..\\common\\networking\\synch_command\\SynchronizationCommandSetDesired.cpp",0x38)
    ;
  }
  NetworkCommand_cloneBaseFields(synchCommand);
  FUN_01334b40((int)this + 4);
  return;
}

