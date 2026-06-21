// addr: 0x0149d0e0
// name: ConcatNode_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Function: __security_check_cookie replaced with injection: security_check_cookie */
/* Setting prototype: bool ConcatNode_evaluate(void * this, void * result, void * trace) */

bool __thiscall ConcatNode_evaluate(void *this,void *result,void *trace)

{
  char cVar1;
  bool bVar2;
  uint uVar3;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *pbVar4;
  int unaff_EBX;
  undefined1 *puVar5;
  undefined1 local_98 [4];
  undefined1 auStack_94 [4];
  int iStack_90;
  undefined1 auStack_88 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_6c [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_50 [4];
  undefined4 ***apppuStack_4c [5];
  uint uStack_38;
  basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> abStack_34 [32];
  void *pvStack_14;
  uint local_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Evaluates two string child expressions, concatenates them, stores the string
                       result, and logs the operands/result. Returns false if either child is not a
                       string result. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a3e36;
  local_c = ExceptionList;
  local_10 = DAT_01b839d8 ^ (uint)local_98;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffff58;
  ExceptionList = &local_c;
  FUN_012fa910();
  local_4 = 0;
  FUN_012fa910();
  local_4 = CONCAT31(local_4._1_3_,1);
  EvaluationEnvironment_traceEnterf(trace,"(Concat",uVar3);
  puVar5 = local_98;
  cVar1 = (**(code **)(**(int **)((int)this + 0x1c) + 0x38))(puVar5,trace);
  if ((((cVar1 == '\0') ||
       (cVar1 = (**(code **)(**(int **)((int)this + 0x20) + 0x38))(auStack_94,trace), cVar1 == '\0')
       ) || (unaff_EBX != 3)) || (iStack_90 != 3)) {
    EvaluationEnvironment_traceExitf(trace,") => false",puVar5);
    local_c = (void *)((uint)local_c & 0xffffff00);
    FUN_01300cd0();
    local_c = (void *)0xffffffff;
    FUN_01300cd0();
    bVar2 = false;
  }
  else {
    pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_0123c310();
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_50,pbVar4);
    local_c._0_1_ = 2;
    pbVar4 = (basic_string<char,struct_std::char_traits<char>,class_std::allocator<char>_> *)
             FUN_0123c310();
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
    basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_6c,pbVar4);
    local_c._0_1_ = 3;
    FUN_012325d0(abStack_34,abStack_50,abStack_6c);
    local_c._0_1_ = 4;
    FUN_01300680(3);
    std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::assign
              (*(basic_string<char,std::char_traits<char>,std::allocator<char>_> **)
                ((int)result + 8),abStack_34,0,0xffffffff);
    ValueData_toString(result,auStack_88);
    local_c._0_1_ = 5;
    if (uStack_38 < 0x10) {
      apppuStack_4c[0] = apppuStack_4c;
    }
    EvaluationEnvironment_tracef(trace,"%s & %s = %s",apppuStack_4c[0]);
    local_c._0_1_ = 4;
    FUN_0041f1d7();
    EvaluationEnvironment_traceExitf(trace,") => true",puVar5);
    local_c._0_1_ = 3;
    FUN_0041f1d7();
    local_c._0_1_ = 2;
    FUN_0041f1d7();
    local_c._0_1_ = 1;
    FUN_0041f1d7();
    local_c = (void *)((uint)local_c._1_3_ << 8);
    FUN_01300cd0();
    local_c = (void *)0xffffffff;
    FUN_01300cd0();
    bVar2 = true;
  }
  ExceptionList = pvStack_14;
  return bVar2;
}

