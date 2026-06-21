// addr: 0x015159e0
// name: PlayerPlayArea_getValidTargetsForZonePlayerPlayArea
// subsystem: common/rules/game
// source (binary assert): common/rules/game/cwplayerplayarea.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


bool __thiscall
PlayerPlayArea_getValidTargetsForZonePlayerPlayArea
          (int *param_1,undefined4 param_2,void *param_3,void *param_4,undefined4 param_5,
          void *param_6)

{
  bool bVar1;
  int *piVar2;
  int unaff_retaddr;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Evaluates valid targets for a player play area, logging "Entering
                       ZPPlayerPlayArea" and using PlayerPlayArea_getValidTargetsForArea when no
                       override is found. Evidence: cwplayerplayarea.cpp valueData assert and trace
                       string. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_016b7318;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  EvaluationEnvironment_countTracef
            (param_6,"Entering ZPPlayerPlayArea",DAT_01b839d8 ^ (uint)&stack0xffffffd4);
  local_4 = 0;
  if (param_4 == (void *)0x0) {
    FUN_012f5a60("valueData","..\\common\\rules\\game\\cwplayerplayarea.cpp",0x49);
  }
  piVar2 = (int *)(**(code **)(*param_1 + 0x48))(param_2,param_6);
  if (piVar2 == (int *)0x0) {
    bVar1 = PlayerPlayArea_getValidTargetsForArea
                      (param_1,local_4,unaff_retaddr,param_4,param_3,param_6);
  }
  else {
    (**(code **)(*piVar2 + 0x44))(unaff_retaddr,param_4,param_3);
    if ((*(int *)((int)param_3 + 4) == 0) ||
       (*(int *)((int)param_3 + 8) - *(int *)((int)param_3 + 4) >> 2 == 0)) {
      bVar1 = false;
    }
    else {
      bVar1 = true;
    }
  }
  ExceptionList = (void *)0x0;
  return bVar1;
}

