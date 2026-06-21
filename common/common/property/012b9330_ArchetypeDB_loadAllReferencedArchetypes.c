// addr: 0x012b9330
// name: ArchetypeDB_loadAllReferencedArchetypes
// subsystem: common/common/property
// source (binary assert): common/common/property/ArchetypeDB.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool ArchetypeDB_loadAllReferencedArchetypes(void * unused, int version) */

bool __thiscall ArchetypeDB_loadAllReferencedArchetypes(void *this,void *unused,int version)

{
  int version_00;
  undefined4 *puVar1;
  uint *value;
  undefined4 *puVar2;
  undefined1 auStack_1c [4];
  undefined4 *puStack_18;
  undefined4 *puStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
  version_00 = version;
                    /* Builds the list of storage-backed archetype ids for a version, loads each
                       archetype, and processes it through the archetype reference/dependency
                       helper. The first parameter is unused in the decompilation. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0166d8d8;
  local_c = ExceptionList;
  value = (uint *)(DAT_01b839d8 ^ (uint)&stack0xffffffd4);
  ExceptionList = &local_c;
  if (version == -1) {
    FUN_012f5a60("v != -1","..\\common\\common\\property\\ArchetypeDB.cpp",0x208);
  }
  ArchetypeDB_openStorageForVersion(this,version_00);
  puStack_18 = (undefined4 *)0x0;
  puStack_14 = (undefined4 *)0x0;
  uStack_10 = 0;
  uStack_4 = 0;
  ArchetypeDB_getArchetypeIDs(this,auStack_1c,version_00);
  puVar2 = puStack_18;
  if (puStack_14 < puStack_18) {
    FUN_00d83c2d();
  }
  while( true ) {
    puVar1 = puStack_14;
    if (puStack_14 < puStack_18) {
      FUN_00d83c2d();
    }
    if (puVar2 == puVar1) break;
    if (puStack_14 <= puVar2) {
      FUN_00d83c2d();
    }
    version = ArchetypeDB_getArchetype(*puVar2,version_00);
    if (version != 0) {
      UIntVector_pushBack(unused,&version,value);
    }
    if (puStack_14 <= puVar2) {
      FUN_00d83c2d();
    }
    puVar2 = puVar2 + 1;
  }
  uStack_4 = 0xffffffff;
  if (puStack_18 != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(puStack_18);
  }
  ExceptionList = local_c;
  return true;
}

