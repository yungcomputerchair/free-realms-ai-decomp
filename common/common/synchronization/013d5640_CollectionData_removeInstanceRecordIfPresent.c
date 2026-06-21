// addr: 0x013d5640
// name: CollectionData_removeInstanceRecordIfPresent
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void CollectionData_removeInstanceRecordIfPresent(void * instanceRecord) */

void CollectionData_removeInstanceRecordIfPresent(void *instanceRecord)

{
  bool bVar1;
  void *in_ECX;
  
                    /* Removes an instance record from collection data only when a presence check
                       succeeds. */
  bVar1 = CollectionData_hasInstanceRecord(in_ECX,instanceRecord);
  if (!bVar1) {
    FUN_012c3e50(instanceRecord);
  }
  return;
}

