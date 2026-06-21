// addr: 0x01504810
// name: CommandObjectMove_doCommand
// subsystem: common/common/command
// source (binary assert): common/common/command/CommandObjectMove.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: bool CommandObjectMove_doCommand(void * this) */

bool __fastcall CommandObjectMove_doCommand(void *this)

{
  char *formatText;
  undefined1 *puVar1;
  bool bVar2;
  void *pvVar3;
  int iVar4;
  void *pvVar5;
  undefined3 extraout_var;
  undefined4 *puVar6;
  undefined4 uVar7;
  undefined1 auStack_c0 [4];
  undefined4 *puStack_bc;
  undefined4 *puStack_b8;
  undefined4 uStack_b4;
  undefined4 *puStack_b0;
  undefined1 *puStack_ac;
  void *pvStack_a4;
  undefined1 auStack_a0 [148];
  void *local_c;
  undefined1 *puStack_8;
  int iStack_4;
  
                    /* Executes a move command: validates mOriginatingCard/mTarget, adds discard
                       commands for moved cards as needed, and applies behavior based on the move
                       key ('Move got invalidkey!'). */
  iStack_4 = 0xffffffff;
  puStack_8 = &LAB_016b4c7f;
  local_c = ExceptionList;
  pvVar3 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffff30);
  ExceptionList = &local_c;
  if (*(int *)((int)this + 100) == 0) {
    FUN_012f5a60("mOriginatingCard","..\\common\\common\\command\\CommandObjectMove.cpp",0xaf);
  }
  iVar4 = (**(code **)(**(int **)((int)this + 100) + 0x28))();
  pvVar5 = (void *)FUN_01340340();
  pvVar5 = PlayArea_findPlayerElementById(pvVar5,iVar4);
  if (pvVar5 != (void *)0x0) {
    PlayElement_getGame();
    iVar4 = FUN_0139d7c0();
    if (*(int *)((int)this + 0x68) == iVar4) {
      puStack_bc = (undefined4 *)0x0;
      puStack_b8 = (undefined4 *)0x0;
      uStack_b4 = 0;
      iStack_4 = 0;
      (**(code **)(**(int **)((int)this + 100) + 0x34))(auStack_c0);
      puStack_b0 = puStack_b8;
      if (puStack_b8 < puStack_bc) {
        FUN_00d83c2d();
      }
      puVar6 = puStack_bc;
      if (puStack_b8 < puStack_bc) {
        FUN_00d83c2d();
      }
      puStack_ac = auStack_c0;
      while( true ) {
        puVar1 = puStack_ac;
        if ((puStack_ac == (undefined1 *)0x0) || (puStack_ac != auStack_c0)) {
          FUN_00d83c2d();
        }
        if (puVar6 == puStack_b0) break;
        if (puVar1 == (undefined1 *)0x0) {
          FUN_00d83c2d();
        }
        if (*(undefined4 **)(puVar1 + 8) <= puVar6) {
          FUN_00d83c2d();
        }
        formatText = (char *)*puVar6;
        if ((formatText != (char *)0x0) && (*(char **)((int)this + 100) != formatText)) {
          EvaluationEnvironment_logCardMessage
                    ((void *)((int)this + 0x84),"Adding discard of card: ",formatText,pvVar3);
          EvaluationEnvironment_ctor();
          iStack_4._0_1_ = 1;
          EvaluationEnvironment_copyFrom(auStack_a0,(void *)((int)this + 0x84),pvVar3);
          EvaluationEnvironment_setCurrentTargetFromElement(auStack_a0,formatText,pvVar3);
          pvStack_a4 = Mem_Alloc(0x140);
          iStack_4._0_1_ = 2;
          if (pvStack_a4 == (void *)0x0) {
            pvVar5 = (void *)0x0;
          }
          else {
            pvVar5 = CommandObjectDiscard_ctorDefaultInit(pvStack_a4,auStack_a0,1);
          }
          iStack_4._0_1_ = 1;
          CommandObjectVector_pushBack(pvVar5,pvVar3);
          iStack_4 = (uint)iStack_4._1_3_ << 8;
          FUN_01385460();
        }
        if (*(undefined4 **)(puStack_ac + 8) <= puVar6) {
          FUN_00d83c2d();
        }
        puVar6 = puVar6 + 1;
      }
      iStack_4 = 0xffffffff;
      if (puStack_bc != (undefined4 *)0x0) {
                    /* WARNING: Subroutine does not return */
        _free(puStack_bc);
      }
    }
  }
  puStack_bc = (undefined4 *)0x0;
  puStack_b8 = (undefined4 *)0x0;
  uStack_b4 = 0;
  iStack_4 = 3;
  uVar7 = *(undefined4 *)((int)this + 0x124);
  switch(uVar7) {
  case 0:
    pvVar3 = *(void **)((int)this + 0x30);
    uVar7 = 0;
    goto LAB_01504c4a;
  default:
    pvVar3 = *(void **)((int)this + 0x30);
LAB_01504c4a:
    Game_logGeneral(pvVar3,"Move got invalidkey! %d",uVar7);
    break;
  case 4:
    if (*(int *)((int)this + 100) == 0) {
      FUN_012f5a60("mOriginatingCard","..\\common\\common\\command\\CommandObjectMove.cpp",0x147);
    }
    PlayElement_setLastOwner(*(void **)((int)this + 100));
    bVar2 = CommandObjectMove_applyAlternateDiscardArea(this);
    if (CONCAT31(extraout_var,bVar2) == 0) {
      (**(code **)(**(int **)((int)this + 100) + 0x150))();
    }
    else {
      iVar4 = CommandObjectMove_getAlternateDiscardPosition(this);
      (**(code **)(**(int **)((int)this + 100) + 300))(CONCAT31(extraout_var,bVar2),iVar4);
    }
    break;
  case 10:
    if (*(int *)((int)this + 100) == 0) {
      FUN_012f5a60("mOriginatingCard","..\\common\\common\\command\\CommandObjectMove.cpp",0x159);
    }
    if (*(int *)((int)this + 0x68) == 0) {
      FUN_012f5a60("mTarget","..\\common\\common\\command\\CommandObjectMove.cpp",0x15a);
    }
    iVar4 = FUN_00d8d382(*(undefined4 *)((int)this + 0x68),0,&PlayElement::RTTI_Type_Descriptor,
                         &Card::RTTI_Type_Descriptor,0);
    if (iVar4 != 0) {
      (**(code **)(**(int **)((int)this + 100) + 0x138))(*(undefined4 *)((int)this + 0x68));
    }
    break;
  case 0x31:
    if (*(int *)((int)this + 100) == 0) {
      FUN_012f5a60("mOriginatingCard","..\\common\\common\\command\\CommandObjectMove.cpp",0xde);
    }
    if (*(int *)((int)this + 0x68) == 0) {
      FUN_012f5a60("mTarget","..\\common\\common\\command\\CommandObjectMove.cpp",0xdf);
    }
    iVar4 = (**(code **)(**(int **)((int)this + 100) + 0x28))();
    pvVar3 = PlayArea_findPlayerElementById(*(void **)((int)this + 0x30),iVar4);
    if (pvVar3 != (void *)0x0) {
      PlayElement_getGame();
      iVar4 = FUN_0139d7c0();
      if (*(int *)((int)this + 0x68) == iVar4) {
        GamePlayer_getPlayerId();
        pvVar3 = Game_getCurrentTurn(*(void **)((int)this + 0x30));
        PlayElement_recordMoveForCurrentKey(pvVar3);
      }
    }
    (**(code **)(**(int **)((int)this + 100) + 300))
              (*(undefined4 *)((int)this + 0x68),*(undefined4 *)((int)this + 0x130));
    break;
  case 0x32:
    if (*(int *)((int)this + 100) == 0) {
      FUN_012f5a60("mOriginatingCard","..\\common\\common\\command\\CommandObjectMove.cpp",0xf7);
    }
    if (*(int *)((int)this + 0x68) == 0) {
      FUN_012f5a60("mTarget","..\\common\\common\\command\\CommandObjectMove.cpp",0xf8);
    }
    iVar4 = (**(code **)(**(int **)((int)this + 100) + 0x28))();
    pvVar3 = PlayArea_findPlayerElementById(*(void **)((int)this + 0x30),iVar4);
    if (pvVar3 != (void *)0x0) {
      PlayElement_getGame();
      iVar4 = FUN_0139d7c0();
      if (*(int *)((int)this + 0x68) == iVar4) {
        GamePlayer_getPlayerId();
        pvVar3 = Game_getCurrentTurn(*(void **)((int)this + 0x30));
        PlayElement_recordMoveForCurrentKey(pvVar3);
      }
    }
    (**(code **)(**(int **)((int)this + 100) + 300))
              (*(undefined4 *)((int)this + 0x68),*(undefined4 *)((int)this + 0x130));
  }
  ExceptionList = local_c;
  return true;
}

