// addr: 0x012b8df0
// name: ArchetypeDB_hasLoadedArchetypeId
// subsystem: common/common/property
// source (binary assert): common/common/property/ArchetypeDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ArchetypeDB_hasLoadedArchetypeId(int archetypeId, int version) */

bool __thiscall ArchetypeDB_hasLoadedArchetypeId(void *this,int archetypeId,int version)

{
  int *piVar1;
  int iVar2;
  int iVar3;
  int *piVar4;
  
                    /* Ensures the requested ArchetypeDB version is loaded, retrieves the
                       per-version integer vector, and returns whether archetypeId is present. It
                       asserts version != -1 and performs a linear find over the vector bounds. */
  iVar2 = version;
  if (version == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\property\\ArchetypeDB.cpp",0x310);
  }
  ArchetypeDB_openStorageForVersion(this,iVar2);
  iVar2 = IntKeyBufferMap_findOrInsert(&version);
  piVar1 = *(int **)(iVar2 + 8);
  if (piVar1 < *(int **)(iVar2 + 4)) {
    FUN_00d83c2d();
  }
  iVar2 = IntKeyBufferMap_findOrInsert(&version);
  piVar4 = *(int **)(iVar2 + 4);
  if (*(int **)(iVar2 + 8) < piVar4) {
    FUN_00d83c2d();
  }
  for (; (piVar4 != piVar1 && (*piVar4 != archetypeId)); piVar4 = piVar4 + 1) {
  }
  iVar3 = IntKeyBufferMap_findOrInsert(&version);
  piVar1 = *(int **)(iVar3 + 8);
  if (piVar1 < *(int **)(iVar3 + 4)) {
    FUN_00d83c2d();
  }
  if ((iVar2 == 0) || (iVar2 != iVar3)) {
    FUN_00d83c2d();
  }
  return piVar4 != piVar1;
}

