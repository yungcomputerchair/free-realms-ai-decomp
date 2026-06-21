// addr: 0x01499020
// name: IsBorneByNode_evaluate
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool IsBorneByNode_evaluate(void * this, void * result, void * trace) */

bool __thiscall IsBorneByNode_evaluate(void *this,void *result,void *trace)

{
  char cVar1;
  bool bVar2;
  void *sourceEnv;
  int *piVar3;
  undefined4 *unaff_EBX;
  undefined4 *unaff_EBP;
  undefined4 *puVar4;
  undefined1 *sourceEnv_00;
  undefined1 local_14c [24];
  undefined1 local_134 [136];
  undefined1 auStack_ac [148];
  void *pvStack_18;
  int iStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Evaluates an IsBorneBy condition: obtains candidate cards from the left
                       expression, then for each candidate sets it as current target and evaluates
                       the right expression. Returns true when a matching borne-by card is found;
                       otherwise logs false. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016a3287;
  local_c = ExceptionList;
  sourceEnv = (void *)(DAT_01b839d8 ^ (uint)&stack0xfffffe90);
  ExceptionList = &local_c;
  FUN_012fa910();
  local_4 = 0;
  EvaluationEnvironment_traceEnterf(trace,"(IsBorneBy",sourceEnv);
  EvaluationEnvironment_ctor();
  local_4._0_1_ = 1;
  EvaluationEnvironment_copyFrom(local_134,trace,sourceEnv);
  EvaluationEnvironment_setBooleanKey9();
  EvaluationEnvironment_setBooleanKey4();
  local_4 = CONCAT31(local_4._1_3_,2);
  piVar3 = EvaluationEnvironment_getGame(trace);
  (**(code **)(*piVar3 + 0x14c))();
  sourceEnv_00 = &stack0xfffffe9c;
  cVar1 = (**(code **)(**(int **)((int)this + 0x1c) + 0x3c))();
  if (cVar1 == '\0') {
    EvaluationEnvironment_traceExitf(trace,") => false",sourceEnv_00);
LAB_014992b4:
    iStack_10 = CONCAT31(iStack_10._1_3_,1);
    if (unaff_EBP != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(unaff_EBP);
    }
    iStack_10 = (uint)iStack_10._1_3_ << 8;
    FUN_01385460();
    iStack_10 = 0xffffffff;
    FUN_01300cd0();
    bVar2 = false;
  }
  else {
    puVar4 = unaff_EBP;
    if (unaff_EBX < unaff_EBP) {
      FUN_00d83c2d();
      FUN_00d83c2d();
    }
    while( true ) {
      if (&stack0x00000000 == (undefined1 *)0x16c) {
        FUN_00d83c2d();
      }
      if (puVar4 == unaff_EBX) {
        EvaluationEnvironment_traceExitf(trace,") => false",sourceEnv_00);
        goto LAB_014992b4;
      }
      EvaluationEnvironment_ctor();
      iStack_10 = CONCAT31(iStack_10._1_3_,3);
      EvaluationEnvironment_copyFrom(auStack_ac,trace,sourceEnv_00);
      if (&stack0x00000000 == (undefined1 *)0x16c) {
        FUN_00d83c2d();
      }
      if (unaff_EBX <= puVar4) {
        FUN_00d83c2d();
      }
      EvaluationEnvironment_setCurrentTargetFromElement(auStack_ac,(void *)*puVar4,sourceEnv_00);
      EvaluationEnvironment_setBooleanKey9(1);
      FUN_012fa910();
      iStack_10._0_1_ = 4;
      cVar1 = (**(code **)(**(int **)((int)this + 0x20) + 0x38))(local_14c,auStack_ac);
      if (cVar1 != '\0') break;
      iStack_10._0_1_ = 3;
      FUN_01300cd0();
      iStack_10 = CONCAT31(iStack_10._1_3_,2);
      FUN_01385460();
      if (unaff_EBX <= puVar4) {
        FUN_00d83c2d();
      }
      puVar4 = puVar4 + 1;
    }
    if (unaff_EBX <= puVar4) {
      FUN_00d83c2d();
    }
    EvaluationEnvironment_logCardMessage(trace,"Matched Card:",(char *)*puVar4,sourceEnv_00);
    EvaluationEnvironment_traceExitf(trace," => false",sourceEnv_00);
    iStack_10._0_1_ = 3;
    FUN_01300cd0();
    iStack_10._0_1_ = 2;
    FUN_01385460();
    iStack_10 = CONCAT31(iStack_10._1_3_,1);
    if (unaff_EBP != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(unaff_EBP);
    }
    iStack_10 = (uint)iStack_10._1_3_ << 8;
    FUN_01385460();
    iStack_10 = 0xffffffff;
    FUN_01300cd0();
    bVar2 = true;
  }
  ExceptionList = pvStack_18;
  return bVar2;
}

