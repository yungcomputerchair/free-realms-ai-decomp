// addr: 0x012a5e10
// name: TextReplacementList_addCStringPair
// subsystem: common/common/command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void TextReplacementList_addCStringPair(void * list, char * token, char *
   replacement) */

void __cdecl TextReplacementList_addCStringPair(void *list,char *token,char *replacement)

{
  char cVar1;
  uint uVar2;
  char *pcVar3;
  undefined4 uVar4;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_7c [4];
  void *local_78;
  undefined4 local_68;
  uint local_64;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_60 [4];
  void *local_5c;
  undefined4 local_4c;
  uint local_48;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Builds temporary std::strings from C-string token and replacement arguments,
                       appends the replacement pair, then frees the temporaries. Called by
                       plural-token expansion helpers. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_0166be08;
  local_c = ExceptionList;
  uVar2 = DAT_01b839d8 ^ (uint)&stack0xffffff74;
  ExceptionList = &local_c;
  local_48 = 0xf;
  local_4c = 0;
  local_5c = (void *)((uint)local_5c & 0xffffff00);
  pcVar3 = replacement;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_60,replacement,(int)pcVar3 - (int)(replacement + 1));
  local_4 = 0;
  local_64 = 0xf;
  local_68 = 0;
  local_78 = (void *)((uint)local_78 & 0xffffff00);
  pcVar3 = token;
  do {
    cVar1 = *pcVar3;
    pcVar3 = pcVar3 + 1;
  } while (cVar1 != '\0');
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_7c,token,(int)pcVar3 - (int)(token + 1));
  local_4._0_1_ = 1;
  uVar4 = FUN_012a29e0(local_7c,local_60);
  local_4._0_1_ = 2;
  FUN_012a5380(uVar4);
  local_4._0_1_ = 1;
  FUN_012a2730(uVar2);
  local_4 = (uint)local_4._1_3_ << 8;
  if (0xf < local_64) {
                    /* WARNING: Subroutine does not return */
    _free(local_78);
  }
  local_64 = 0xf;
  local_68 = 0;
  local_78 = (void *)((uint)local_78 & 0xffffff00);
  local_4 = 0xffffffff;
  if (0xf < local_48) {
                    /* WARNING: Subroutine does not return */
    _free(local_5c);
  }
  ExceptionList = local_c;
  return;
}

