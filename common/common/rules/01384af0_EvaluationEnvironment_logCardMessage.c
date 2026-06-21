// addr: 0x01384af0
// name: EvaluationEnvironment_logCardMessage
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void EvaluationEnvironment_logCardMessage(void * env, char * formatText, void
   * card) */

void __thiscall
EvaluationEnvironment_logCardMessage(void *this,void *env,char *formatText,void *card)

{
  char *pcVar1;
  uint uVar2;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  void *local_28;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Logs a formatted message that includes a card display string, using '(nil)'
                       for null and '(unloaded card)' when the card lacks loaded data. */
  puStack_8 = &LAB_01682e28;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_2c;
  if ((*(int *)((int)this + 4) != 0) && (*(char *)(*(int *)((int)this + 4) + 0x22c) == '\0')) {
    return;
  }
  if (*(char *)((int)this + 0x78) == '\0') {
    return;
  }
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  local_4 = 0;
  ExceptionList = &local_c;
  if (formatText == (char *)0x0) {
    uVar2 = 5;
    pcVar1 = "(nil)";
  }
  else {
    if (*(int *)(formatText + 100) != 0) {
      (**(code **)(*(int *)formatText + 0x158))(local_2c,DAT_01b839d8 ^ (uint)&stack0xffffffc8);
      goto LAB_01384b90;
    }
    uVar2 = 0xf;
    pcVar1 = "(unloaded card)";
  }
  std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
            (local_2c,pcVar1,uVar2);
LAB_01384b90:
  EvaluationEnvironment_tracef(this,"%s %s",env);
  local_4 = 0xffffffff;
  if (local_14 < 0x10) {
    ExceptionList = local_c;
    return;
  }
                    /* WARNING: Subroutine does not return */
  _free(local_28);
}

