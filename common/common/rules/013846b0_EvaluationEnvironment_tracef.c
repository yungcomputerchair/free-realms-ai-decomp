// addr: 0x013846b0
// name: EvaluationEnvironment_tracef
// subsystem: common/common/rules
// source (binary assert): common/common/rules/EvaluationEnvironment.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __alloca_probe replaced with injection: alloca_probe */
/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void EvaluationEnvironment_tracef(void * env, char * format, undefined4) */

void __cdecl EvaluationEnvironment_tracef(void *env,char *format,undefined4 param_3)

{
  char cVar1;
  void *outString;
  char *pcVar2;
  char ****fmt;
  undefined1 local_13b4 [4];
  char ***local_13b0 [4];
  undefined4 local_13a0;
  uint local_139c;
  char local_1398 [5000];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Formats a large debug trace message and sends it to the game log when tracing
                       is enabled for the environment/game. */
  puStack_8 = &LAB_01682d5b;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_13b4;
  outString = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffec40);
  ExceptionList = &local_c;
  if (((*(int *)((int)env + 4) == 0) || (*(char *)(*(int *)((int)env + 4) + 0x22c) != '\0')) &&
     (*(char *)((int)env + 0x78) != '\0')) {
    local_139c = 0xf;
    local_13a0 = 0;
    local_13b0[0] = (char ***)((uint)local_13b0[0] & 0xffffff00);
    local_4 = 0;
    EvaluationEnvironment_buildIndentString(env,local_13b4,outString);
    __vsnprintf(local_1398,5000,format,&param_3);
    pcVar2 = local_1398;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_01241650(local_1398,(int)pcVar2 - (int)(local_1398 + 1));
    fmt = (char ****)local_13b0[0];
    if (local_139c < 0x10) {
      fmt = local_13b0;
    }
    if (*(int *)((int)env + 4) == 0) {
      FUN_012f5a60("mGame","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x2bd);
    }
    Game_logGeneral(*(void **)((int)env + 4),(char *)fmt,outString);
    local_4 = 0xffffffff;
    if (0xf < local_139c) {
                    /* WARNING: Subroutine does not return */
      _free(local_13b0[0]);
    }
  }
  ExceptionList = local_c;
  return;
}

