// addr: 0x01378020
// name: Game_dtor
// subsystem: common/common/game
// source (binary assert): common/common/game/Game.cpp
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void Game_dtor(void * this) */

void __fastcall Game_dtor(void *this)

{
  rsize_t rVar1;
  int *piVar2;
  void *pvVar3;
  void *pvVar4;
  undefined4 *puVar5;
  undefined4 *this_00;
  int iVar6;
  void *pvVar7;
  int iVar8;
  undefined4 *puVar9;
  int *piVar10;
  int *piVar11;
  undefined1 auStack_20 [4];
  int *piStack_1c;
  void *local_14;
  undefined1 *puStack_10;
  undefined4 local_c;
  
                    /* Destroys a Game by deleting current turns, players, observers, archived
                       turns, play elements, display actions, and assorted containers. It installs
                       the Game vtable and logs each destructor phase. */
  puStack_10 = &LAB_016817f0;
  local_14 = ExceptionList;
  pvVar7 = (void *)(DAT_01b839d8 ^ (uint)&stack0xffffffb8);
  ExceptionList = &local_14;
  *(undefined ***)this = CTP::Game::vftable;
  *(undefined ***)((int)this + 0x10) = CTP::Game::vftable;
  local_c = 0x2d;
  Game_logGeneral(this,"KILLING GAME VIA DESTRUCTOR",pvVar7);
  FUN_0135a400(this,1);
  if (((*(char *)((int)this + 0x14d) == '\0') || (*(char *)((int)this + 0x318) != '\0')) &&
     (DAT_01cbdbb4 == this)) {
    DAT_01cbdbb4 = (void *)0x0;
  }
  if (*(undefined4 **)((int)this + 0x32c) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x32c))(1);
    *(undefined4 *)((int)this + 0x32c) = 0;
  }
  Game_logGeneral(this,"Deleting CurrentTurn.",pvVar7);
  if (*(undefined4 **)((int)this + 0x68) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x68))(1);
    *(undefined4 *)((int)this + 0x68) = 0;
  }
  Game_logGeneral(this,"Deleting Players",pvVar7);
  piVar2 = *(int **)((int)this + 0x2c);
  if (piVar2 < *(int **)((int)this + 0x28)) {
    FUN_00d83c2d();
  }
  piVar11 = *(int **)((int)this + 0x28);
  if (*(int **)((int)this + 0x2c) < piVar11) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (this == (void *)0xffffffdc) {
      FUN_00d83c2d();
    }
    if (piVar11 == piVar2) break;
    if (this == (void *)0xffffffdc) {
      FUN_00d83c2d();
    }
    if (*(int **)((int)this + 0x2c) <= piVar11) {
      FUN_00d83c2d();
    }
    if ((undefined4 *)*piVar11 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar11)(1);
    }
    if (*(int **)((int)this + 0x2c) <= piVar11) {
      FUN_00d83c2d();
    }
    piVar11 = piVar11 + 1;
  }
  pvVar3 = *(void **)((int)this + 0x2c);
  if (pvVar3 < *(void **)((int)this + 0x28)) {
    FUN_00d83c2d();
  }
  pvVar4 = *(void **)((int)this + 0x28);
  if (*(void **)((int)this + 0x2c) < pvVar4) {
    FUN_00d83c2d();
  }
  if (pvVar4 != pvVar3) {
    iVar8 = *(int *)((int)this + 0x2c) - (int)pvVar3 >> 2;
    rVar1 = iVar8 * 4;
    if (0 < iVar8) {
      _memmove_s(pvVar4,rVar1,pvVar3,rVar1);
    }
    *(void **)((int)this + 0x2c) = (void *)(rVar1 + (int)pvVar4);
  }
  Game_logGeneral(this,"deleting Observers",pvVar7);
  piVar2 = *(int **)((int)this + 0x4c);
  if (piVar2 < *(int **)((int)this + 0x48)) {
    FUN_00d83c2d();
  }
  piVar11 = *(int **)((int)this + 0x48);
  if (*(int **)((int)this + 0x4c) < piVar11) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (this == (void *)0xffffffbc) {
      FUN_00d83c2d();
    }
    if (piVar11 == piVar2) break;
    if (this == (void *)0xffffffbc) {
      FUN_00d83c2d();
    }
    if (*(int **)((int)this + 0x4c) <= piVar11) {
      FUN_00d83c2d();
    }
    if (*piVar11 == 0) {
      FUN_012f5a60("*playerIter","..\\common\\common\\game\\Game.cpp",0xdd);
    }
    if (*(int **)((int)this + 0x4c) <= piVar11) {
      FUN_00d83c2d();
    }
    Game_logGeneral(this,"Deleting observer %p",*piVar11);
    if (*(int **)((int)this + 0x4c) <= piVar11) {
      FUN_00d83c2d();
    }
    if ((undefined4 *)*piVar11 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar11)(1);
    }
    if (*(int **)((int)this + 0x4c) <= piVar11) {
      FUN_00d83c2d();
    }
    piVar11 = piVar11 + 1;
  }
  pvVar3 = *(void **)((int)this + 0x4c);
  if (pvVar3 < *(void **)((int)this + 0x48)) {
    FUN_00d83c2d();
  }
  pvVar4 = *(void **)((int)this + 0x48);
  if (*(void **)((int)this + 0x4c) < pvVar4) {
    FUN_00d83c2d();
  }
  if (pvVar4 != pvVar3) {
    iVar8 = *(int *)((int)this + 0x4c) - (int)pvVar3 >> 2;
    rVar1 = iVar8 * 4;
    if (0 < iVar8) {
      _memmove_s(pvVar4,rVar1,pvVar3,rVar1);
    }
    *(void **)((int)this + 0x4c) = (void *)(rVar1 + (int)pvVar4);
  }
  Game_logGeneral(this,"deleting Archived Turns",pvVar7);
  piVar2 = *(int **)((int)this + 0x74);
  if (piVar2 < *(int **)((int)this + 0x70)) {
    FUN_00d83c2d();
  }
  piVar11 = *(int **)((int)this + 0x70);
  if (*(int **)((int)this + 0x74) < piVar11) {
    FUN_00d83c2d();
  }
  while( true ) {
    if (this == (void *)0xffffff94) {
      FUN_00d83c2d();
    }
    if (piVar11 == piVar2) break;
    if (this == (void *)0xffffff94) {
      FUN_00d83c2d();
    }
    if (*(int **)((int)this + 0x74) <= piVar11) {
      FUN_00d83c2d();
    }
    if ((undefined4 *)*piVar11 != (undefined4 *)0x0) {
      (*(code *)**(undefined4 **)*piVar11)(1);
    }
    if (*(int **)((int)this + 0x74) <= piVar11) {
      FUN_00d83c2d();
    }
    piVar11 = piVar11 + 1;
  }
  pvVar3 = *(void **)((int)this + 0x74);
  if (pvVar3 < *(void **)((int)this + 0x70)) {
    FUN_00d83c2d();
  }
  pvVar4 = *(void **)((int)this + 0x70);
  if (*(void **)((int)this + 0x74) < pvVar4) {
    FUN_00d83c2d();
  }
  if (pvVar4 != pvVar3) {
    iVar8 = *(int *)((int)this + 0x74) - (int)pvVar3 >> 2;
    rVar1 = iVar8 * 4;
    if (0 < iVar8) {
      _memmove_s(pvVar4,rVar1,pvVar3,rVar1);
    }
    *(void **)((int)this + 0x74) = (void *)(rVar1 + (int)pvVar4);
  }
  Game_logGeneral(this,"Deleting Play Elements",pvVar7);
  *(undefined1 *)((int)this + 0x1fc) = 1;
  puVar5 = *(undefined4 **)((int)this + 0x84);
  puVar9 = (undefined4 *)*puVar5;
  while( true ) {
    if (this == (void *)0xffffff80) {
      FUN_00d83c2d();
    }
    if (puVar9 == puVar5) break;
    if (this == (void *)0xffffff80) {
      FUN_00d83c2d();
    }
    if (puVar9 == *(undefined4 **)((int)this + 0x84)) {
      FUN_00d83c2d();
    }
    this_00 = (undefined4 *)puVar9[3];
    if (this_00 != (undefined4 *)0x0) {
      PlayElement_setField18(this_00,0);
      (**(code **)*this_00)(1);
    }
    if (puVar9 == *(undefined4 **)((int)this + 0x84)) {
      FUN_00d83c2d();
    }
    puVar9 = (undefined4 *)*puVar9;
  }
  Game_clearPlayElements((int)this + 0x7c);
  *(undefined1 *)((int)this + 0x1fc) = 0;
  Game_logGeneral(this,"Deleting DisplayActions",pvVar7);
  puVar5 = *(undefined4 **)((int)this + 0xdc);
  puVar9 = (undefined4 *)*puVar5;
  while( true ) {
    if (this == (void *)0xffffff28) {
      FUN_00d83c2d();
    }
    if (puVar9 == puVar5) break;
    if (this == (void *)0xffffff28) {
      FUN_00d83c2d();
    }
    if (puVar9 == *(undefined4 **)((int)this + 0xdc)) {
      FUN_00d83c2d();
    }
    pvVar3 = (void *)puVar9[2];
    if (pvVar3 != (void *)0x0) {
      StdVector_destroyPolymorphicTriples(pvVar3);
                    /* WARNING: Subroutine does not return */
      _free(pvVar3);
    }
    if (puVar9 == *(undefined4 **)((int)this + 0xdc)) {
      FUN_00d83c2d();
    }
    puVar9 = (undefined4 *)*puVar9;
  }
  puVar5 = *(undefined4 **)((int)this + 0xdc);
  pvVar3 = (void *)*puVar5;
  *puVar5 = puVar5;
  *(int *)(*(int *)((int)this + 0xdc) + 4) = *(int *)((int)this + 0xdc);
  *(undefined4 *)((int)this + 0xe0) = 0;
  if (pvVar3 != *(void **)((int)this + 0xdc)) {
                    /* WARNING: Subroutine does not return */
    _free(pvVar3);
  }
  pvVar3 = *(void **)((int)this + 0x134);
  if (pvVar3 == (void *)0x0) {
    pvVar3 = *(void **)((int)this + 0x138);
    if (pvVar3 != (void *)0x0) {
      MersenneTwister_dtor(pvVar7);
                    /* WARNING: Subroutine does not return */
      _free(pvVar3);
    }
    piStack_1c = *(int **)((int)this + 0x144);
    piVar2 = (int *)*piStack_1c;
    while( true ) {
      if (this == (void *)0xfffffec0) {
        FUN_00d83c2d();
      }
      if (piVar2 == piStack_1c) break;
      if (this == (void *)0xfffffec0) {
        FUN_00d83c2d();
      }
      if (piVar2 == (int *)*(int *)((int)this + 0x144)) {
        FUN_00d83c2d();
      }
      piVar11 = (int *)piVar2[6];
      if (piVar11 < (int *)piVar2[5]) {
        FUN_00d83c2d();
      }
      if (piVar2 == (int *)*(int *)((int)this + 0x144)) {
        FUN_00d83c2d();
      }
      piVar10 = (int *)piVar2[5];
      if ((int *)piVar2[6] < piVar10) {
        FUN_00d83c2d();
      }
      while( true ) {
        if (piVar2 == (int *)0xfffffff0) {
          FUN_00d83c2d();
        }
        if (piVar10 == piVar11) break;
        if (piVar2 == (int *)0xfffffff0) {
          FUN_00d83c2d();
        }
        if ((int *)piVar2[6] <= piVar10) {
          FUN_00d83c2d();
        }
        if ((undefined4 *)*piVar10 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*piVar10)(1);
        }
        if ((int *)piVar2[6] <= piVar10) {
          FUN_00d83c2d();
        }
        piVar10 = piVar10 + 1;
      }
      FUN_0134f1a0();
    }
    Game_ArchivedTurnTree_destroyNodes(*(void **)(*(int *)((int)this + 0x144) + 4));
    *(int *)(*(int *)((int)this + 0x144) + 4) = *(int *)((int)this + 0x144);
    *(undefined4 *)((int)this + 0x148) = 0;
    *(undefined4 *)*(undefined4 *)((int)this + 0x144) = *(undefined4 *)((int)this + 0x144);
    *(int *)(*(int *)((int)this + 0x144) + 8) = *(int *)((int)this + 0x144);
    piVar2 = *(int **)((int)this + 0x358);
    if (piVar2 < *(int **)((int)this + 0x354)) {
      FUN_00d83c2d();
    }
    piVar11 = *(int **)((int)this + 0x354);
    if (*(int **)((int)this + 0x358) < piVar11) {
      FUN_00d83c2d();
    }
    while( true ) {
      if (this == (void *)0xfffffcb0) {
        FUN_00d83c2d();
      }
      if (piVar11 == piVar2) break;
      if (this == (void *)0xfffffcb0) {
        FUN_00d83c2d();
      }
      if (*(int **)((int)this + 0x358) <= piVar11) {
        FUN_00d83c2d();
      }
      if ((undefined4 *)*piVar11 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar11)(1);
      }
      if (*(int **)((int)this + 0x358) <= piVar11) {
        FUN_00d83c2d();
      }
      piVar11 = piVar11 + 1;
    }
    pvVar7 = *(void **)((int)this + 0x358);
    if (pvVar7 < *(void **)((int)this + 0x354)) {
      FUN_00d83c2d();
    }
    pvVar3 = *(void **)((int)this + 0x354);
    if (*(void **)((int)this + 0x358) < pvVar3) {
      FUN_00d83c2d();
    }
    if (pvVar3 != pvVar7) {
      iVar8 = *(int *)((int)this + 0x358) - (int)pvVar7 >> 2;
      rVar1 = iVar8 * 4;
      if (0 < iVar8) {
        _memmove_s(pvVar3,rVar1,pvVar7,rVar1);
      }
      *(void **)((int)this + 0x358) = (void *)(rVar1 + (int)pvVar3);
    }
    iVar6 = **(int **)((int)this + 0x394);
    iVar8 = (int)this + 0x390;
    while( true ) {
      piStack_1c = *(int **)((int)this + 0x394);
      if (iVar8 == 0) {
        FUN_00d83c2d();
      }
      if ((int *)iVar6 == piStack_1c) {
        pvVar7 = *(void **)(*(int *)((int)this + 0x394) + 4);
        if (*(char *)((int)pvVar7 + 0x15) != '\0') {
          *(int *)(*(int *)((int)this + 0x394) + 4) = *(int *)((int)this + 0x394);
          *(undefined4 *)((int)this + 0x398) = 0;
          *(undefined4 *)*(undefined4 *)((int)this + 0x394) = *(undefined4 *)((int)this + 0x394);
          *(int *)(*(int *)((int)this + 0x394) + 8) = *(int *)((int)this + 0x394);
          if (*(undefined4 **)((int)this + 0x38c) != (undefined4 *)0x0) {
            (**(code **)**(undefined4 **)((int)this + 0x38c))(1);
            *(undefined4 *)((int)this + 0x38c) = 0;
          }
          local_c = CONCAT31((int3)((uint)local_c >> 8),0x2c);
          FUN_01358e90(auStack_20,iVar8,**(undefined4 **)((int)this + 0x394),iVar8,
                       *(undefined4 **)((int)this + 0x394));
                    /* WARNING: Subroutine does not return */
          _free(*(void **)((int)this + 0x394));
        }
        RbTreeNode21_freeRightSpine(*(void **)((int)pvVar7 + 8));
                    /* WARNING: Subroutine does not return */
        _free(pvVar7);
      }
      if (iVar8 == 0) {
        FUN_00d83c2d();
      }
      if (iVar6 == *(int *)((int)this + 0x394)) {
        FUN_00d83c2d();
      }
      pvVar7 = *(void **)(iVar6 + 0x10);
      if (pvVar7 != (void *)0x0) break;
      FUN_0134a670();
    }
    if (*(void **)((int)pvVar7 + 4) == (void *)0x0) {
      *(undefined4 *)((int)pvVar7 + 4) = 0;
      *(undefined4 *)((int)pvVar7 + 8) = 0;
      *(undefined4 *)((int)pvVar7 + 0xc) = 0;
                    /* WARNING: Subroutine does not return */
      _free(pvVar7);
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)pvVar7 + 4));
  }
  MersenneTwister_dtor(pvVar7);
                    /* WARNING: Subroutine does not return */
  _free(pvVar3);
}

