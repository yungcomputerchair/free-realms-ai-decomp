// addr: 0x01428270
// name: sub_01428270_copyStructWithIntIntMap
// subsystem: common/networking/event_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
sub_01428270_copyStructWithIntIntMap(undefined4 *param_1,undefined4 *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Copy-constructs a small structure by copying the first word and
                       copy-constructing a contained int-int map/value member immediately after it.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0169529b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = *param_2;
  ValueData_IntIntMap_copyConstruct(param_1 + 1,param_2 + 1);
  ExceptionList = local_c;
  return param_1;
}

