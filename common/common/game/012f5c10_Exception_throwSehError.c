// addr: 0x012f5c10
// name: Exception_throwSehError
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void Exception_throwSehError(void)

{
  uint uVar1;
  void *this;
  void *local_48;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_44 [4];
  void *local_40;
  undefined4 local_30;
  uint local_2c;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_28 [4];
  void *local_24;
  undefined4 local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Allocates an Exception object, sets its message to 'Reached an SEH error,
                       please submit a bug.', clears filename/detail strings, sets line number to 0,
                       and throws it. The embedded message is explicit evidence. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01674863;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffa8;
  ExceptionList = &local_c;
  local_48 = Mem_Alloc(100);
  local_4 = 0;
  if (local_48 == (void *)0x0) {
    this = (void *)0x0;
  }
  else {
    this = (void *)Exception_ctor(uVar1);
  }
  local_4 = 0xffffffff;
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_44,"Reached an SEH error, please submit a bug.",0x2a);
  local_4 = 1;
  Exception_setMessage(this,local_44);
  local_4 = 0xffffffff;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_28,"",0);
  local_4 = 2;
  Exception_setFunctionName(this,local_28);
  local_4 = 0xffffffff;
  if (0xf < local_10) {
                    /* WARNING: Subroutine does not return */
    _free(local_24);
  }
  local_10 = 0xf;
  local_14 = 0;
  local_24 = (void *)((uint)local_24 & 0xffffff00);
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_44,"",0);
  local_4 = 3;
  Exception_setSourceFile(this,local_44);
  local_4 = 0xffffffff;
  if (0xf < local_2c) {
                    /* WARNING: Subroutine does not return */
    _free(local_40);
  }
  local_2c = 0xf;
  local_30 = 0;
  local_40 = (void *)((uint)local_40 & 0xffffff00);
  Exception_setLineNumber(this,0);
  local_48 = this;
                    /* WARNING: Subroutine does not return */
  __CxxThrowException_8(&local_48,&DAT_01aa602c);
}

