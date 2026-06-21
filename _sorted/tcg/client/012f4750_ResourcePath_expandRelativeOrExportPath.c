// addr: 0x012f4750
// name: ResourcePath_expandRelativeOrExportPath
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


basic_string<char,std::char_traits<char>,std::allocator<char>_> *
ResourcePath_expandRelativeOrExportPath
          (basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_1,int param_2,
          basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_3)

{
  char cVar1;
  uint uVar2;
  int iVar3;
  char *pcVar4;
  undefined4 *puVar5;
  char *pcVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *pbVar7;
  char *pcVar8;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Called by ResourcePath_buildFilePath; normalizes slashes, handles 'export:'
                       prefix by inserting export_win32, strips leading './', and formats
                       base/resource path strings. */
  puStack_8 = &LAB_01674409;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffffdc;
  ExceptionList = &local_c;
  local_4 = 0;
  *(undefined4 *)(param_1 + 0x18) = 0xf;
  *(undefined4 *)(param_1 + 0x14) = 0;
  pbVar7 = param_1 + 4;
  *pbVar7 = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (param_1,param_3,0,0xffffffff);
  local_4 = 0;
  String_replaceCharInPlace(param_1,'\\','/');
  iVar3 = FUN_00f942a0(0,7,"export:",7);
  if (iVar3 == 0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase(param_1,0,7);
    if (0xf < *(uint *)(param_1 + 0x18)) {
      pbVar7 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)pbVar7;
    }
    puVar5 = DAT_01bb9540;
    if (DAT_01bb9554 < 0x10) {
      puVar5 = &DAT_01bb9540;
    }
    if (*(uint *)(param_2 + 0x18) < 0x10) {
      param_2 = param_2 + 4;
    }
    else {
      param_2 = *(int *)(param_2 + 4);
    }
    pcVar4 = (char *)FUN_0130fbe0("%s%s/export_win32/%s",param_2,puVar5,pbVar7,uVar2);
    pcVar8 = pcVar4 + 1;
    pcVar6 = pcVar4;
    do {
      cVar1 = *pcVar6;
      pcVar6 = pcVar6 + 1;
    } while (cVar1 != '\0');
  }
  else {
    iVar3 = FUN_00f942a0(0,2,&DAT_01841b40,2);
    if (iVar3 == 0) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::erase(param_1,0,2);
      if (0xf < *(uint *)(param_1 + 0x18)) {
        pbVar7 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)pbVar7;
      }
      puVar5 = DAT_01bb9540;
      if (DAT_01bb9554 < 0x10) {
        puVar5 = &DAT_01bb9540;
      }
      if (*(uint *)(param_2 + 0x18) < 0x10) {
        param_2 = param_2 + 4;
      }
      else {
        param_2 = *(int *)(param_2 + 4);
      }
      pcVar4 = (char *)FUN_0130fbe0("%s%s/%s",param_2,puVar5,pbVar7);
      pcVar8 = pcVar4 + 1;
      pcVar6 = pcVar4;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
    }
    else {
      if (0xf < *(uint *)(param_1 + 0x18)) {
        pbVar7 = *(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)pbVar7;
      }
      puVar5 = DAT_01bb9540;
      if (DAT_01bb9554 < 0x10) {
        puVar5 = &DAT_01bb9540;
      }
      if (*(uint *)(param_2 + 0x18) < 0x10) {
        param_2 = param_2 + 4;
      }
      else {
        param_2 = *(int *)(param_2 + 4);
      }
      pcVar4 = (char *)FUN_0130fbe0("%s%s/%s",param_2,puVar5,pbVar7,uVar2);
      pcVar8 = pcVar4 + 1;
      pcVar6 = pcVar4;
      do {
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + 1;
      } while (cVar1 != '\0');
    }
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (param_1,pcVar4,(int)pcVar6 - (int)pcVar8);
  ExceptionList = local_c;
  return param_1;
}

