// addr: 0x014e6d50
// name: ArchCommand_AddArchetypesToDB_cloneInto
// subsystem: common/networking/arch_command
// source (binary assert): common/networking/arch_command/archcommandaddarchetypestodb.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArchCommand_AddArchetypesToDB_cloneInto(void * this, void * target) */

void __thiscall ArchCommand_AddArchetypesToDB_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Copies an ArchCommand_AddArchetypesToDB into an existing target: validates
                       RTTI, clones the ArchCommand base, then assigns the vector/list member
                       holding archetype records. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &ArchCommand_AddArchetypesToDB::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\arch_command\\archcommandaddarchetypestodb.cpp",
                 0x51);
  }
  ArchCommand_cloneInto(this,target_00);
  StdVector28_assign((int)this + 8);
  return;
}

