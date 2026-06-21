// addr: 0x014d3570
// name: GuildCommand_InfoMessageEnumDisplay_debugPrint
// subsystem: common/common/game
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void GuildCommand_InfoMessageEnumDisplay_debugPrint(void * this, void * out)
    */

void __thiscall GuildCommand_InfoMessageEnumDisplay_debugPrint(void *this,void *out)

{
  char cVar1;
  char *pcVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_90 [4];
  void *local_8c;
  undefined4 local_7c;
  uint local_78;
  char local_74 [100];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Debug-prints a guild info-message enum display command with message id and
                       two optional string arguments. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016ac8eb;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_90;
  ExceptionList = &local_c;
  FUN_01241650("Info message Enum display Guild Command\n",0x28);
  GuildCommand_debugPrint(this,out);
  FUN_01241650("Message: ",9);
  _sprintf(local_74,"%d",*(undefined4 *)((int)this + 8));
  pcVar2 = local_74;
  do {
    cVar1 = *pcVar2;
    pcVar2 = pcVar2 + 1;
  } while (cVar1 != '\0');
  FUN_01241650(local_74,(int)pcVar2 - (int)(local_74 + 1));
  FUN_01241650("\nArg1: ",7);
  local_78 = 0xf;
  local_7c = 0;
  local_8c = (void *)((uint)local_8c & 0xffffff00);
  local_4 = 0;
  if (*(void **)((int)this + 0x14) == (void *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_90,"(null)",6);
  }
  else {
    ValueData_debugPrint(*(void **)((int)this + 0x14),local_90);
  }
  StdString_appendSubstring(local_90,0,0xffffffff);
  FUN_01241650("\nArg2: ",7);
  if (*(void **)((int)this + 0x18) == (void *)0x0) {
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_90,"(null)",6);
  }
  else {
    ValueData_debugPrint(*(void **)((int)this + 0x18),local_90);
  }
  StdString_appendSubstring(local_90,0,0xffffffff);
  local_4 = 0xffffffff;
  if (0xf < local_78) {
                    /* WARNING: Subroutine does not return */
    _free(local_8c);
  }
  ExceptionList = local_c;
  return;
}

