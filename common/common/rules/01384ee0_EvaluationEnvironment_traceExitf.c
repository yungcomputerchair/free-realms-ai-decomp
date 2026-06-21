// addr: 0x01384ee0
// name: EvaluationEnvironment_traceExitf
// subsystem: common/common/rules
// source (binary assert): common/common/rules/EvaluationEnvironment.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void EvaluationEnvironment_traceExitf(void * env, char * format, undefined4)
    */

void __cdecl EvaluationEnvironment_traceExitf(void *env,char *format,undefined4 param_3)

{
  char cVar1;
  void *outString;
  char *pcVar2;
  char ****fmt;
  undefined1 local_414 [4];
  char ***local_410 [4];
  undefined4 local_400;
  uint local_3fc;
  char local_3f8 [1000];
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Formats a trace message for exiting/decreasing evaluation depth, decrementing
                       the depth counter whether or not the message is emitted. */
  puStack_8 = &LAB_01682eab;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_414;
  outString = (void *)(DAT_01b839d8 ^ (uint)&stack0xfffffbe0);
  ExceptionList = &local_c;
  if (((*(int *)((int)env + 4) == 0) || (*(char *)(*(int *)((int)env + 4) + 0x22c) != '\0')) &&
     (*(char *)((int)env + 0x78) != '\0')) {
    local_3fc = 0xf;
    local_400 = 0;
    local_410[0] = (char ***)((uint)local_410[0] & 0xffffff00);
    local_4 = 0;
    *(int *)((int)env + 0x74) = *(int *)((int)env + 0x74) + -2;
    EvaluationEnvironment_buildIndentString(env,local_414,outString);
    *(int *)((int)env + 0x74) = *(int *)((int)env + 0x74) + -2;
    __vsnprintf(local_3f8,1000,format,&param_3);
    pcVar2 = local_3f8;
    do {
      cVar1 = *pcVar2;
      pcVar2 = pcVar2 + 1;
    } while (cVar1 != '\0');
    FUN_01241650(local_3f8,(int)pcVar2 - (int)(local_3f8 + 1));
    fmt = (char ****)local_410[0];
    if (local_3fc < 0x10) {
      fmt = local_410;
    }
    if (*(int *)((int)env + 4) == 0) {
      FUN_012f5a60("mGame","..\\common\\common\\rules\\EvaluationEnvironment.cpp",0x2bd);
    }
    Game_logGeneral(*(void **)((int)env + 4),(char *)fmt,outString);
    local_4 = 0xffffffff;
    if (0xf < local_3fc) {
                    /* WARNING: Subroutine does not return */
      _free(local_410[0]);
    }
  }
  else {
    *(int *)((int)env + 0x74) = *(int *)((int)env + 0x74) + -4;
  }
  ExceptionList = local_c;
  return;
}

