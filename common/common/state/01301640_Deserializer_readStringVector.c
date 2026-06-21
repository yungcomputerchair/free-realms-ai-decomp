// addr: 0x01301640
// name: Deserializer_readStringVector
// subsystem: common/common/state
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool Deserializer_readStringVector(void * this, void * outVector) */

bool __thiscall Deserializer_readStringVector(void *this,void *outVector)

{
  char extraout_AL;
  undefined1 uVar1;
  void *element;
  uint local_70;
  int local_6c;
  void *local_68;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_64 [4];
  void *local_60;
  undefined4 local_50;
  uint local_4c;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> local_48 [4];
  void *local_44;
  undefined4 local_34;
  uint local_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  void *local_28;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Reads a count, reserves a vector, reads that many strings, pushes them into
                       the output, and finalizes the deserializer field. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01675d38;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_70;
  element = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff80);
  ExceptionList = &local_c;
  local_68 = outVector;
  FUN_013c2690(&local_70);
  StdStringVector_reserve(outVector,local_70);
  local_6c = 0;
  if (0 < (int)local_70) {
    do {
      local_30 = 0xf;
      local_34 = 0;
      local_44 = (void *)((uint)local_44 & 0xffffff00);
      local_14 = 0xf;
      local_18 = 0;
      local_28 = (void *)((uint)local_28 & 0xffffff00);
      local_4._0_1_ = 1;
      local_4._1_3_ = 0;
      Deserializer_readStringThunk(*(void **)this,local_48);
      if (extraout_AL == '\0') {
        local_4 = (uint)local_4._1_3_ << 8;
        if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
          _free(local_28);
        }
        local_14 = 0xf;
        local_18 = 0;
        local_28 = (void *)((uint)local_28 & 0xffffff00);
        local_4 = 0xffffffff;
        if (local_30 < 0x10) {
          ExceptionList = local_c;
          return false;
        }
                    /* WARNING: Subroutine does not return */
        _free(local_44);
      }
      local_4c = 0xf;
      local_50 = 0;
      local_60 = (void *)((uint)local_60 & 0xffffff00);
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (local_64,local_48,0,0xffffffff);
      local_4._0_1_ = 2;
      std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
                (local_2c,(basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_>
                           *)local_64,0,0xffffffff);
      local_4._0_1_ = 1;
      if (0xf < local_4c) {
                    /* WARNING: Subroutine does not return */
        _free(local_60);
      }
      local_4c = 0xf;
      local_50 = 0;
      local_60 = (void *)((uint)local_60 & 0xffffff00);
      StdVector28_pushBack(local_68,local_2c,element);
      local_4 = (uint)local_4._1_3_ << 8;
      if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
        _free(local_28);
      }
      local_14 = 0xf;
      local_18 = 0;
      local_28 = (void *)((uint)local_28 & 0xffffff00);
      local_4 = 0xffffffff;
      if (0xf < local_30) {
                    /* WARNING: Subroutine does not return */
        _free(local_44);
      }
      local_6c = local_6c + 1;
      local_30 = 0xf;
      local_34 = 0;
      local_44 = (void *)((uint)local_44 & 0xffffff00);
    } while (local_6c < (int)local_70);
  }
  uVar1 = FUN_013c26d0();
  ExceptionList = local_c;
  return (bool)uVar1;
}

