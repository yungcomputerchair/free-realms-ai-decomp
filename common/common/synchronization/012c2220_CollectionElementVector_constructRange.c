// addr: 0x012c2220
// name: CollectionElementVector_constructRange
// subsystem: common/common/synchronization
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * CollectionElementVector_constructRange(void *param_1,void *param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Iterates over 0x10-byte collection-element records, constructing or copying
                       each source record into the destination range, and returns the advanced
                       destination pointer. */
  puStack_c = &LAB_0166e3f0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = (void *)((int)param_1 + 0x10)) {
    CollectionElement_destroyWrapper(param_3,param_1);
    param_3 = (void *)((int)param_3 + 0x10);
  }
  ExceptionList = local_10;
  return param_3;
}

