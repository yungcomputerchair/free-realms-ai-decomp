// addr: 0x01392d10
// name: GameSpecificImplementation_required
// subsystem: common/review2
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */

void GameSpecificImplementation_required(int param_1)

{
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  void *local_28;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Writes the placeholder/error text "GAME SPECIFIC IMPLEMENTATION REQUIRED"
                       into an output string and logs/marks it with severity 3. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01684158;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_2c;
  ExceptionList = &local_c;
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_2c,"GAME SPECIFIC IMPLEMENTATION REQUIRED",0x25);
  local_4 = 0;
  FUN_01300680(3);
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)(param_1 + 8),
             (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             local_2c,0,0xffffffff);
  local_4 = 0xffffffff;
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_c;
  return;
}

