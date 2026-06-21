// addr: 0x01532c90
// name: ValueData_uninitializedCopyRangeWrapper
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
ValueData_uninitializedCopyRangeWrapper
          (uint param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)

{
  undefined4 local_4;
  
                    /* Wrapper around ValueData_uninitializedCopyRange used by vector
                       copy-assignment code to construct a range into allocated storage. It
                       preserves the compiler EH cookie and returns the destination end pointer from
                       the underlying copy loop. */
  local_4 = param_1 & 0xffffff00;
  ValueData_uninitializedCopyRange(param_2,param_3,param_4,param_1,param_4,local_4);
  return;
}

