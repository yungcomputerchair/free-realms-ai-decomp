// addr: 0x01497960
// name: LessThanNode_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool LessThanNode_evaluate(void * this, void * returnValue, void * env) */

bool __thiscall LessThanNode_evaluate(void *this,void *returnValue,void *env)

{
  int iVar1;
  char cVar2;
  uint uVar3;
  undefined4 uVar4;
  int iVar5;
  int iVar6;
  int unaff_EBX;
  undefined4 *puVar7;
  int iStack_1c;
  undefined4 local_18;
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Evaluates two operands as integers/booleans as needed and writes a boolean
                       indicating whether the left value is less than the right. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a2eb0;
  local_c = ExceptionList;
  uVar3 = DAT_01b839d8 ^ (uint)&stack0xffffffd0;
  ExceptionList = &local_c;
  FUN_012fa910();
  local_4 = 0;
  FUN_012fa910();
  local_4 = CONCAT31(local_4._1_3_,1);
  EvaluationEnvironment_traceEnterf(env,"(less than",uVar3);
  puVar7 = &local_18;
  cVar2 = (**(code **)(**(int **)((int)this + 0x1c) + 0x38))(puVar7,env);
  if (cVar2 != '\0') {
    (**(code **)(**(int **)((int)this + 0x20) + 0x38))(&stack0xffffffd4,env);
    if (unaff_EBX == 1) {
      FUN_01300680(2);
    }
    if (iStack_1c == 1) {
      FUN_01300680(2);
      local_18 = 0;
    }
    if ((iStack_1c == 2) && (unaff_EBX == 2)) {
      uVar4 = FUN_0123c340();
      uVar4 = FUN_0123c340(uVar4);
      EvaluationEnvironment_tracef(env,"%d < %d ?\n",uVar4);
      iVar5 = FUN_0123c340();
      iVar6 = FUN_0123c340();
      iVar1 = local_4;
      if (iVar6 < iVar5) {
        FUN_01300680(1);
        *(undefined1 *)(iVar1 + 8) = 1;
        EvaluationEnvironment_traceExitf(env,") => true",puVar7);
        local_c = (void *)((uint)local_c & 0xffffff00);
        FUN_01300cd0();
        local_c = (void *)0xffffffff;
        FUN_01300cd0();
        ExceptionList = pvStack_14;
        return true;
      }
      FUN_01300680(1);
      *(undefined1 *)(iVar1 + 8) = 0;
    }
  }
  EvaluationEnvironment_traceExitf(env,") => false",puVar7);
  local_c = (void *)((uint)local_c & 0xffffff00);
  FUN_01300cd0();
  local_c = (void *)0xffffffff;
  FUN_01300cd0();
  ExceptionList = pvStack_14;
  return false;
}

