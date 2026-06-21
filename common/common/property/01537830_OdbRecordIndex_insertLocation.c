// addr: 0x01537830
// name: OdbRecordIndex_insertLocation
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool OdbRecordIndex_insertLocation(void * index, int recordId, int size, int
   offset) */

bool OdbRecordIndex_insertLocation(void *index,int recordId,int size,int offset)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  
  iVar2 = size;
                    /* Inserts or finds a record-index entry and stores two 32-bit values in it,
                       likely the record offset and size. It obtains the entry with FUN_01537660 and
                       writes param_3 and param_2. */
  iVar1 = recordId;
  piVar3 = (int *)FUN_01537660(&index);
  *piVar3 = iVar2;
  piVar3[1] = iVar1;
  return true;
}

