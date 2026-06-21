// addr: 0x013b1800
// name: StringKeyMap_getStringOrEmpty
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
StringKeyMap_getStringOrEmpty
          (int param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  int iVar1;
  uint uVar2;
  int local_14;
  int local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Uses rb-tree lower_bound helper at 013b1720 and returns the string stored at
                       node+0x10 for a key, or an empty string when the tree end is reached. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016875c9;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffd8;
  ExceptionList = &local_c;
  FUN_013b1720(&local_14,&stack0x00000008);
  iVar1 = *(int *)(param_1 + 0x128);
  if ((local_14 == 0) || (local_14 != param_1 + 0x124)) {
    FUN_00d83c2d(uVar2);
  }
  if (local_10 == iVar1) {
    *(undefined4 *)(param_2 + 0x18) = 0xf;
    *(undefined4 *)(param_2 + 0x14) = 0;
    param_2[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
  }
  else {
    if (local_14 == 0) {
      FUN_00d83c2d(uVar2);
    }
    if (local_10 == *(int *)(local_14 + 4)) {
      FUN_00d83c2d(uVar2);
    }
    *(undefined4 *)(param_2 + 0x18) = 0xf;
    *(undefined4 *)(param_2 + 0x14) = 0;
    param_2[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_2,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        *)(local_10 + 0x10),0,0xffffffff);
  }
  ExceptionList = local_c;
  return param_2;
}

