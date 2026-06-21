// addr: 0x013edd40
// name: ArchCommand_registerAllFactories
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Unknown calling convention -- yet parameter storage is locked */
/* Setting prototype: void ArchCommand_registerAllFactories(void) */

void ArchCommand_registerAllFactories(void)

{
                    /* Registers all archetype-related command factories, including
                       AddArchetypesToDB, DeleteArchetype, GetArchetypeID, SetEnabledArchetypes,
                       StoreArchetype, and ValidateUsername. */
  ArchCommand_registerFactory();
  ArchCommand_AddArchetypesToDB_registerFactory();
  ArchCommand_DeleteArchetype_registerFactory();
  ArchCommand_GetArchetypeID_registerFactory();
  ArchCommand_SetEnabledArchetypes_registerFactory();
  ArchCommand_StoreArchetype_registerFactory();
  ArchCommand_ValidateUsername_registerFactory();
  return;
}

