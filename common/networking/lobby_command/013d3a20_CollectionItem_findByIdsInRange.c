// addr: 0x013d3a20
// name: CollectionItem_findByIdsInRange
// subsystem: common/networking/lobby_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * CollectionItem_findByIdsInRange(void *param_1,void *param_2,void *param_3)

{
  bool bVar1;
  
                    /* Linear-searches 0x10-byte CollectionItem-like records until a record matches
                       the three id fields at offsets 4, 8, and 0xc of the key. Evidence: helper
                       compares those three fields and callers use it before adding/removing
                       collection items. */
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

