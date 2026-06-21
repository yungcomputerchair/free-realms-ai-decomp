// addr: 0x01537e40
// name: OdbNameIndex_insertRecordId
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool OdbNameIndex_insertRecordId(void * index, int recordId) */

bool OdbNameIndex_insertRecordId(void *index,int recordId)

{
  int *piVar1;
  int in_ECX;
  
                    /* Inserts or finds a name-index entry and stores the record id in it. It
                       obtains the entry with FUN_01537a60 and writes param_2. */
  piVar1 = (int *)OdbNameIndex_findOrInsertRecord((void *)(in_ECX + 0x1c),index);
  *piVar1 = recordId;
  return true;
}

