// addr: 0x012f2d20
// name: CommandLine_getOptionValueOrDefault
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


basic_string<char,std::char_traits<char>,std::allocator<char>_> *
CommandLine_getOptionValueOrDefault
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,void *param_2,
          void *param_3,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_4)

{
  int iVar1;
  uint uVar2;
  uint uVar3;
  int iVar4;
  char *pcVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Called from CardClient_ctor; finds an option string containing the requested
                       key, returns substring after '=' when present, otherwise copies the default
                       string. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016741d9;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffe0;
  ExceptionList = &local_c;
  uVar3 = StringVector_findContainingString(param_2,param_3);
  iVar1 = *(int *)((int)param_2 + 4);
  if (iVar1 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = (*(int *)((int)param_2 + 8) - iVar1) / 0x1c;
  }
  if ((int)uVar3 < iVar4) {
    if ((iVar1 == 0) || ((uint)((*(int *)((int)param_2 + 8) - iVar1) / 0x1c) <= uVar3)) {
      FUN_00d83c2d(uVar2);
    }
    iVar1 = *(int *)((int)param_2 + 4) + uVar3 * 0x1c;
    if (*(uint *)(*(int *)((int)param_2 + 4) + 0x18 + uVar3 * 0x1c) < 0x10) {
      pcVar5 = (char *)(iVar1 + 4);
    }
    else {
      pcVar5 = *(char **)(iVar1 + 4);
    }
    pcVar5 = _strrchr(pcVar5,0x3d);
    if (pcVar5 != (char *)0x0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
      basic_string<char,std::char_traits<char>,std::allocator<char>_>(param_1,pcVar5 + 1);
      ExceptionList = local_c;
      return param_1;
    }
  }
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  param_1[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (param_1,param_4,0,0xffffffff);
  ExceptionList = local_c;
  return param_1;
}

