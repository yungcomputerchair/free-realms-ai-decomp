// addr: 0x012fcdc0
// name: STLVector_string_serialize
// subsystem: common/networking/account_command
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: int STLVector_string_serialize(int vector) */

int STLVector_string_serialize(int vector)

{
  bool bVar1;
  int iVar2;
  uint3 extraout_var;
  undefined4 *in_ECX;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar3;
  undefined4 *local_34;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *local_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  void *local_28;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Serializes a vector of std::string values by writing the element count and
                       each string through the string serializer. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01675808;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_34;
  ExceptionList = &local_c;
  if (*(int *)(vector + 4) == 0) {
    iVar2 = 0;
  }
  else {
    iVar2 = (*(int *)(vector + 8) - *(int *)(vector + 4)) / 0x1c;
  }
  local_34 = in_ECX;
  Serializer_startAppendingSTLContainer((void *)*in_ECX,iVar2,DAT_01b839d8 ^ (uint)&stack0xffffffbc)
  ;
  local_30 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
              (vector + 8);
  if (local_30 <
      *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)(vector + 4)
     ) {
    FUN_00d83c2d();
  }
  pbVar3 = *(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
            (vector + 4);
  if (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)(vector + 8)
      < pbVar3) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (vector == 0) {
      FUN_00d83c2d();
    }
    if (pbVar3 == local_30) break;
    if (vector == 0) {
      FUN_00d83c2d();
    }
    if (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
         (vector + 8) <= pbVar3) {
      FUN_00d83c2d();
    }
    local_14 = 0xf;
    local_18 = 0;
    local_28 = (void *)((uint)local_28 & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_2c,pbVar3,0,0xffffffff);
    local_4 = 0;
    bVar1 = MessageText_serializeString((void *)*local_34,local_2c);
    if (!bVar1) {
      local_4 = 0xffffffff;
      if (local_14 < 0x10) {
        ExceptionList = local_c;
        return (uint)extraout_var << 8;
      }
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
    local_4 = 0xffffffff;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
    local_14 = 0xf;
    local_18 = 0;
    local_28 = (void *)((uint)local_28 & 0xffffff00);
    if (*(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> **)
         (vector + 8) <= pbVar3) {
      FUN_00d83c2d();
    }
    pbVar3 = pbVar3 + 0x1c;
  }
  iVar2 = Serialize_returnTrue();
  ExceptionList = local_c;
  return iVar2;
}

