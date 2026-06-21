// addr: 0x014e3640
// name: ECommCommand_cloneInto
// subsystem: common/networking/ecomm_command
// source (binary assert): common/networking/ecomm_command/ECommCommand.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ECommCommand_cloneInto(void * this, void * target) */

void __thiscall ECommCommand_cloneInto(void *this,void *target)

{
  void *this_00;
  
                    /* Copies the base ECommCommand state into an already allocated target after
                       RTTI-checking the target as ECommCommand, then delegates to NetworkCommand
                       cloneInto and copies the account/id field at +4. */
  this_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &ECommCommand::RTTI_Type_Descriptor,0);
  if (this_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\ecomm_command\\ECommCommand.cpp",0x3d);
  }
  NetworkCommand_cloneBaseFields(this_00);
  *(undefined4 *)((int)this_00 + 4) = *(undefined4 *)((int)this + 4);
  return;
}

