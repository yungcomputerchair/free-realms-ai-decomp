// addr: 0x014e7260
// name: ArchCommand_cloneInto
// subsystem: common/networking/arch_command
// source (binary assert): common/networking/arch_command/archcommand.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArchCommand_cloneInto(void * this, void * target) */

void __thiscall ArchCommand_cloneInto(void *this,void *target)

{
  void *this_00;
  
                    /* Base ArchCommand clone helper: validates the target as ArchCommand, delegates
                       NetworkCommand base cloning, then copies the base 32-bit member at offset 4.
                        */
  this_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                 &ArchCommand::RTTI_Type_Descriptor,0);
  if (this_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\arch_command\\archcommand.cpp",0x2b);
  }
  NetworkCommand_cloneBaseFields(this_00);
  *(undefined4 *)((int)this_00 + 4) = *(undefined4 *)((int)this + 4);
  return;
}

