// addr: 0x0149b8b0
// name: EmitTextMessageNode_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool EmitTextMessageNode_evaluate(void * this, void * result, void * trace) */

bool __thiscall EmitTextMessageNode_evaluate(void *this,void *result,void *trace)

{
  bool bVar1;
  void *valueData;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar2;
  void *env;
  uint local_54;
  bool local_50;
  undefined3 uStack_4f;
  undefined1 local_4c [4];
  void *local_48;
  undefined4 local_44;
  undefined4 local_40;
  undefined4 local_38;
  uint local_34;
  void *local_30;
  basic_string<char,std::char_traits<char>,std::allocator<char>_> local_2c [4];
  void *local_28;
  undefined4 local_18;
  uint local_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Evaluates an EmitTextMessageNode by building a CommandObject/command payload
                       for the message text, enqueueing it, restoring a trace/output flag, and
                       returning true. Stores boolean true in the result. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a39d4;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)&local_54;
  valueData = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff9c);
  ExceptionList = &local_c;
  local_54 = 0;
  EvaluationEnvironment_traceEnterf(trace,"(EmitTextMessageNode",valueData);
  local_14 = 0xf;
  local_18 = 0;
  local_28 = (void *)((uint)local_28 & 0xffffff00);
  local_4._0_1_ = 0;
  local_4._1_3_ = 0;
  if (*(int *)((int)this + 0x10) != 0) {
    pbVar2 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             MessageText_formatWithValueData(local_4c);
    local_4._0_1_ = 1;
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (local_2c,pbVar2,0,0xffffffff);
    local_4._0_1_ = 0;
    if (0xf < local_34) {
                    /* WARNING: Subroutine does not return */
      _free(local_48);
    }
    local_34 = 0xf;
    local_38 = 0;
    local_48 = (void *)((uint)local_48 & 0xffffff00);
  }
  local_4._0_1_ = 0;
  bVar1 = ValueData_getBooleanProperty14(valueData);
  _local_50 = CONCAT31(uStack_4f,bVar1);
  set_boolean_value_key_14(false);
  local_30 = Mem_Alloc(0x154);
  if (local_30 == (void *)0x0) {
    env = (void *)0x0;
  }
  else {
    local_48 = (void *)0x0;
    local_44 = 0;
    local_40 = 0;
    local_4 = CONCAT31(local_4._1_3_,3);
    local_54 = 1;
    env = (void *)CommandObjectEmitTextMessage_doCommand
                            (local_2c,*(undefined4 *)((int)this + 0x14),local_4c,trace);
  }
  local_4 = 0;
  if ((local_54 & 1) != 0) {
    local_54 = local_54 & 0xfffffffe;
    FUN_012ce9d0();
  }
  EvaluationEnvironment_addCommandObject(trace,env,valueData);
  set_boolean_value_key_14(SUB41(_local_50,0));
  FUN_01300680(1);
  *(undefined1 *)((int)result + 8) = 1;
  EvaluationEnvironment_traceExitf(trace,") => true",valueData);
  local_4 = 0xffffffff;
  if (0xf < local_14) {
                    /* WARNING: Subroutine does not return */
    _free(local_28);
  }
  ExceptionList = local_c;
  return true;
}

