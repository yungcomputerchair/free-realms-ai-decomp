// addr: 0x014e5fb0
// name: ArchCommand_GetArchetypeID_cloneInto
// subsystem: common/networking/arch_command
// source (binary assert): common/networking/arch_command/archcommandgetarchetypeid.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArchCommand_GetArchetypeID_cloneInto(void * this, void * target) */

void __thiscall ArchCommand_GetArchetypeID_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Copies an ArchCommand_GetArchetypeID into an existing target: validates the
                       target RTTI, clones the ArchCommand base, then copies two 32-bit fields at
                       offsets 8 and 12. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &ArchCommand_GetArchetypeID::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\arch_command\\archcommandgetarchetypeid.cpp",0x3a)
    ;
  }
  ArchCommand_cloneInto(this,target_00);
  *(undefined4 *)((int)target_00 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)target_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
  return;
}

