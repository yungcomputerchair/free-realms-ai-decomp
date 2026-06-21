// addr: 0x0080ab00
// name: FUN_0080ab00
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0080ab00(int param_1,int param_2,float param_3,float param_4,float param_5)

{
  void *this;
  char cVar1;
  int iVar2;
  float fVar3;
  
                    /* Updates an interpolated transform/curve controller using a new sample and
                       blend parameters, copying multiple vector tracks and recomputing curve state.
                        */
  this = (void *)(param_1 + 0x80);
  *(undefined1 *)(param_1 + 0x164) = 1;
  cVar1 = SkyDefinition_TintedTexture_differs(param_2,this);
  if ((((cVar1 == '\0') || (*(int *)(param_2 + 0x10) == 0)) ||
      (*(char *)(*(int *)(param_2 + 0x10) + 0x18) == '\0')) ||
     ((*(int *)(param_2 + 0x40) == 0 || (*(char *)(*(int *)(param_2 + 0x40) + 0x18) == '\0')))) {
    FUN_00804950(param_2);
    FUN_00804950(param_2 + 0x30);
    *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_2 + 0x60);
  }
  else if (((*(int *)(param_1 + 0x90) == 0) || (*(char *)(*(int *)(param_1 + 0x90) + 0x18) == '\0'))
          || ((*(int *)(param_1 + 0xc0) == 0 ||
              ((*(char *)(*(int *)(param_1 + 0xc0) + 0x18) == '\0' ||
               (iVar2 = AnimationBinding_areAlternateSlotsReady(this), (char)iVar2 == '\0')))))) {
    cVar1 = SkyDefinition_TintedTexture_differs(param_2,param_1 + 0x10);
    if (cVar1 == '\0') {
      FUN_00805340(param_2);
    }
    else {
      FUN_00808e90(this);
      FUN_00806720(param_1 + 0xf0);
    }
  }
  else {
    FUN_00808e90(param_1 + 0xf0,param_2);
  }
  if (*(float *)(param_1 + 0x160) == _DAT_0175b420) {
    *(undefined4 *)(param_1 + 0x160) = 0;
    FUN_00804950(this);
    FUN_00804950(param_1 + 0xb0);
    *(undefined4 *)(param_1 + 0x70) = *(undefined4 *)(param_1 + 0xe0);
    FUN_00806720(this);
    if ((((*(int *)(param_1 + 0x100) != 0) && (*(char *)(*(int *)(param_1 + 0x100) + 0x18) != '\0'))
        && (*(int *)(param_1 + 0x130) != 0)) &&
       (*(char *)(*(int *)(param_1 + 0x130) + 0x18) != '\0')) {
      if (((*(int *)(param_1 + 0x100) == 0) ||
          ((iVar2 = *(int *)(*(int *)(param_1 + 0x100) + 0x14), iVar2 != 0 &&
           (*(char *)(iVar2 + 0x1c) != '\0')))) &&
         ((*(int *)(param_1 + 0x130) == 0 ||
          ((iVar2 = *(int *)(*(int *)(param_1 + 0x130) + 0x14), iVar2 != 0 &&
           (*(char *)(iVar2 + 0x1c) != '\0')))))) {
        FUN_00804950(param_1 + 0xf0);
        FUN_00804950(param_1 + 0x120);
        *(undefined4 *)(param_1 + 0xe0) = *(undefined4 *)(param_1 + 0x150);
        FUN_00806720(param_1 + 0xf0);
      }
      else {
        *(undefined1 *)(param_1 + 0x164) = 0;
      }
    }
  }
  if ((((*(int *)(param_1 + 0x90) != 0) && (*(char *)(*(int *)(param_1 + 0x90) + 0x18) != '\0')) &&
      (*(int *)(param_1 + 0xc0) != 0)) && (*(char *)(*(int *)(param_1 + 0xc0) + 0x18) != '\0')) {
    if (((*(int *)(param_1 + 0x90) == 0) ||
        ((iVar2 = *(int *)(*(int *)(param_1 + 0x90) + 0x14), iVar2 != 0 &&
         (*(char *)(iVar2 + 0x1c) != '\0')))) &&
       ((*(int *)(param_1 + 0xc0) == 0 ||
        ((iVar2 = *(int *)(*(int *)(param_1 + 0xc0) + 0x14), iVar2 != 0 &&
         (*(char *)(iVar2 + 0x1c) != '\0')))))) {
      fVar3 = DAT_01b33efc;
      if (param_5 != DAT_01762a30) {
        fVar3 = param_4 * param_5;
      }
      param_3 = param_3 - *(float *)(param_1 + 0x160);
      if (fVar3 <= param_3) {
        param_3 = fVar3;
      }
      param_3 = *(float *)(param_1 + 0x160) + param_3;
      if (_DAT_0175b420 <= param_3) {
        param_3 = _DAT_0175b420;
      }
      *(float *)(param_1 + 0x160) = param_3;
      return;
    }
    *(undefined1 *)(param_1 + 0x164) = 0;
  }
  return;
}

