// addr: 0x01512080
// name: OdbFile_findRecordId
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int OdbFile_findRecordId(void * odb, char * name) */

int __cdecl OdbFile_findRecordId(void *odb,char *name)

{
  bool bVar1;
  
                    /* Looks up a named ODB record and returns its integer id, or -1 when absent. It
                       calls FUN_01536b00 and only returns the out parameter on success. */
  bVar1 = OdbFile_findRecordIdInTree(*(void **)((int)odb + 0x20),(uint)name,(uint *)&odb);
  if (bVar1) {
    return (int)odb;
  }
  return -1;
}

