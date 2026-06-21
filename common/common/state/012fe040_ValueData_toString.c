// addr: 0x012fe040
// name: ValueData_toString
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void * ValueData_toString(void * this, void * out) */

void * __thiscall ValueData_toString(void *this,void *out)

{
  char cVar1;
  int iVar2;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  char *pcVar4;
  undefined4 local_41c;
  void *local_418;
  undefined1 local_414 [4];
  void *local_410;
  uint local_3fc;
  char local_3f8 [1000];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Formats ValueData to a string: integers as decimal, strings by copy, special
                       value type through helper, otherwise debug print. */
  puStack_8 = &LAB_0167595d;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_41c;
  ExceptionList = &local_c;
  *(undefined4 *)((int)out + 0x18) = 0xf;
  *(undefined4 *)((int)out + 0x14) = 0;
  local_418 = out;
  *(undefined1 *)((int)out + 4) = 0;
  local_4 = 0;
  iVar2 = *(int *)((int)this + 4);
  local_41c = 1;
  if (iVar2 == 2) {
    _sprintf(local_3f8,"%d",*(undefined4 *)((int)this + 8));
    pcVar4 = local_3f8;
    do {
      cVar1 = *pcVar4;
      pcVar4 = pcVar4 + 1;
    } while (cVar1 != '\0');
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (out,local_3f8,(int)pcVar4 - (int)(local_3f8 + 1));
  }
  else if (iVar2 == 3) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (out,*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **
                    )((int)this + 8),0,0xffffffff);
  }
  else if (iVar2 == 10) {
    pbVar3 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             MessageText_formatWithValueData(local_414);
    local_4 = 1;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (out,pbVar3,0,0xffffffff);
    local_4 = local_4 & 0xffffff00;
    if (0xf < local_3fc) {
                    /* WARNING: Subroutine does not return */
      _free(local_410);
    }
  }
  else {
    ValueData_debugPrint(this,out);
  }
  ExceptionList = local_c;
  return out;
}

