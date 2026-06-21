// addr: 0x013df3a0
// name: CommandSubsystem_initializeDefaultTypeIds
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void CommandSubsystem_initializeDefaultTypeIds(void) */

void CommandSubsystem_initializeDefaultTypeIds(void)

{
  void *pvVar1;
  void *this;
  void *this_00;
  int unaff_retaddr;
  int iVar2;
  
                    /* Ensures several global command/property/rule managers exist and initializes
                       their type/opcode fields to the default value 0x9f3 by passing -1 to the
                       setters. Evidence: callee pairs allocate singletons and then set fields
                       before invoking each manager's registration routine. */
  iVar2 = -1;
  pvVar1 = (void *)FUN_012a84b0();
  MessageDB_setCurrentVersion(pvVar1,iVar2);
  iVar2 = -1;
  pvVar1 = (void *)FUN_012a0710();
  RuleSetDB_ctorWithTypeId(pvVar1,iVar2);
  iVar2 = -1;
  ArchetypeDB_getInstance();
  PropertyTypeOwner_setTypeIdOrDefault(this,iVar2,unaff_retaddr);
  iVar2 = -1;
  ActionDB_ensureSingleton();
  PropertyTypeId_setOrDefault(this_00,iVar2);
  return;
}

