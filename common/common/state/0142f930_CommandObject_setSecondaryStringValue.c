// addr: 0x0142f930
// name: CommandObject_setSecondaryStringValue
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall CommandObject_setSecondaryStringValue(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  uint uVar3;
  void *pvVar4;
  undefined4 uVar5;
  char *pcVar6;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Ensures a ValueData/string slot at offset 0x10 exists, then stores the
                       supplied C string into it as a type-3 string value. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016961f3;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffc8;
  ExceptionList = &local_c;
  if (*(int *)(param_1 + 0x10) == 0) {
    pvVar4 = Mem_Alloc(0xc);
    local_4 = 0;
    if (pvVar4 == (void *)0x0) {
      uVar5 = 0;
    }
    else {
      uVar5 = FUN_012fa910(uVar3);
    }
    *(undefined4 *)(param_1 + 0x10) = uVar5;
  }
  local_4 = 0xffffffff;
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  pcVar6 = param_2;
  do {
    cVar1 = *pcVar6;
    pcVar6 = pcVar6 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_28,param_2,(int)pcVar6 - (int)(param_2 + 1));
  local_4 = 1;
  iVar2 = *(int *)(param_1 + 0x10);
  FUN_01300680(3);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(iVar2 + 8),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             local_28,0,0xffffffff);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  ExceptionList = local_c;
  return;
}

