// addr: 0x01532920
// name: ValueData_uninitializedCopyRange
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * ValueData_uninitializedCopyRange(void *param_1,void *param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Copies a [first,last) range of 12-byte ValueData-like elements into
                       uninitialized storage and returns the end of constructed storage. Used by
                       vector assignment growth paths. */
  puStack_c = &LAB_016bb770;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = (void *)((int)param_1 + 0xc)) {
    ValueData_copyConstructThunk(param_3,param_1);
    param_3 = (void *)((int)param_3 + 0xc);
  }
  ExceptionList = local_10;
  return param_3;
}

