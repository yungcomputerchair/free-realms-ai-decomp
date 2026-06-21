// addr: 0x0137f700
// name: sub_0137f700_copyStructWithValueList
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
sub_0137f700_copyStructWithValueList(undefined4 *param_1,undefined4 *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs a small structure by copying the first word and
                       copy-constructing a contained value/list member immediately after it. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168238b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = *param_2;
  EventCommand_ValueList_copyConstruct(param_1 + 1,param_2 + 1);
  ExceptionList = local_c;
  return param_1;
}

