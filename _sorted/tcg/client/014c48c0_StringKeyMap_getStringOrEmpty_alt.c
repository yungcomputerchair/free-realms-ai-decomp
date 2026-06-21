// addr: 0x014c48c0
// name: StringKeyMap_getStringOrEmpty_alt
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
StringKeyMap_getStringOrEmpty_alt
          (int param_1,basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  uint uVar4;
  int *piVar5;
  undefined1 local_14 [8];
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Performs rb-tree lookup using helper 013b1720 against tree at this+0x48 and
                       returns the node string at +0x10, or empty string when not found. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016aaa89;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  piVar5 = (int *)FUN_013b1720(local_14,&stack0x00000008);
  iVar1 = *piVar5;
  iVar2 = *(int *)(param_1 + 0x4c);
  iVar3 = piVar5[1];
  if ((iVar1 == 0) || (iVar1 != param_1 + 0x48)) {
    FUN_00d83c2d(uVar4);
  }
  if (iVar3 == iVar2) {
    *(undefined4 *)(param_2 + 0x18) = 0xf;
    *(undefined4 *)(param_2 + 0x14) = 0;
    param_2[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(param_2,"",0);
  }
  else {
    if (iVar1 == 0) {
      FUN_00d83c2d(uVar4);
    }
    if (iVar3 == *(int *)(iVar1 + 4)) {
      FUN_00d83c2d(uVar4);
    }
    *(undefined4 *)(param_2 + 0x18) = 0xf;
    *(undefined4 *)(param_2 + 0x14) = 0;
    param_2[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (param_2,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                        *)(iVar3 + 0x10),0,0xffffffff);
  }
  ExceptionList = local_c;
  return param_2;
}

