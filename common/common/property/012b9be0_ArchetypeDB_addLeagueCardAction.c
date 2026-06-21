// addr: 0x012b9be0
// name: ArchetypeDB_addLeagueCardAction
// subsystem: common/common/property
// source (binary assert): common/common/property/ArchetypeDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArchetypeDB_addLeagueCardAction(int actionType, int arg1, int arg2, int
   archetypeId, int version) */

void ArchetypeDB_addLeagueCardAction(int actionType,int arg1,int arg2,int archetypeId,int version)

{
  int *piVar1;
  
                    /* Finds an Archetype by archetype id and version, then dispatches the
                       league-card action to that archetype's virtual method at +0xe8. If the
                       version is -1 it triggers the ArchetypeDB.cpp `v != -1` assertion. */
  if (version == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\property\\ArchetypeDB.cpp",0x2f6);
  }
  piVar1 = (int *)ArchetypeDB_getArchetype(archetypeId,version);
  if (piVar1 != (int *)0x0) {
    (**(code **)(*piVar1 + 0xe8))(actionType,arg1,arg2);
  }
  return;
}

