// addr: 0x014f8e50
// name: GuildManager_setGuildNameById
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void GuildManager_setGuildNameById
               (int param_1,
               basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *param_2
               )

{
  int iVar1;
  int iVar2;
  void *pvVar3;
  int *piVar4;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
  iVar1 = param_1;
                    /* Finds or creates a Guild entry for an id, initializes id/active flag for new
                       entries, then assigns the guild name string at offset +0x14. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b2f6b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (param_1 != 0) {
    iVar2 = IntObjectMap_findValueOrNull(param_1,DAT_01b839d8 ^ (uint)&stack0xffffffe8);
    if (iVar2 == 0) {
      pvVar3 = Mem_Alloc(0x54);
      if (pvVar3 == (void *)0x0) {
        iVar2 = 0;
      }
      else {
        local_4 = iVar2;
        iVar2 = Guild_ctor();
      }
      local_4 = 0xffffffff;
      *(int *)(iVar2 + 8) = iVar1;
      *(undefined1 *)(iVar2 + 0x50) = 0;
      piVar4 = (int *)FUN_014f8a70(&param_1);
      *piVar4 = iVar2;
    }
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)(iVar2 + 0x14),
               param_2,0,0xffffffff);
  }
  ExceptionList = local_c;
  return;
}

