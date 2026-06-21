// addr: 0x01503b50
// name: CommandObjectMultiAction_validateTargets
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectMultiAction.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObjectMultiAction_validateTargets(void * this, void * environment)
    */

bool __thiscall CommandObjectMultiAction_validateTargets(void *this,void *environment)

{
  char cVar1;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  int key_;
  int key__00;
  int iVar5;
  undefined1 local_c0 [4];
  void *local_bc;
  int local_b8;
  undefined4 local_b4;
  int iStack_ac;
  undefined1 local_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  uint local_4;
  
                    /* Validates MultiAction target data by building the targets collection and
                       rejecting missing/empty targets or an out-of-range selected target index. */
  puStack_8 = &LAB_016b4b61;
  local_c = ExceptionList;
  pvVar3 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff34);
  ExceptionList = &local_c;
  local_bc = (void *)0x0;
  local_b8 = 0;
  local_b4 = 0;
  local_4 = 0;
  EvaluationEnvironment_ctor();
  local_4 = CONCAT31(local_4._1_3_,1);
  EvaluationEnvironment_copyFrom(local_a0,environment,pvVar3);
  EvaluationEnvironment_setBooleanKey4(0);
  EvaluationEnvironment_setBooleanKey9(1);
  pvVar3 = ReturnValueMap_findValueData(*(void **)((int)this + 0x70),key_);
  if (pvVar3 == (void *)0x0) {
    FUN_012f5a60("targets","..\\common\\common\\command\\CommandObjectMultiAction.cpp",0x69);
  }
  FUN_012fb470(local_c0,local_a0);
  if ((local_bc == (void *)0x0) || (local_b8 - (int)local_bc >> 2 == 0)) {
    local_4 = local_4 & 0xffffff00;
    FUN_01385460();
    local_4 = 0xffffffff;
    if (local_bc != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_bc);
    }
LAB_01503d64:
    bVar2 = false;
  }
  else {
    pvVar3 = ReturnValueMap_findValueData(*(void **)((int)this + 0x70),key__00);
    if (((*(int *)((int)pvVar3 + 4) == 2) && (*(char *)((int)this + 0x124) != '\0')) &&
       (cVar1 = PointerVector_iteratorNotAtEnd(10), cVar1 != '\0')) {
      FUN_012fa910();
      local_4._0_1_ = 2;
      ValueData_clearIfPresent((void *)0xa);
      FUN_01301590(local_a0);
      if (iStack_ac == 2) {
        if (local_bc == (void *)0x0) {
          iVar5 = 0;
        }
        else {
          iVar5 = local_b8 - (int)local_bc >> 2;
        }
        iVar4 = FUN_0123c340();
        if (iVar5 < iVar4) {
          local_4._0_1_ = 1;
          FUN_01300cd0();
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_01385460();
          local_4 = 0xffffffff;
          STLVector_int_clear(local_c0);
          goto LAB_01503d64;
        }
      }
      local_4 = CONCAT31(local_4._1_3_,1);
      FUN_01300cd0();
    }
    local_4 = local_4 & 0xffffff00;
    FUN_01385460();
    local_4 = 0xffffffff;
    if (local_bc != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
      _free(local_bc);
    }
    bVar2 = true;
  }
  ExceptionList = local_c;
  return bVar2;
}

