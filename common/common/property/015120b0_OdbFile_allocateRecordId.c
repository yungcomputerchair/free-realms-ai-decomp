// addr: 0x015120b0
// name: OdbFile_allocateRecordId
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int OdbFile_allocateRecordId(void * odb, char * name) */

int __cdecl OdbFile_allocateRecordId(void *odb,char *name)

{
  int recordId;
  
                    /* Allocates the next record id from the counter at offset 0x24 and inserts the
                       name-to-id mapping. It calls FUN_01537e40, then increments the counter. */
  recordId = *(int *)((int)odb + 0x24);
  OdbNameIndex_insertRecordId(name,recordId);
  *(int *)((int)odb + 0x24) = *(int *)((int)odb + 0x24) + 1;
  return recordId;
}

