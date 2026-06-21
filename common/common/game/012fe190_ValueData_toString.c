// addr: 0x012fe190
// name: ValueData_toString
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

basic_string<char,std::char_traits<char>,std::allocator<char>_> * __thiscall
ValueData_toString(int param_1,
                  basic_string<char,std::char_traits<char>,std::allocator<char>_> *param_2)

{
  char cVar1;
  int iVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  char *pcVar4;
  uint uVar5;
  undefined4 local_41c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> *local_418;
  undefined1 local_414 [4];
  void *local_410;
  uint local_3fc;
  char local_3f8 [1000];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Converts a ValueData-like object to a string: signed integers are formatted
                       with an explicit sign, strings are copied, type 10 delegates to another
                       formatter, and unknown types get an unhandled-type marker. */
  puStack_8 = &LAB_016759bd;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_41c;
  ExceptionList = &local_c;
  *(undefined4 *)(param_2 + 0x18) = 0xf;
  *(undefined4 *)(param_2 + 0x14) = 0;
  local_418 = param_2;
  param_2[4] = (basic_string<char,std::char_traits<char>,std::allocator<char>_>)0x0;
  local_4 = 0;
  iVar2 = *(int *)(param_1 + 4);
  local_41c = 1;
  if (iVar2 == 2) {
    iVar2 = *(int *)(param_1 + 8);
    if (iVar2 < 1) {
      if (iVar2 < 0) {
        pcVar4 = "%d";
      }
      else {
        pcVar4 = "+%d";
      }
    }
    else {
      pcVar4 = "+%d";
    }
    _sprintf(local_3f8,pcVar4,iVar2);
    pcVar4 = local_3f8;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    uVar5 = (int)pcVar4 - (int)(local_3f8 + 1);
    pcVar4 = local_3f8;
  }
  else {
    if (iVar2 == 3) {
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (param_2,*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                           **)(param_1 + 8),0,0xffffffff);
      ExceptionList = local_c;
      return param_2;
    }
    if (iVar2 == 10) {
      pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
               MessageText_formatWithValueData(local_414);
      local_4 = 1;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (param_2,pbVar3,0,0xffffffff);
      local_4 = local_4 & 0xffffff00;
      if (local_3fc < 0x10) {
        ExceptionList = local_c;
        return param_2;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_410);
    }
    uVar5 = 0x24;
    pcVar4 = "(value unhandled type: unknown type)";
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(param_2,pcVar4,uVar5)
  ;
  ExceptionList = local_c;
  return param_2;
}

