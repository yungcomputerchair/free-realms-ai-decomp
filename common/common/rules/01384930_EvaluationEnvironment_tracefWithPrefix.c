// addr: 0x01384930
// name: EvaluationEnvironment_tracefWithPrefix
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void EvaluationEnvironment_tracefWithPrefix(void * this, char * format) */

void __thiscall EvaluationEnvironment_tracefWithPrefix(void *this,char *format)

{
  void *in_stack_00000008;
  undefined1 local_2c [4];
  void *local_28;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* When tracing is enabled, builds the current trace prefix/indent string and
                       logs a formatted message as '%s %s'. */
  puStack_8 = &LAB_01682dc8;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_2c;
  ExceptionList = &local_c;
  if (((*(int *)((int)this + 4) == 0) || (*(char *)(*(int *)((int)this + 4) + 0x22c) != '\0')) &&
     (*(char *)((int)this + 0x78) != '\0')) {
    local_14 = 0xf;
    local_18 = 0;
    local_28 = (void *)((uint)local_28 & 0xffffff00);
    local_4 = 0;
    ValueData_debugPrint(in_stack_00000008,local_2c);
    EvaluationEnvironment_tracef(this,"%s %s",format);
    local_4 = 0xffffffff;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28);
    }
  }
  ExceptionList = local_c;
  return;
}

