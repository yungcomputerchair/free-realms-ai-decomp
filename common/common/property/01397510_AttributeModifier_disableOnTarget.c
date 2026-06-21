// addr: 0x01397510
// name: AttributeModifier_disableOnTarget
// subsystem: common/common/property
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Restarted to delay deadcode elimination for space: stack */
/* Setting prototype: void AttributeModifier_disableOnTarget(void * modifier, void * game) */

void __thiscall AttributeModifier_disableOnTarget(void *this,void *modifier,void *game)

{
  undefined4 *puVar1;
  int *piVar2;
  rsize_t _DstSize;
  bool bVar3;
  char cVar4;
  int iVar5;
  int extraout_EAX;
  int *piVar6;
  void *action;
  int iVar7;
  undefined4 uVar8;
  void *pvVar9;
  int unaff_EBX;
  undefined4 *puVar10;
  undefined4 unaff_EBP;
  undefined4 *puVar11;
  int unaff_retaddr;
  int *local_e0;
  int *piStack_dc;
  int *local_d4;
  int *piStack_d0;
  undefined4 local_cc;
  undefined4 *local_c8;
  int *local_c4;
  undefined4 *puStack_c0;
  undefined1 auStack_a8 [148];
  void *pvStack_14;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Finds the modifier target, evaluates environment state, logs Disabling
                       Modifier, and removes the attribute modifier from the target. */
  puStack_8 = &LAB_01684916;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  local_cc = 0;
  local_c8 = (undefined4 *)0x0;
  local_c4 = (int *)0x0;
  local_4 = 0;
  local_d4 = this;
  (**(code **)(*(int *)this + 0x214))(modifier,&local_e0,DAT_01b839d8 ^ (uint)&stack0xffffff0c);
  puVar1 = *(undefined4 **)(unaff_EBX + 4);
  if (*(undefined4 **)(unaff_EBX + 8) < puVar1) {
    FUN_00d83c2d();
  }
  puVar10 = *(undefined4 **)(unaff_EBX + 8);
  if (puVar10 < *(undefined4 **)(unaff_EBX + 4)) {
    FUN_00d83c2d();
  }
  do {
    if (unaff_EBX == 0) {
      FUN_00d83c2d();
    }
    if (puVar10 == puVar1) {
      local_c4 = piStack_d0;
      if (piStack_d0 < local_d4) {
        FUN_00d83c2d();
      }
      piVar2 = local_d4;
      if (piStack_d0 < local_d4) {
        FUN_00d83c2d();
      }
      local_e0 = piVar2;
      do {
        piVar2 = local_e0;
        if (&stack0x00000000 == (undefined1 *)0xd8) {
          FUN_00d83c2d();
        }
        if (piVar2 == local_c4) {
          if ((char)((uint)unaff_EBP >> 0x18) != '\0') {
            *(undefined1 *)((int)this + 0x9c) = 1;
            EvaluationEnvironment_ctor();
            local_c._0_1_ = 1;
            EvaluationEnvironment_setGame(*(int *)((int)this + 0x30));
            iVar5 = (**(code **)(*(int *)this + 0x28))();
            pvVar9 = PlayArea_findPlayerElementById(*(void **)((int)this + 0x30),iVar5);
            FUN_013815b0(pvVar9);
            set_play_element_id_field(auStack_a8,this);
            (**(code **)(*(int *)this + 0x15c))(local_4,auStack_a8);
            *(undefined1 *)((int)this + 0x9c) = 0;
            local_c = (void *)((uint)local_c._1_3_ << 8);
            FUN_01385460();
          }
          local_c = (void *)0xffffffff;
          if (local_d4 == (int *)0x0) {
            ExceptionList = pvStack_14;
            return;
          }
                    /* WARNING: Subroutine does not return */
          _free(local_d4);
        }
        if (&stack0x00000000 == (undefined1 *)0xd8) {
          FUN_00d83c2d();
        }
        if (piStack_d0 <= piVar2) {
          FUN_00d83c2d();
        }
        piVar2 = *(int **)(unaff_EBX + 8);
        if (piVar2 < *(int **)(unaff_EBX + 4)) {
          FUN_00d83c2d();
        }
        piVar6 = *(int **)(unaff_EBX + 4);
        if (*(int **)(unaff_EBX + 8) < piVar6) {
          FUN_00d83c2d();
        }
        if (piVar6 != piVar2) {
          do {
            if (*piVar6 == *local_e0) break;
            piVar6 = piVar6 + 1;
          } while (piVar6 != piVar2);
        }
        piVar2 = *(int **)(unaff_EBX + 8);
        if (piVar2 < *(int **)(unaff_EBX + 4)) {
          FUN_00d83c2d();
        }
        if (unaff_EBX == 0) {
          FUN_00d83c2d();
        }
        if (piVar6 != piVar2) {
          iVar5 = *(int *)(unaff_EBX + 8) - (int)(piVar6 + 1) >> 2;
          if (0 < iVar5) {
            _DstSize = iVar5 * 4;
            _memmove_s(piVar6,_DstSize,piVar6 + 1,_DstSize);
          }
          *(int *)(unaff_EBX + 8) = *(int *)(unaff_EBX + 8) + -4;
        }
        if (piStack_d0 <= local_e0) {
          FUN_00d83c2d();
        }
        if ((undefined4 *)*local_e0 != (undefined4 *)0x0) {
          (*(code *)**(undefined4 **)*local_e0)(1);
        }
        if (piStack_d0 <= local_e0) {
          FUN_00d83c2d();
        }
        local_e0 = local_e0 + 1;
        this = piStack_dc;
      } while( true );
    }
    puStack_c0 = puVar10;
    if (unaff_EBX == 0) {
      FUN_00d83c2d();
    }
    if (puVar10 <= *(undefined4 **)(unaff_EBX + 4)) {
      FUN_00d83c2d();
    }
    puVar11 = puVar10 + -1;
    local_c8 = puVar11;
    if (*(undefined4 **)(unaff_EBX + 8) <= puVar11) {
      FUN_00d83c2d();
    }
    piVar2 = (int *)*puVar11;
    local_c4 = piVar2;
    iVar5 = FUN_01418e00();
    if ((iVar5 == unaff_retaddr) && (bVar3 = get_flag_68(piVar2), bVar3)) {
      AttributeModifier_removeFromTarget(piVar2);
      if ((extraout_EAX != 0) && ((char)modifier == '\x01')) {
        piVar6 = (int *)FUN_01340340();
        iVar5 = *piVar6;
        AttributeModifier_removeFromTarget(piVar2);
        iVar7 = Action_getDurationWithDefault(action);
        cVar4 = (**(code **)(iVar5 + 100))(iVar7);
        puVar11 = local_c8;
        if (cVar4 != '\0') goto LAB_01397697;
      }
      uVar8 = PlayElement_getId();
      Game_logGeneral((void *)piStack_dc[0xc],"Disabling Modifier %d",uVar8);
      AttributeModifier_resetState();
      FUN_013365c0(&local_c4);
      unaff_EBP = 0x1000000;
    }
LAB_01397697:
    bVar3 = puVar10 <= *(undefined4 **)(unaff_EBX + 4);
    puVar10 = puVar11;
    this = piStack_dc;
    if (bVar3) {
      FUN_00d83c2d();
      this = piStack_dc;
    }
  } while( true );
}

