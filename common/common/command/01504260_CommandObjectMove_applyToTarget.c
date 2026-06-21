// addr: 0x01504260
// name: CommandObjectMove_applyToTarget
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectMove.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


undefined4 __fastcall CommandObjectMove_applyToTarget(void *param_1)

{
  int iVar1;
  bool bVar2;
  int iVar3;
  undefined3 extraout_var;
  void *unaff_EDI;
  
                    /* Routes the move onto its target by target-class type (switch on +0x124: cases
                       4/0x31/10/0x32), dispatching via the target vtable. From
                       CommandObjectMove.cpp. Distinct from doCommand. (low confidence;
                       behavior-inferred) */
  bVar2 = ValueData_getWillExpire(unaff_EDI);
  if (bVar2) {
    iVar1 = *(int *)((int)param_1 + 0x128);
    switch(*(undefined4 *)((int)param_1 + 0x124)) {
    case 4:
    case 0x31:
      FUN_012f5a60("false","..\\common\\common\\command\\CommandObjectMove.cpp",0x187);
      return 1;
    default:
      return 1;
    case 10:
      if (*(int *)((int)param_1 + 100) == 0) {
        FUN_012f5a60("mOriginatingCard","..\\common\\common\\command\\CommandObjectMove.cpp",0x18a);
      }
      if (*(int *)((int)param_1 + 0x68) == 0) {
        FUN_012f5a60("mTarget","..\\common\\common\\command\\CommandObjectMove.cpp",0x18b);
      }
      (**(code **)(**(int **)((int)param_1 + 100) + 0x140))(*(undefined4 *)((int)param_1 + 0x68));
      return 1;
    case 0x32:
      goto switchD_015042a7_caseD_32;
    }
  }
  EvaluationEnvironment_tracef
            ((void *)((int)param_1 + 0x84),"Will Expire set to false on environment.",unaff_EDI);
  return 1;
switchD_015042a7_caseD_32:
  if (*(int *)((int)param_1 + 100) == 0) {
    FUN_012f5a60("mOriginatingCard","..\\common\\common\\command\\CommandObjectMove.cpp",0x175);
  }
  if (iVar1 == 0) {
    FUN_012f5a60("destination","..\\common\\common\\command\\CommandObjectMove.cpp",0x176);
  }
  if (*(int *)((int)param_1 + 300) != 0) {
    PlayElement_getGame();
    iVar3 = FUN_0139d7c0();
    if (iVar1 == iVar3) {
      return 1;
    }
  }
  bVar2 = CommandObjectMove_applyAlternateDiscardArea(param_1);
  if (CONCAT31(extraout_var,bVar2) != 0) {
    (**(code **)(**(int **)((int)param_1 + 100) + 0x128))(CONCAT31(extraout_var,bVar2));
    return 1;
  }
  (**(code **)(**(int **)((int)param_1 + 100) + 0x150))();
  return 1;
}

