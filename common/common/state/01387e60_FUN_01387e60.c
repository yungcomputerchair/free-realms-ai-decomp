// addr: 0x01387e60
// name: FUN_01387e60
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void FUN_01387e60(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                  *param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_34 [4];
  undefined1 local_30;
  undefined4 local_20;
  undefined4 local_1c;
  uint uStack_18;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Sets a string ValueData/return-map entry for key 10, creating the entry if
                       needed and storing either zero/null or an id/string payload. Exact symbolic
                       key name is not proven. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01683558;
  local_c = ExceptionList;
  uStack_18 = DAT_01b839d8 ^ (uint)&stack0xffffffec;
  ExceptionList = &local_c;
  local_1c = 0xf;
  local_20 = 0;
  local_30 = 0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (abStack_34,param_1,0,0xffffffff);
  local_4 = 0xffffffff;
  FUN_01386cc0(10);
  ExceptionList = local_c;
  return;
}

