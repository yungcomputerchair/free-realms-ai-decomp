// addr: 0x013fc1b0
// name: RulesValueBinding_ctor
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 * __thiscall
RulesValueBinding_ctor
          (undefined4 *param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,
          void *param_5,undefined1 param_6)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs a small RulesValue binding record from three fields, a copied
                       RulesValue, and a boolean flag. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0168fddb;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *param_1 = param_2;
  param_1[1] = param_3;
  param_1[2] = param_4;
  RulesValue_copyCtor(param_1 + 3,param_5);
  *(undefined1 *)(param_1 + 8) = param_6;
  *(undefined1 *)((int)param_1 + 0x21) = 0;
  ExceptionList = local_c;
  return param_1;
}

