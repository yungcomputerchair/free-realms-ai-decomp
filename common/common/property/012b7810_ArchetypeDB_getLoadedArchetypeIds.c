// addr: 0x012b7810
// name: ArchetypeDB_getLoadedArchetypeIds
// subsystem: common/common/property
// source (binary assert): common/common/property/ArchetypeDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void ArchetypeDB_getLoadedArchetypeIds(void * outIds, int version) */

void ArchetypeDB_getLoadedArchetypeIds(void *outIds,int version)

{
                    /* Copies the per-version integer vector from ArchetypeDB into the caller's
                       output vector. It asserts version != -1 in ArchetypeDB.cpp, uses the
                       map/vector accessor for the version, then performs a vector assignment. */
  if (version == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\property\\ArchetypeDB.cpp",0x309);
  }
  IntKeyBufferMap_findOrInsert(&version);
  FUN_005f1e5c(outIds);
  return;
}

