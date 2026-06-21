// addr: 0x01532880
// name: ValueData_uninitializedCopyRangeA
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void * ValueData_uninitializedCopyRangeA(void *param_1,void *param_2,void *param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Copies a range of 12-byte ValueData-like elements into uninitialized
                       destination storage, returning the advanced destination pointer. It
                       constructs each destination element with ValueData_copyConstructThunk. */
  puStack_c = &LAB_016bb750;
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

