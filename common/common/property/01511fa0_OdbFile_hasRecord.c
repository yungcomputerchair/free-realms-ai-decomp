// addr: 0x01511fa0
// name: OdbFile_hasRecord
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool OdbFile_hasRecord(void * odb, int recordId) */

bool __cdecl OdbFile_hasRecord(void *odb,int recordId)

{
  bool bVar1;
  uint local_4;
  
                    /* Checks whether an ODB record id exists by probing an index/map. It forwards
                       the id through FUN_01536810 and returns that lookup result. */
  bVar1 = OdbFile_findRecordEntry(*(void **)((int)odb + 0x20),recordId,&local_4,(uint *)&odb);
  return bVar1;
}

