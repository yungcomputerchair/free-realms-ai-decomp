// addr: 0x014e5c20
// name: ArchCommand_SetEnabledArchetypes_cloneInto
// subsystem: common/networking/arch_command
// source (binary assert): common/networking/arch_command/archcommandsetenabledarchetypes.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArchCommand_SetEnabledArchetypes_cloneInto(void * this, void * target) */

void __thiscall ArchCommand_SetEnabledArchetypes_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Copies an ArchCommand_SetEnabledArchetypes into an existing target after RTTI
                       validation and ArchCommand base cloning; the remaining helper copies the
                       enabled-archetypes collection member. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &ArchCommand_SetEnabledArchetypes::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\arch_command\\archcommandsetenabledarchetypes.cpp"
                 ,0x38);
  }
  ArchCommand_cloneInto(this,target_00);
  FUN_005f1e5c((int)this + 8);
  return;
}

