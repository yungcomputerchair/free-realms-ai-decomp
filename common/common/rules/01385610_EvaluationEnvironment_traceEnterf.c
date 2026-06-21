// addr: 0x01385610
// name: EvaluationEnvironment_traceEnterf
// subsystem: common/common/rules
// source (binary assert): common/common/rules/EvaluationEnvironment.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void EvaluationEnvironment_traceEnterf(void * env, char * format, undefined4)
    */

void __cdecl EvaluationEnvironment_traceEnterf(void *env,char *format,undefined4 param_3)

{
  char cVar1;
  void *outString;
  char *pcVar2;
  char ****fmt;
  undefined1 auStack_414 [4];
  char ***apppcStack_410 [4];
  undefined4 uStack_400;
  uint uStack_3fc;
  char acStack_3f8 [1000];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Formats an entering/nested evaluation trace, increments the current depth,
                       and asserts if depth exceeds 1000 to catch infinite recursion. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_01682fdb;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)auStack_414;
  outString = (void *)(DAT_01b839d8 ^ (uint)&stack0xfffffbe0);
  ExceptionList = &local_c;
  if (1000 < *(int *)((int)env + 0x74)) {
    EvaluationEnvironment_tracef
              (env,"INFINITE RECURSION DETECTED! > 1000 Depth! abort! abort!",outString);
    FUN_012f5a60("\"Infinite recursion detected! aborting!!\" == false",
                 "..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x645);
  }
  if (((*(int *)((int)env + 4) == 0) || (*(char *)(*(int *)((int)env + 4) + 0x22c) != '\0')) &&
     (*(char *)((int)env + 0x78) != '\0')) {
    uStack_3fc = 0xf;
    uStack_400 = 0;
    apppcStack_410[0] = (char ***)((uint)apppcStack_410[0] & 0xffffff00);
    uStack_4 = 0;
    *(int *)((int)env + 0x74) = *(int *)((int)env + 0x74) + 2;
    EvaluationEnvironment_buildIndentString(env,auStack_414,outString);
    *(int *)((int)env + 0x74) = *(int *)((int)env + 0x74) + 2;
    __vsnprintf(acStack_3f8,1000,format,&param_3);
    pcVar2 = acStack_3f8;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_01241650(acStack_3f8,(int)pcVar2 - (int)(acStack_3f8 + 1));
    fmt = (char ****)apppcStack_410[0];
    if (uStack_3fc < 0x10) {
      fmt = apppcStack_410;
    }
    if (*(int *)((int)env + 4) == 0) {
      FUN_012f5a60("mGame","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x2bd);
    }
    Game_logGeneral(*(void **)((int)env + 4),(char *)fmt,outString);
    uStack_4 = 0xffffffff;
    if (0xf < uStack_3fc) {
                    /* WARNING: Subroutine does not return */
      _free(apppcStack_410[0]);
    }
  }
  else {
    *(int *)((int)env + 0x74) = *(int *)((int)env + 0x74) + 4;
  }
  ExceptionList = local_c;
  return;
}

