// addr: 0x014e5610
// name: ArchCommand_StoreArchetype_cloneInto
// subsystem: common/networking/arch_command
// source (binary assert): common/networking/arch_command/archcommandstorearchetype.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArchCommand_StoreArchetype_cloneInto(void * this, void * target) */

void __thiscall ArchCommand_StoreArchetype_cloneInto(void *this,void *target)

{
  int *piVar1;
  undefined4 *puVar2;
  void *target_00;
  undefined4 *extraout_EAX;
  undefined4 uVar3;
  int *piVar4;
  
                    /* Copies an ArchCommand_StoreArchetype into an existing target: clones the
                       ArchCommand base, deep-clones the archetype object when present through the
                       archetype factory/vtable, and copies the status/id field at offset 12. */
  target_00 = (void *)FUN_00d8d382(target,0,&NetworkCommand::RTTI_Type_Descriptor,
                                   &ArchCommand_StoreArchetype::RTTI_Type_Descriptor,0);
  if (target_00 == (void *)0x0) {
    FUN_012f5a60("clone","..\\common\\networking\\arch_command\\archcommandstorearchetype.cpp",0x3f)
    ;
  }
  ArchCommand_cloneInto(this,target_00);
  piVar1 = *(int **)((int)this + 8);
  if (piVar1 == (int *)0x0) {
    *(undefined4 *)((int)target_00 + 8) = 0;
    *(undefined4 *)((int)target_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
    return;
  }
  ComponentFactory_initSingleton();
  puVar2 = (undefined4 *)*extraout_EAX;
  uVar3 = (**(code **)(*piVar1 + 0x18))();
  piVar4 = (int *)(*(code *)*puVar2)(uVar3);
  *(int **)((int)target_00 + 8) = piVar4;
  (**(code **)(*piVar4 + 0x104))(piVar1);
  *(undefined4 *)((int)target_00 + 0xc) = *(undefined4 *)((int)this + 0xc);
  return;
}

