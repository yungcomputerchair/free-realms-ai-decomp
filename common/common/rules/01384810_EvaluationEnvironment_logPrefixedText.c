// addr: 0x01384810
// name: EvaluationEnvironment_logPrefixedText
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void EvaluationEnvironment_logPrefixedText(void * env, char * text) */

void __thiscall EvaluationEnvironment_logPrefixedText(void *this,void *env,char *text)

{
  char cVar1;
  char *pcVar2;
  undefined4 ***pppuVar3;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  undefined4 **local_28 [4];
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* When EvaluationEnvironment logging is enabled, formats a message with the
                       current indent and a >>> prefix, then sends it to the environment logger. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01682d98;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_2c;
  ExceptionList = &local_c;
  if (((*(int *)((int)this + 4) == 0) || (*(char *)(*(int *)((int)this + 4) + 0x22c) != '\0')) &&
     (*(char *)((int)this + 0x78) != '\0')) {
    local_14 = 0xf;
    local_18 = 0;
    local_28[0] = (undefined4 **)((uint)local_28[0] & 0xffffff00);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign(local_2c,">>>",3);
    local_4 = 0;
    pcVar2 = env;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_01241650(env,(int)pcVar2 - ((int)env + 1));
    FUN_01241650(&DAT_018dd450,3);
    pppuVar3 = (undefined4 ***)local_28[0];
    if (local_14 < 0x10) {
      pppuVar3 = local_28;
    }
    EvaluationEnvironment_tracef(this,"%s",pppuVar3);
    local_4 = 0xffffffff;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28[0]);
    }
  }
  ExceptionList = local_c;
  return;
}

