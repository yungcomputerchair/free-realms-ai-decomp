// addr: 0x014e6430
// name: ArchCommand_DeleteArchetype_cloneInto
// subsystem: common/networking/arch_command
// source (binary assert): common/networking/arch_command/archcommanddeletearchetype.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArchCommand_DeleteArchetype_cloneInto(void * this, void * target) */

void __thiscall ArchCommand_DeleteArchetype_cloneInto(void *this,void *target)

{
  void *target_00;
  
                    /* Copies an ArchCommand_DeleteArchetype into an existing target after RTTI
                       validation, copying the base ArchCommand portion and two 32-bit derived
                       fields. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &ArchCommand_DeleteArchetype::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\arch_command\\archcommanddeletearchetype.cpp",0x30
                );
  }
  ArchCommand_cloneInto(this,target_00);
  *(undefined4 *)((int)target_00 + 8) = *(undefined4 *)((int)this + 8);
  *(undefined4 *)((int)target_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
  return;
}

