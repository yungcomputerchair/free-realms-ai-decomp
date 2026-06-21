// addr: 0x00969a10
// name: FUN_00969a10
// subsystem: common/net/uploader
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_00969a10(int *param_1,undefined4 *param_2,int param_3)

{
  int iVar1;
  bool bVar2;
  char cVar3;
  void *this;
  void *this_00;
  void *this_01;
  void *this_02;
  void *this_03;
  void *this_04;
  void *this_05;
  void *this_06;
  int *piVar4;
  undefined4 uVar5;
  int iVar6;
  int *piVar7;
  uint uVar8;
  float10 fVar9;
  float fVar10;
  int iStack_4c;
  float local_48;
  float local_44;
  undefined4 *local_40;
  float fStack_3c;
  float local_34;
  float local_30;
  int *local_c;
  
                    /* Unknown first-party/residual helper with weak evidence: ctx has no __FILE__,
                       RTTI, assert, or distinctive strings sufficient for a safe name. */
  if (*(char *)(param_2 + 5) == '\0') {
    local_40 = (undefined4 *)0x0;
  }
  else {
    local_40 = param_2 + 8;
  }
  local_48 = (float)param_2[3];
  if (local_48 <= 0.0) {
    local_48 = *(float *)(param_3 + 0x2c);
  }
  if (local_48 < *(float *)(param_3 + 0x28)) {
    local_48 = *(float *)(param_3 + 0x28);
  }
  this = (void *)FUN_00769a30();
  this_00 = (void *)FUN_007699f0();
  this_01 = (void *)FUN_00769b30();
  this_02 = (void *)FUN_00769b70();
  this_03 = (void *)FUN_00769bb0();
  this_04 = (void *)FUN_00769bf0();
  this_05 = (void *)FUN_00769a70();
  this_06 = (void *)FUN_00769c30();
  local_c = (int *)FUN_00769c70();
  if ((param_1[0x1ce] == 0) || (bVar2 = true, *(int **)(param_1[0x1ce] + 200) != param_1)) {
    bVar2 = false;
  }
  iVar1 = *(int *)(param_3 + 0x34);
  do {
    if (iVar1 == 0) {
      return;
    }
    local_30 = (float)param_2[2];
    local_44 = 0.0;
    local_34 = 0.0;
    if ((*(char *)(iVar1 + 0x28) != '\0') && (!bVar2)) goto switchD_00969b1b_default;
    switch(*(undefined4 *)(iVar1 + 0x10)) {
    case 0:
      piVar4 = PlayerParticleEmitterEvent_createIfValid(this,(void *)*param_2);
      break;
    case 1:
      piVar4 = PlayerSoundEmitterEvent_createIfValid(this_00,(void *)*param_2);
      break;
    case 2:
      piVar4 = PlayerModelMaterialEvent_tryCreateFromDescriptor
                         (this_01,(void *)*param_2,*(void ***)(iVar1 + 0x14));
      break;
    case 3:
      piVar4 = PlayerLightEmitterEvent_createIfValid(this_02,(void *)*param_2);
      break;
    case 4:
      piVar4 = PlayerCameraEffectEvent_tryCreateFromDescriptor
                         (this_03,(void *)*param_2,*(void ***)(iVar1 + 0x14));
      break;
    case 5:
      if ((param_2[0x2c] != 0) && (param_2[0x2d] != 0)) {
        piVar4 = PlayerProjectileEvent_tryCreateFromDescriptor
                           (this_05,(void *)*param_2,*(void ***)(iVar1 + 0x14));
        break;
      }
      goto switchD_00969b1b_default;
    case 6:
      piVar4 = PlayerMeshEmitterEvent_tryCreateFromDescriptor
                         (this_06,(void *)*param_2,*(void ***)(iVar1 + 0x14));
      break;
    case 7:
      piVar4 = PlayerLightsaberTrailEvent_tryCreateFromDescriptor
                         (local_c,(void *)*param_2,*(void ***)(iVar1 + 0x14));
      break;
    case 8:
      piVar4 = PlayerRumbleEffectEvent_tryCreateFromDescriptor
                         (this_04,(void *)*param_2,*(void ***)(iVar1 + 0x14));
      break;
    default:
      goto switchD_00969b1b_default;
    }
    if (piVar4 != (int *)0x0) {
      if (*(int *)(param_3 + 0x1c) != -1) {
        (**(code **)(**(int **)(param_1[0x1ce] + 0x1ac) + 0x18))(*(int *)(param_3 + 0x1c));
        local_c = *(int **)(param_1[0x1ce] + 0x1ac);
        uVar5 = (**(code **)(*local_c + 0x1c))(fStack_3c);
        iVar6 = FUN_010bd110(iStack_4c,uVar5);
        local_34 = (float)iVar6;
        local_30 = (float)iStack_4c;
      }
      *(undefined1 *)(piVar4 + 0x10) = *(undefined1 *)(param_2 + 0x14);
      if (local_40 != (undefined4 *)0x0) {
        FUN_0095c310(local_40);
      }
      iVar6 = param_2[4];
      fStack_3c = 0.0;
      if ((0 < iVar6) && (0 < *(int *)(iVar1 + 8))) {
        uVar5 = *(undefined4 *)(iVar1 + 4);
        (**(code **)(*param_1 + 0x24))(iVar6,uVar5);
        fVar9 = (float10)FUN_00787e40(iVar6,uVar5);
        fStack_3c = (float)fVar9;
      }
      iStack_4c = 0;
      if (0 < *(int *)(iVar1 + 0x20)) {
        do {
          fVar10 = *(float *)(*(int *)(iVar1 + 0x1c) + iStack_4c * 8) + fStack_3c;
          iVar6 = param_1[0x202];
          uVar8 = 1 << ((byte)*(undefined4 *)(*(int *)(iVar1 + 0x1c) + iStack_4c * 8 + 4) & 0x1f);
          piVar7 = (int *)piVar4[10];
          if (piVar7 == (int *)0x0) {
            cVar3 = (**(code **)(*piVar4 + 0x18))();
            if (cVar3 == '\0') {
              piVar7 = *(int **)(iVar6 + 8);
            }
            else {
              piVar7 = *(int **)(iVar6 + 4);
            }
          }
          (**(code **)(*piVar7 + 8))(fVar10 + local_30,piVar4,uVar8,local_34);
          if ((((uVar8 & 4) != 0) || (cVar3 = (**(code **)(_DAT_00000000 + 0x10))(), cVar3 == '\0'))
             && (local_44 < fVar10)) {
            local_44 = fVar10;
          }
          iStack_4c = iStack_4c + 1;
        } while (iStack_4c < *(int *)(iVar1 + 0x20));
      }
      if ((0.0 < local_48) && ((local_44 <= 0.0 || (local_48 < local_44)))) {
        piVar7 = (int *)piVar4[10];
        fVar10 = (float)param_2[2];
        iVar6 = param_1[0x202];
        if (piVar7 == (int *)0x0) {
          cVar3 = (**(code **)(*piVar4 + 0x18))();
          if (cVar3 == '\0') {
            piVar7 = *(int **)(iVar6 + 8);
          }
          else {
            piVar7 = *(int **)(iVar6 + 4);
          }
        }
        (**(code **)(*piVar7 + 8))(fVar10 + local_48,piVar4,4,0);
      }
      if (0 < iRam00000008) {
        iRam00000008 = iRam00000008 + -1;
      }
    }
switchD_00969b1b_default:
    iVar1 = *(int *)(iVar1 + 0x2c);
  } while( true );
}

