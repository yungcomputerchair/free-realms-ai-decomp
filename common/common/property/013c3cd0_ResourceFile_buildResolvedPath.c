// addr: 0x013c3cd0
// name: ResourceFile_buildResolvedPath
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void ResourceFile_buildResolvedPath(undefined4 param_1,undefined4 param_2)

{
  uint uVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *unaff_ESI;
  undefined4 unaff_EDI;
  undefined1 local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Builds a resolved path string from two string inputs and stores it in the
                       output std::string. Callers use the result immediately for file open, file
                       existence checks, and resource cache loads. */
  puStack_8 = &LAB_016896d1;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_c;
  *(undefined4 *)(unaff_ESI + 0x18) = 0xf;
  *(undefined4 *)(unaff_ESI + 0x14) = 0;
  unaff_ESI[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
  local_4 = 0;
  pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
           FUN_01249400(local_28,param_1,&DAT_01770234,uVar1);
  local_4 = 1;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (unaff_ESI,pbVar2,0,0xffffffff);
  local_4 = local_4 & 0xffffff00;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  StdString_appendSubstring(unaff_EDI,0,0xffffffff);
  StdString_appendSubstring(param_2,0,0xffffffff);
  ExceptionList = local_c;
  return;
}

