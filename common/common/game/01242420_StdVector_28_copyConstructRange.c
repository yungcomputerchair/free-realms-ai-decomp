// addr: 0x01242420
// name: StdVector_28_copyConstructRange
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


int StdVector_28_copyConstructRange(int param_1,int param_2,int param_3)

{
  void *local_10;
  undefined1 *puStack_c;
  undefined4 local_8;
  
                    /* Copy-constructs a range of 0x1c-byte elements into destination storage under
                       an exception frame. */
  puStack_c = &LAB_01654ec0;
  local_10 = ExceptionList;
  ExceptionList = &local_10;
  local_8 = 0;
  for (; param_1 != param_2; param_1 = param_1 + 0x1c) {
    FUN_01232840(param_3,param_1);
    param_3 = param_3 + 0x1c;
  }
  ExceptionList = local_10;
  return param_3;
}

