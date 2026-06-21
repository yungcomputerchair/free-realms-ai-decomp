// addr: 0x014035c0
// name: CWPlayerController_evaluatePendingControlAction
// subsystem: common/rules/controller
// source (binary assert): common/rules/controller/cwplayercontroller.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CWPlayerController_evaluatePendingControlAction(void * this, int
   actionKind_) */

bool __thiscall CWPlayerController_evaluatePendingControlAction(void *this,int actionKind_)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  uint uVar4;
  int *piVar5;
  char *pcVar6;
  void *pvVar7;
  void *pvVar8;
  int iVar9;
  int iVar10;
  void *local_18c;
  int local_188;
  int local_180;
  int local_17c;
  undefined1 auStack_178 [148];
  undefined1 auStack_e4 [8];
  undefined1 local_dc [8];
  undefined1 local_d4 [8];
  undefined1 local_cc [8];
  undefined1 auStack_c4 [8];
  undefined1 local_bc [8];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_b4 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_98 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_7c [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_60 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_44 [28];
  basic_string<char,std::char_traits<char>,std::allocator<char>_> abStack_28 [28];
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Evaluates one of the queued player-controller action checks by looking up
                       integer arguments in an intValueMap, resolving ValueData forms to entity ids,
                       and optionally emitting display actions on success. Evidence is
                       cwplayercontroller.cpp assertions for finder != intValueMap->end() and
                       callers that pass action codes from controller hooks. */
  puStack_8 = &LAB_0169110e;
  local_c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xfffffe64;
  ExceptionList = &local_c;
  iVar10 = 0;
  local_4 = 0;
  iVar9 = *(int *)((int)this + 0x2c);
  if (((iVar9 != 0) && (actionKind_ != iVar9)) &&
     (((iVar9 != 4 && (iVar9 != 5)) || (actionKind_ != 7)))) goto LAB_01403802;
  switch(iVar9) {
  case 2:
    pvVar8 = (void *)FUN_012fa780(uVar4);
    local_18c = (void *)0x1;
    piVar5 = (int *)FUN_013144f0(local_cc,&local_18c);
    local_180 = *piVar5;
    local_188 = *(int *)((int)pvVar8 + 4);
    local_17c = piVar5[1];
    local_18c = pvVar8;
    cVar3 = FUN_012b0680(&local_18c);
    if (cVar3 == '\0') {
      FUN_012f5a60("finder != intValueMap->end()",
                   "..\\common\\rules\\controller\\cwplayercontroller.cpp",0xc6);
    }
    iVar9 = 0;
    iVar10 = FUN_012b1980();
    if (*(int *)(*(int *)(iVar10 + 4) + 4) == 2) {
      FUN_012b1980();
      iVar9 = FUN_0123c340();
    }
    else {
      iVar10 = FUN_012b1980();
      if (*(int *)(*(int *)(iVar10 + 4) + 4) == 3) {
        FUN_012b1980();
        pcVar6 = (char *)FUN_01240e20();
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_28,pcVar6);
        local_4._0_1_ = 1;
        iVar9 = Game_findNamedEntryValue(*(void **)((int)this + 8),abStack_28);
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_0041f1d7();
      }
      else {
        iVar10 = FUN_012b1980();
        if (*(int *)(*(int *)(iVar10 + 4) + 4) == 5) {
          FUN_012fa910();
          local_4._0_1_ = 2;
          iVar9 = FUN_012b1980();
          FUN_013010e0(*(undefined4 *)(iVar9 + 4));
          EvaluationEnvironment_ctor();
          local_4._0_1_ = 3;
          EvaluationEnvironment_setGame(*(undefined4 *)((int)this + 8));
          pvVar8 = PlayArea_findPlayerElementById(*(void **)((int)this + 8),*(int *)((int)this + 4))
          ;
          FUN_013815b0(pvVar8);
          FUN_01301590(auStack_178);
          FUN_01300d70(0);
          iVar9 = FUN_0123c340();
          local_4._0_1_ = 2;
          FUN_01385460();
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_01300cd0();
        }
      }
    }
    local_18c = (void *)0x1;
    break;
  case 3:
  case 4:
  case 5:
  case 8:
    iVar9 = FUN_012fa780(uVar4);
    local_18c = (void *)0x1;
    piVar5 = (int *)FUN_013144f0(local_d4,&local_18c);
    iVar10 = *piVar5;
    iVar1 = piVar5[1];
    local_188 = *(int *)(iVar9 + 4);
    local_180 = iVar10;
    local_17c = iVar1;
    if ((iVar10 == 0) || (iVar10 != iVar9)) {
      FUN_00d83c2d();
    }
    if (iVar1 == local_188) {
      FUN_012f5a60("finder != intValueMap->end()",
                   "..\\common\\rules\\controller\\cwplayercontroller.cpp",0xe5);
    }
    iVar9 = 0;
    if (iVar10 == 0) {
      FUN_00d83c2d();
    }
    if (iVar1 == *(int *)(iVar10 + 4)) {
      FUN_00d83c2d();
    }
    if (*(int *)(*(int *)(iVar1 + 0x10) + 4) == 2) {
      FUN_012b1980();
      iVar9 = FUN_0123c340();
      local_18c = (void *)0x1;
    }
    else {
      iVar10 = FUN_012b1980();
      if (*(int *)(*(int *)(iVar10 + 4) + 4) == 3) {
        FUN_012b1980();
        pcVar6 = (char *)FUN_01240e20();
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_b4,pcVar6);
        local_4._0_1_ = 4;
        iVar9 = Game_findNamedEntryValue(*(void **)((int)this + 8),abStack_b4);
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_0041f1d7();
        local_18c = (void *)0x1;
      }
      else {
        iVar10 = FUN_012b1980();
        if (*(int *)(*(int *)(iVar10 + 4) + 4) == 5) {
          FUN_012fa910();
          local_4._0_1_ = 5;
          iVar9 = FUN_012b1980();
          FUN_013010e0(*(undefined4 *)(iVar9 + 4));
          EvaluationEnvironment_ctor();
          local_4._0_1_ = 6;
          EvaluationEnvironment_setGame(*(undefined4 *)((int)this + 8));
          pvVar8 = PlayArea_findPlayerElementById(*(void **)((int)this + 8),*(int *)((int)this + 4))
          ;
          FUN_013815b0(pvVar8);
          FUN_01301590(auStack_178);
          FUN_01300d70(0);
          iVar9 = FUN_0123c340();
          local_4._0_1_ = 5;
          FUN_01385460();
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_01300cd0();
        }
        local_18c = (void *)0x1;
      }
    }
    break;
  case 6:
    pvVar8 = (void *)FUN_012fa780(uVar4);
    local_18c = (void *)0x1;
    piVar5 = (int *)FUN_013144f0(local_dc,&local_18c);
    local_180 = *piVar5;
    local_17c = piVar5[1];
    local_188 = *(int *)((int)pvVar8 + 4);
    local_18c = pvVar8;
    cVar3 = FUN_012b0680(&local_18c);
    if (cVar3 == '\0') {
      FUN_012f5a60("finder != intValueMap->end()",
                   "..\\common\\rules\\controller\\cwplayercontroller.cpp",0x133);
    }
    iVar9 = FUN_012b1980();
    if (*(int *)(*(int *)(iVar9 + 4) + 4) == 2) {
      FUN_012b1980();
      iVar10 = FUN_0123c340();
    }
    else {
      iVar9 = FUN_012b1980();
      if (*(int *)(*(int *)(iVar9 + 4) + 4) == 3) {
        FUN_012b1980();
        pcVar6 = (char *)FUN_01240e20();
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_98,pcVar6);
        local_4._0_1_ = 0xd;
        iVar10 = Game_findNamedEntryValue(*(void **)((int)this + 8),abStack_98);
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_0041f1d7();
      }
      else {
        iVar9 = FUN_012b1980();
        if (*(int *)(*(int *)(iVar9 + 4) + 4) == 5) {
          FUN_012fa910();
          local_4._0_1_ = 0xe;
          iVar9 = FUN_012b1980();
          FUN_013010e0(*(undefined4 *)(iVar9 + 4));
          EvaluationEnvironment_ctor();
          local_4._0_1_ = 0xf;
          EvaluationEnvironment_setGame(*(undefined4 *)((int)this + 8));
          pvVar7 = PlayArea_findPlayerElementById(*(void **)((int)this + 8),*(int *)((int)this + 4))
          ;
          FUN_013815b0(pvVar7);
          FUN_01301590(auStack_178);
          FUN_01300d70(0);
          iVar10 = FUN_0123c340();
          local_4._0_1_ = 0xe;
          FUN_01385460();
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_01300cd0();
        }
      }
    }
    local_18c = (void *)0x1;
    pvVar7 = (void *)FUN_01315ad0(&local_18c);
    bVar2 = ValueData_containsInt(pvVar7,iVar10);
    if (!bVar2) goto LAB_01403802;
    local_18c = (void *)0x2;
    piVar5 = (int *)FUN_013144f0(auStack_e4,&local_18c);
    local_180 = *piVar5;
    local_188 = *(int *)((int)pvVar8 + 4);
    local_17c = piVar5[1];
    local_18c = pvVar8;
    cVar3 = FUN_012b0680(&local_18c);
    if (cVar3 == '\0') {
      FUN_012f5a60("finder != intValueMap->end()",
                   "..\\common\\rules\\controller\\cwplayercontroller.cpp",0x147);
    }
    iVar9 = 0;
    iVar10 = FUN_012b1980();
    if (*(int *)(*(int *)(iVar10 + 4) + 4) == 2) {
      FUN_012b1980();
      iVar9 = FUN_0123c340();
      local_18c = (void *)0x2;
    }
    else {
      iVar10 = FUN_012b1980();
      if (*(int *)(*(int *)(iVar10 + 4) + 4) == 3) {
        FUN_012b1980();
        pcVar6 = (char *)FUN_01240e20();
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_60,pcVar6);
        local_4._0_1_ = 0x10;
        iVar9 = Game_findNamedEntryValue(*(void **)((int)this + 8),abStack_60);
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_0041f1d7();
        local_18c = (void *)0x2;
      }
      else {
        iVar10 = FUN_012b1980();
        if (*(int *)(*(int *)(iVar10 + 4) + 4) == 5) {
          FUN_012fa910();
          local_4._0_1_ = 0x11;
          iVar9 = FUN_012b1980();
          FUN_013010e0(*(undefined4 *)(iVar9 + 4));
          EvaluationEnvironment_ctor();
          local_4._0_1_ = 0x12;
          EvaluationEnvironment_setGame(*(undefined4 *)((int)this + 8));
          pvVar8 = PlayArea_findPlayerElementById(*(void **)((int)this + 8),*(int *)((int)this + 4))
          ;
          FUN_013815b0(pvVar8);
          FUN_01301590(auStack_178);
          FUN_01300d70(0);
          iVar9 = FUN_0123c340();
          local_4._0_1_ = 0x11;
          FUN_01385460();
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_01300cd0();
        }
        local_18c = (void *)0x2;
      }
    }
    break;
  case 7:
    pvVar8 = (void *)FUN_012fa780(uVar4);
    local_18c = (void *)0x1;
    piVar5 = (int *)FUN_013144f0(local_bc,&local_18c);
    local_180 = *piVar5;
    local_188 = *(int *)((int)pvVar8 + 4);
    local_17c = piVar5[1];
    local_18c = pvVar8;
    cVar3 = FUN_012b0680(&local_18c);
    if (cVar3 == '\0') {
      FUN_012f5a60("finder != intValueMap->end()",
                   "..\\common\\rules\\controller\\cwplayercontroller.cpp",0x101);
    }
    iVar9 = FUN_012b1980();
    if (*(int *)(*(int *)(iVar9 + 4) + 4) == 2) {
      FUN_012b1980();
      iVar10 = FUN_0123c340();
    }
    else {
      iVar9 = FUN_012b1980();
      if (*(int *)(*(int *)(iVar9 + 4) + 4) == 3) {
        FUN_012b1980();
        pcVar6 = (char *)FUN_01240e20();
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_7c,pcVar6);
        local_4._0_1_ = 7;
        iVar10 = Game_findNamedEntryValue(*(void **)((int)this + 8),abStack_7c);
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_0041f1d7();
      }
      else {
        iVar9 = FUN_012b1980();
        if (*(int *)(*(int *)(iVar9 + 4) + 4) == 5) {
          FUN_012fa910();
          local_4._0_1_ = 8;
          iVar9 = FUN_012b1980();
          FUN_013010e0(*(undefined4 *)(iVar9 + 4));
          EvaluationEnvironment_ctor();
          local_4._0_1_ = 9;
          EvaluationEnvironment_setGame(*(undefined4 *)((int)this + 8));
          pvVar7 = PlayArea_findPlayerElementById(*(void **)((int)this + 8),*(int *)((int)this + 4))
          ;
          FUN_013815b0(pvVar7);
          FUN_01301590(auStack_178);
          FUN_01300d70(0);
          iVar10 = FUN_0123c340();
          local_4._0_1_ = 8;
          FUN_01385460();
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_01300cd0();
        }
      }
    }
    local_18c = (void *)0x1;
    pvVar7 = (void *)FUN_01315ad0(&local_18c);
    bVar2 = ValueData_containsInt(pvVar7,iVar10);
    if (!bVar2) goto LAB_01403802;
    local_18c = (void *)0x2;
    piVar5 = (int *)FUN_013144f0(auStack_c4,&local_18c);
    local_180 = *piVar5;
    local_17c = piVar5[1];
    local_188 = *(int *)((int)pvVar8 + 4);
    local_18c = pvVar8;
    cVar3 = FUN_012b0680(&local_18c);
    if (cVar3 == '\0') {
      FUN_012f5a60("finder != intValueMap->end()",
                   "..\\common\\rules\\controller\\cwplayercontroller.cpp",0x115);
    }
    iVar10 = 0;
    iVar9 = FUN_012b1980();
    if (*(int *)(*(int *)(iVar9 + 4) + 4) == 2) {
      FUN_012b1980();
      iVar10 = FUN_0123c340();
    }
    else {
      iVar9 = FUN_012b1980();
      if (*(int *)(*(int *)(iVar9 + 4) + 4) == 3) {
        FUN_012b1980();
        pcVar6 = (char *)FUN_01240e20();
        std::basic_string<char,std::char_traits<char>,std::allocator<char>_>::
        basic_string<char,std::char_traits<char>,std::allocator<char>_>(abStack_44,pcVar6);
        local_4._0_1_ = 10;
        iVar10 = Game_findNamedEntryValue(*(void **)((int)this + 8),abStack_44);
        local_4 = (uint)local_4._1_3_ << 8;
        FUN_0041f1d7();
      }
      else {
        iVar9 = FUN_012b1980();
        if (*(int *)(*(int *)(iVar9 + 4) + 4) == 5) {
          FUN_012fa910();
          local_4._0_1_ = 0xb;
          iVar9 = FUN_012b1980();
          FUN_013010e0(*(undefined4 *)(iVar9 + 4));
          EvaluationEnvironment_ctor();
          local_4._0_1_ = 0xc;
          EvaluationEnvironment_setGame(*(undefined4 *)((int)this + 8));
          pvVar8 = PlayArea_findPlayerElementById(*(void **)((int)this + 8),*(int *)((int)this + 4))
          ;
          FUN_013815b0(pvVar8);
          FUN_01301590(auStack_178);
          FUN_01300d70(0);
          iVar10 = FUN_0123c340();
          local_4._0_1_ = 0xb;
          FUN_01385460();
          local_4 = (uint)local_4._1_3_ << 8;
          FUN_01300cd0();
        }
      }
    }
    local_18c = (void *)0x2;
    pvVar8 = (void *)FUN_01315ad0(&local_18c);
    bVar2 = ValueData_containsInt(pvVar8,iVar10);
    if (!bVar2) {
      local_18c = (void *)0x2;
      iVar9 = 0;
      break;
    }
  default:
    goto switchD_0140362d_default;
  }
  pvVar8 = (void *)FUN_01315ad0(&local_18c);
  bVar2 = ValueData_containsInt(pvVar8,iVar9);
  if (bVar2) {
switchD_0140362d_default:
    if ((*(int *)((int)this + 0x2c) != 8) && (*(int *)((int)this + 0x2c) != 0)) {
      local_18c = Mem_Alloc(0x14);
      local_4._0_1_ = 0x13;
      if (local_18c == (void *)0x0) {
        pvVar8 = (void *)0x0;
      }
      else {
        pvVar8 = (void *)FUN_012f9eb0();
      }
      local_4 = (uint)local_4._1_3_ << 8;
      FUN_012f8c70(0x87);
      iVar9 = StateMachine_getCurrentState();
      DisplayActionBuilder_addIntArg(pvVar8,iVar9);
      (**(code **)(**(int **)((int)this + 8) + 0x154))(pvVar8);
      pvVar8 = Mem_Alloc(0x14);
      puStack_8._0_1_ = 0x14;
      if (pvVar8 == (void *)0x0) {
        pvVar8 = (void *)0x0;
      }
      else {
        pvVar8 = (void *)FUN_012f9eb0();
      }
      puStack_8 = (undefined1 *)((uint)puStack_8._1_3_ << 8);
      FUN_012f8c70(0xa9);
      iVar9 = StateMachine_getCurrentState();
      DisplayActionBuilder_addIntArg(pvVar8,iVar9);
      (**(code **)(**(int **)((int)this + 8) + 0x154))(pvVar8);
    }
    local_4 = 0xffffffff;
    FUN_01315dd0();
    bVar2 = true;
  }
  else {
LAB_01403802:
    local_4 = 0xffffffff;
    FUN_01315dd0();
    bVar2 = false;
  }
  ExceptionList = local_c;
  return bVar2;
}

