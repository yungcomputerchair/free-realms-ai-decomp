// addr: 0x01384a10
// name: EvaluationEnvironment_tracePrefix
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: void EvaluationEnvironment_tracePrefix(void * this) */

void __fastcall EvaluationEnvironment_tracePrefix(void *this)

{
  undefined4 ***pppuVar1;
  void *in_stack_00000004;
  undefined1 local_2c [4];
  undefined4 **local_28 [4];
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* When tracing is enabled, builds the current trace prefix/indent string and
                       emits it with a fixed format string. */
  puStack_8 = &LAB_01682df8;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_2c;
  ExceptionList = &local_c;
  if (((*(int *)((int)this + 4) == 0) || (*(char *)(*(int *)((int)this + 4) + 0x22c) != '\0')) &&
     (*(char *)((int)this + 0x78) != '\0')) {
    local_14 = 0xf;
    local_18 = 0;
    local_28[0] = (undefined4 **)((uint)local_28[0] & 0xffffff00);
    local_4 = 0;
    ValueData_debugPrint(in_stack_00000004,local_2c);
    pppuVar1 = (undefined4 ***)local_28[0];
    if (local_14 < 0x10) {
      pppuVar1 = local_28;
    }
    EvaluationEnvironment_tracef(this,"%s",pppuVar1);
    local_4 = 0xffffffff;
    if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
      _free(local_28[0]);
    }
  }
  ExceptionList = local_c;
  return;
}

