// addr: 0x00c56ea0
// name: FUN_00c56ea0
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


void __thiscall
FUN_00c56ea0(int *param_1,undefined4 *param_2,int param_3,int param_4,float param_5,float param_6,
            int param_7,int *param_8,int param_9,undefined1 param_10)

{
  char cVar1;
  int iVar2;
  undefined4 *puVar3;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  undefined4 uVar9;
  float10 fVar10;
  float fVar11;
  int iStack_3c;
  float fStack_38;
  float fStack_34;
  float fStack_2c;
  float fStack_28;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  if ((char)param_8 != '\0') {
LAB_00c56ee3:
    iVar2 = param_4;
    if (param_3 == 0) {
      iVar6 = *(int *)(param_1[0x522] + 4);
      piVar4 = (int *)(iVar6 + 0x9c);
      *piVar4 = *piVar4 + 1;
      param_8 = (int *)*(undefined4 *)(iVar6 + 0x9c);
      puVar3 = &param_8;
    }
    else {
      puVar3 = &param_3;
    }
    uVar9 = *puVar3;
    if (param_6 <= 0.0) {
      param_6 = *(float *)(param_4 + 0x2c);
    }
    if (param_6 < *(float *)(param_4 + 0x28)) {
      param_6 = *(float *)(param_4 + 0x28);
    }
    param_3 = uVar9;
    FUN_00769a30();
    FUN_007699f0();
    FUN_00769b30();
    FUN_00769b70();
    FUN_00769bb0();
    FUN_00769bf0();
    FUN_00769a70();
    FUN_00769c30();
    iVar2 = *(int *)(iVar2 + 0x34);
    fStack_28 = param_5;
    do {
      if (iVar2 == 0) {
        *param_2 = uVar9;
        return;
      }
      fStack_38 = 0.0;
      fStack_2c = 0.0;
      param_8 = (int *)0x0;
      param_5 = fStack_28;
      switch(*(undefined4 *)(iVar2 + 0x10)) {
      case 0:
        piVar4 = (int *)PlayerParticleEmitterEvent_createIfResourceValid
                                  (uVar9,*(undefined4 *)(iVar2 + 0x14),param_1[0x398],param_1[0x399]
                                   ,&param_8);
        break;
      case 1:
        piVar4 = (int *)PlayerSoundEmitterEvent_createIfResourceValid
                                  (uVar9,*(undefined4 *)(iVar2 + 0x14),param_1[0x398],param_1[0x399]
                                   ,&param_8);
        break;
      case 2:
        piVar4 = (int *)PlayerModelMaterialEvent_createFromReadable
                                  (uVar9,*(undefined4 *)(iVar2 + 0x14),param_1[0x398],param_1[0x399]
                                   ,&param_8);
        break;
      case 3:
        piVar4 = (int *)PlayerLightEmitterEvent_createIfResourceValid
                                  (uVar9,*(undefined4 *)(iVar2 + 0x14),param_1[0x398],param_1[0x399]
                                   ,&param_8);
        break;
      case 4:
        piVar4 = (int *)PlayerCameraEffectEvent_createFromReadable
                                  (uVar9,*(undefined4 *)(iVar2 + 0x14),param_1[0x398],param_1[0x399]
                                   ,&param_8);
        break;
      case 5:
        FUN_0095e1d0(*(undefined4 *)(iVar2 + 0x14));
        goto switchD_00c56fc3_caseD_7;
      case 6:
        piVar4 = (int *)PlayerMeshEmitterEvent_createFromReadable
                                  (uVar9,*(undefined4 *)(iVar2 + 0x14),param_1[0x398],param_1[0x399]
                                   ,&param_8);
        break;
      default:
        goto switchD_00c56fc3_caseD_7;
      case 8:
        piVar4 = (int *)PlayerRumbleEffectEvent_createFromReadable
                                  (uVar9,*(undefined4 *)(iVar2 + 0x14),param_1[0x398],param_1[0x399]
                                   ,&param_8);
      }
      if (piVar4 != (int *)0x0) {
        if (*(int *)(param_4 + 0x1c) != -1) {
          (**(code **)(**(int **)(param_1[0x521] + 0x1ac) + 0x18))(*(int *)(param_4 + 0x1c));
          uVar5 = (**(code **)(**(int **)(param_1[0x521] + 0x1ac) + 0x1c))(fStack_34);
          iVar6 = FUN_010bd110(iStack_3c,uVar5);
          fStack_2c = (float)iVar6;
          fStack_28 = (float)iStack_3c;
        }
        *(undefined1 *)(piVar4 + 0x10) = param_10;
        if (param_9 != 0) {
          FUN_0095c310(param_9);
        }
        fStack_34 = 0.0;
        if ((0 < param_7) && (0 < *(int *)(iVar2 + 8))) {
          uVar5 = *(undefined4 *)(iVar2 + 4);
          iVar6 = param_7;
          (**(code **)(*param_1 + 0x24))(param_7,uVar5);
          fVar10 = (float10)FUN_00787e40(iVar6,uVar5);
          fStack_34 = (float)fVar10;
        }
        iStack_3c = 0;
        if (0 < *(int *)(iVar2 + 0x20)) {
          do {
            fVar11 = *(float *)(*(int *)(iVar2 + 0x1c) + iStack_3c * 8) + fStack_34;
            iVar6 = param_1[0x522];
            uVar8 = 1 << ((byte)*(undefined4 *)(*(int *)(iVar2 + 0x1c) + iStack_3c * 8 + 4) & 0x1f);
            piVar7 = (int *)piVar4[10];
            if (piVar7 == (int *)0x0) {
              cVar1 = (**(code **)(*piVar4 + 0x18))();
              if (cVar1 == '\0') {
                piVar7 = *(int **)(iVar6 + 8);
              }
              else {
                piVar7 = *(int **)(iVar6 + 4);
              }
            }
            (**(code **)(*piVar7 + 8))(fVar11 + fStack_28,piVar4,uVar8,fStack_2c);
            if ((((uVar8 & 4) != 0) || (cVar1 = (**(code **)(*param_8 + 0x10))(), cVar1 == '\0')) &&
               (fStack_38 < fVar11)) {
              fStack_38 = fVar11;
            }
            iStack_3c = iStack_3c + 1;
            uVar9 = param_3;
          } while (iStack_3c < *(int *)(iVar2 + 0x20));
        }
        if ((0.0 < param_6) && ((fStack_38 <= 0.0 || (param_6 < fStack_38)))) {
          piVar7 = (int *)piVar4[10];
          param_8 = (int *)param_1[0x522];
          if (piVar7 == (int *)0x0) {
            cVar1 = (**(code **)(*piVar4 + 0x18))();
            if (cVar1 == '\0') {
              piVar7 = *(int **)((int)param_8 + 8);
            }
            else {
              piVar7 = *(int **)((int)param_8 + 4);
            }
          }
          (**(code **)(*piVar7 + 8))(param_5 + param_6,piVar4,4,0);
        }
      }
switchD_00c56fc3_caseD_7:
      iVar2 = *(int *)(iVar2 + 0x2c);
      fStack_28 = param_5;
    } while( true );
  }
  iVar2 = (**(code **)(*param_1 + 0x24))();
  if (iVar2 != 0) {
    (**(code **)(*param_1 + 0x24))();
    cVar1 = FUN_0076c590();
    if (cVar1 != '\0') goto LAB_00c56ee3;
  }
  *param_2 = 0;
  return;
}

