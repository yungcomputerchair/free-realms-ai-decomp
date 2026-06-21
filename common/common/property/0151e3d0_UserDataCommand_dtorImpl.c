// addr: 0x0151e3d0
// name: UserDataCommand_dtorImpl
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void UserDataCommand_dtorImpl(void * this) */

void __fastcall UserDataCommand_dtorImpl(void *this)

{
  undefined4 *puVar1;
  rsize_t _DstSize;
  int iVar2;
  void *_Src;
  void *_Dst;
  undefined4 *puVar3;
  undefined1 *puVar4;
  uint uVar5;
  int iVar6;
  int *piVar7;
  int *piVar8;
  undefined4 *puVar9;
  int *local_34;
  void *local_30;
  undefined1 *local_2c;
  int *local_28;
  int local_24;
  undefined1 local_1c [4];
  int *local_18;
  int *local_14;
  undefined4 local_10;
  void *local_c;
  undefined1 *puStack_8;
  int local_4;
  
                    /* Destroys UserDataCommand data, deleting owned nested objects and freeing
                       several vectors/strings. */
  puStack_8 = &LAB_016b842a;
  local_c = ExceptionList;
  uVar5 = DAT_01b839d8 ^ (uint)&stack0xffffffbc;
  ExceptionList = &local_c;
  *(undefined ***)this = UserDataCommand_RespondPlayerMatches::vftable;
  local_18 = (int *)0x0;
  local_14 = (int *)0x0;
  local_10 = 0;
  local_4 = 0x10;
  local_34 = (int *)((int)this + 0xdc);
  local_30 = this;
  FUN_0151e190(&local_34);
  local_34 = (int *)((int)this + 0xec);
  FUN_0151e190(&local_34);
  local_28 = local_18;
  if (local_14 < local_18) {
    FUN_00d83c2d(uVar5);
  }
  local_2c = local_1c;
  while( true ) {
    piVar8 = local_28;
    puVar4 = local_2c;
    local_34 = local_14;
    if (local_14 < local_18) {
      FUN_00d83c2d(uVar5);
    }
    if ((puVar4 == (undefined1 *)0x0) || (puVar4 != local_1c)) {
      FUN_00d83c2d();
    }
    if (piVar8 == local_34) break;
    if (puVar4 == (undefined1 *)0x0) {
      FUN_00d83c2d();
    }
    if (*(int **)(puVar4 + 8) <= piVar8) {
      FUN_00d83c2d();
    }
    iVar2 = *piVar8;
    local_34 = *(int **)(iVar2 + 4);
    piVar7 = local_34;
    if (*(int **)(iVar2 + 8) < local_34) {
      FUN_00d83c2d();
      piVar7 = local_34;
    }
    while( true ) {
      local_24 = iVar2;
      if (*(int **)(local_2c + 8) <= piVar8) {
        FUN_00d83c2d();
      }
      iVar2 = *piVar8;
      local_34 = *(int **)(iVar2 + 8);
      if (local_34 < *(int **)(iVar2 + 4)) {
        FUN_00d83c2d();
      }
      if ((local_24 == 0) || (local_24 != iVar2)) {
        FUN_00d83c2d();
      }
      piVar8 = local_28;
      if (piVar7 == local_34) break;
      if (local_24 == 0) {
        FUN_00d83c2d();
      }
      if (*(int **)(local_24 + 8) <= piVar7) {
        FUN_00d83c2d();
      }
      if ((undefined4 *)*piVar7 != (undefined4 *)0x0) {
        (*(code *)**(undefined4 **)*piVar7)(1);
      }
      if (*(int **)(local_24 + 8) <= piVar7) {
        FUN_00d83c2d();
      }
      piVar7 = piVar7 + 1;
      piVar8 = local_28;
      iVar2 = local_24;
    }
    if (*(int **)(local_2c + 8) <= local_28) {
      FUN_00d83c2d();
    }
    iVar2 = *piVar8;
    _Src = *(void **)(iVar2 + 8);
    if (_Src < *(void **)(iVar2 + 4)) {
      FUN_00d83c2d();
    }
    _Dst = *(void **)(iVar2 + 4);
    if (*(void **)(iVar2 + 8) < _Dst) {
      FUN_00d83c2d();
    }
    if (_Dst != _Src) {
      iVar6 = *(int *)(iVar2 + 8) - (int)_Src >> 2;
      _DstSize = iVar6 * 4;
      local_34 = (int *)(_DstSize + (int)_Dst);
      if (0 < iVar6) {
        _memmove_s(_Dst,_DstSize,_Src,_DstSize);
      }
      *(int **)(iVar2 + 8) = local_34;
    }
    if (*(int **)(local_2c + 8) <= local_28) {
      FUN_00d83c2d();
    }
    local_28 = local_28 + 1;
  }
  local_4 = CONCAT31(local_4._1_3_,0xf);
  if (local_18 != (int *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(local_18);
  }
  local_18 = (int *)0x0;
  local_14 = (int *)0x0;
  local_10 = 0;
  local_4 = CONCAT31(local_4._1_3_,0xe);
  if (*(void **)((int)this + 0xf0) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xf0));
  }
  *(undefined4 *)((int)this + 0xf0) = 0;
  *(undefined4 *)((int)this + 0xf4) = 0;
  *(undefined4 *)((int)this + 0xf8) = 0;
  local_4 = CONCAT31(local_4._1_3_,0xd);
  if (*(void **)((int)this + 0xe0) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xe0));
  }
  *(undefined4 *)((int)this + 0xe0) = 0;
  *(undefined4 *)((int)this + 0xe4) = 0;
  *(undefined4 *)((int)this + 0xe8) = 0;
  local_4 = CONCAT31(local_4._1_3_,0xc);
  if (*(void **)((int)this + 0xd0) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xd0));
  }
  *(undefined4 *)((int)this + 0xd0) = 0;
  *(undefined4 *)((int)this + 0xd4) = 0;
  *(undefined4 *)((int)this + 0xd8) = 0;
  local_4 = CONCAT31(local_4._1_3_,0xb);
  if (*(void **)((int)this + 0xc0) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xc0));
  }
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  local_4 = CONCAT31(local_4._1_3_,10);
  puVar9 = *(undefined4 **)((int)this + 0xb0);
  if (puVar9 != (undefined4 *)0x0) {
    puVar3 = *(undefined4 **)((int)this + 0xb4);
    if (puVar9 != puVar3) {
      puVar9 = puVar9 + 1;
      do {
        if ((void *)*puVar9 != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
          _free((void *)*puVar9);
        }
        *puVar9 = 0;
        puVar9[1] = 0;
        puVar9[2] = 0;
        puVar1 = puVar9 + 3;
        puVar9 = puVar9 + 4;
      } while (puVar1 != puVar3);
    }
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xb0));
  }
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  local_4 = CONCAT31(local_4._1_3_,9);
  if (*(void **)((int)this + 0xa0) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0xa0));
  }
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  local_4 = CONCAT31(local_4._1_3_,8);
  if (*(void **)((int)this + 0x90) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x90));
  }
  *(undefined4 *)((int)this + 0x90) = 0;
  *(undefined4 *)((int)this + 0x94) = 0;
  *(undefined4 *)((int)this + 0x98) = 0;
  local_4 = CONCAT31(local_4._1_3_,7);
  if (*(void **)((int)this + 0x80) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x80));
  }
  *(undefined4 *)((int)this + 0x80) = 0;
  *(undefined4 *)((int)this + 0x84) = 0;
  *(undefined4 *)((int)this + 0x88) = 0;
  local_4 = CONCAT31(local_4._1_3_,6);
  if (*(void **)((int)this + 0x70) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x70));
  }
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  local_4 = CONCAT31(local_4._1_3_,5);
  if (*(void **)((int)this + 0x60) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x60));
  }
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  local_4 = CONCAT31(local_4._1_3_,4);
  if (*(void **)((int)this + 0x50) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x50));
  }
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  local_4 = CONCAT31(local_4._1_3_,3);
  if (*(void **)((int)this + 0x40) != (void *)0x0) {
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x40));
  }
  *(undefined4 *)((int)this + 0x40) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  local_4 = CONCAT31(local_4._1_3_,2);
  if (*(void **)((int)this + 0x30) != (void *)0x0) {
    StdStringRange_destroy(*(void **)((int)this + 0x30),*(void **)((int)this + 0x34));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x30));
  }
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined4 *)((int)this + 0x38) = 0;
  local_4 = CONCAT31(local_4._1_3_,1);
  if (*(void **)((int)this + 0x20) == (void *)0x0) {
    *(undefined4 *)((int)this + 0x20) = 0;
    *(undefined4 *)((int)this + 0x24) = 0;
    *(undefined4 *)((int)this + 0x28) = 0;
    local_4 = (uint)local_4._1_3_ << 8;
    if (*(void **)((int)this + 0x10) == (void *)0x0) {
      *(undefined4 *)((int)this + 0x10) = 0;
      *(undefined4 *)((int)this + 0x14) = 0;
      *(undefined4 *)((int)this + 0x18) = 0;
      local_4 = 0xffffffff;
      UserDataCommand_dtor(this);
      ExceptionList = local_c;
      return;
    }
    StdStringRange_destroy(*(void **)((int)this + 0x10),*(void **)((int)this + 0x14));
                    /* WARNING: Subroutine does not return */
    _free(*(void **)((int)this + 0x10));
  }
  StdStringRange_destroy(*(void **)((int)this + 0x20),*(void **)((int)this + 0x24));
                    /* WARNING: Subroutine does not return */
  _free(*(void **)((int)this + 0x20));
}

