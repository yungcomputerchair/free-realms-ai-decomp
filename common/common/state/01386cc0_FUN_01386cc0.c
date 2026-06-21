// addr: 0x01386cc0
// name: FUN_01386cc0
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_01386cc0(undefined4 param_1,undefined4 param_2,void *param_3)

{
  void *pvVar1;
  undefined4 in_stack_0000001c;
  uint in_stack_00000020;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Sets a string ValueData/return-map entry for key dynamic, creating the entry
                       if needed and storing either zero/null or an id/string payload. Exact
                       symbolic key name is not proven. */
  puStack_8 = &LAB_016833a8;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  pvVar1 = EvaluationEnvironment_getOrCreateReturnValue
                     (&param_1,DAT_01b839d8 ^ (uint)&stack0xfffffff0);
  FUN_01300680(3);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)((int)pvVar1 + 8),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             &param_2,0,0xffffffff);
  local_4 = 0xffffffff;
  if (0xf < in_stack_00000020) {
                    /* WARNING: Subroutine does not return */
    _free(param_3);
  }
  ExceptionList = local_c;
  return;
}

