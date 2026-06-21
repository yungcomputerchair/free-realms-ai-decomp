// addr: 0x013d3a60
// name: InstanceIDVector_find
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * InstanceIDVector_find(void *param_1,void *param_2,void *param_3)

{
  bool bVar1;
  
                    /* Linear search over 0x10-byte instance-id records, returning the first record
                       matching the requested id or the end pointer. */
  if (param_1 == param_2) {
    return param_1;
  }
  do {
    bVar1 = CollectionItem_equalsIds(param_1,param_3);
    if (bVar1) {
      return param_1;
    }
    param_1 = (void *)((int)param_1 + 0x10);
  } while (param_1 != param_2);
  return param_1;
}

