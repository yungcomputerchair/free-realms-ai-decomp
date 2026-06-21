// addr: 0x01407300
// name: StringList_getStringAtIndex
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
StringList_getStringAtIndex
          (int param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2,
          uint param_3)

{
  int iVar1;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Returns a copy of the std::string element at index from a vector-like string
                       list after bounds checks (0x1c string stride). */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01691689;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if ((*(int *)(param_1 + 0xc) == 0) ||
     ((uint)((*(int *)(param_1 + 0x10) - *(int *)(param_1 + 0xc)) / 0x1c) <= param_3)) {
    FUN_00d83c2d(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  }
  iVar1 = *(int *)(param_1 + 0xc);
  *(undefined4 *)(param_2 + 0x18) = 0xf;
  *(undefined4 *)(param_2 + 0x14) = 0;
  param_2[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (param_2,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *
                     )(iVar1 + param_3 * 0x1c),0,0xffffffff);
  ExceptionList = local_c;
  return param_2;
}

