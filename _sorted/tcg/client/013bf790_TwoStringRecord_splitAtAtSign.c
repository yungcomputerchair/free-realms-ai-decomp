// addr: 0x013bf790
// name: TwoStringRecord_splitAtAtSign
// subsystem: common/tcg/client
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * TwoStringRecord_splitAtAtSign(void * out, void * input) */

void * TwoStringRecord_splitAtAtSign(void *out,void *input)

{
  int iVar1;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  undefined1 local_50 [4];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_4c [4];
  void *local_48;
  undefined4 local_38;
  uint local_34;
  undefined4 local_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  void *local_28;
  undefined4 local_18;
  uint local_14;
  void *local_10;
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Initializes a two-string record from input, splitting around an '@' character
                       when present; otherwise stores the whole input as the first string. Evidence
                       is the search for character 0x40 and substrings before/after the delimiter.
                        */
  puStack_8 = &LAB_01688f39;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_4 = 0;
  local_30 = 0;
  local_10 = out;
  local_34 = 0xf;
  local_38 = 0;
  local_48 = (void *)((uint)local_48 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_4c,"",0);
  local_4 = 1;
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_2c,"",0);
  local_4._0_1_ = 2;
  FUN_012a29e0(local_2c,local_4c);
  local_30 = 1;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  local_4 = (uint)local_4._1_3_ << 8;
  if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
    _free(local_48);
  }
  local_34 = 0xf;
  local_38 = 0;
  local_48 = (void *)((uint)local_48 & 0xffffff00);
  local_50[0] = 0x40;
  iVar1 = FUN_01231320(local_50,0,1);
  if (iVar1 == -1) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (out,input,0,0xffffffff);
  }
  else {
    pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_012323e0(local_4c,0,iVar1);
    local_4 = 3;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (out,pbVar2,0,0xffffffff);
    local_4 = local_4 & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      _free(local_48);
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48 = (void *)((uint)local_48 & 0xffffff00);
    pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_012323e0(local_4c,iVar1 + 1,0xffffffff);
    local_4 = 4;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              ((basic_string<char,std::char_traits<char>,std::allocator<char>_> *)((int)out + 0x1c),
               pbVar2,0,0xffffffff);
    local_4 = local_4 & 0xffffff00;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      _free(local_48);
    }
  }
  ExceptionList = local_c;
  return out;
}

