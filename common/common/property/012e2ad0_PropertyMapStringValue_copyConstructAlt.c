// addr: 0x012e2ad0
// name: PropertyMapStringValue_copyConstructAlt
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
PropertyMapStringValue_copyConstructAlt
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2)

{
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Alternate copy constructor for a property map value that copies a std::string
                       and constructs embedded ValueData from the source. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01671ce3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (param_1,param_2,0,0xffffffff);
  local_4 = 0;
  ValueData_ctor(param_2 + 0x1c);
  ExceptionList = local_c;
  return param_1;
}

