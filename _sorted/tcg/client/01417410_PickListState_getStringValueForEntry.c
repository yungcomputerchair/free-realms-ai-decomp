// addr: 0x01417410
// name: PickListState_getStringValueForEntry
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Removing unreachable block (ram,0x0141745a) */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __fastcall
PickListState_getStringValueForEntry
          (void *param_1,int param_2,
          basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_3)

{
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar1;
  void *pvVar2;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Called by PickListState_enterState; looks up an entry with FUN_01417100 and
                       returns its string value only when type/code equals 3, otherwise empty
                       string. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016930d9;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  pvVar2 = ReturnValueMap_findValueData(param_1,param_2);
  if ((pvVar2 == (void *)0x0) || (*(int *)((int)pvVar2 + 4) != 3)) {
    *(undefined4 *)(param_3 + 0x18) = 0xf;
    *(undefined4 *)(param_3 + 0x14) = 0;
    param_3[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(param_3,"",0);
  }
  else {
    pbVar1 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
              ((int)pvVar2 + 8);
    *(undefined4 *)(param_3 + 0x18) = 0xf;
    *(undefined4 *)(param_3 + 0x14) = 0;
    param_3[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_3,pbVar1,0,0xffffffff);
  }
  ExceptionList = local_c;
  return param_3;
}

