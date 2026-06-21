// addr: 0x0080a840
// name: FUN_0080a840
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __thiscall FUN_0080a840(int param_1,int param_2,float param_3,float param_4,float param_5)

{
  void *this;
  char cVar1;
  int iVar2;
  float fVar3;
  
                    /* Updates an interpolated vector/curve controller using a new sample and blend
                       parameters, copying samples and recomputing curve state. */
  this = (void *)(param_1 + 0xa0);
  *(undefined1 *)(param_1 + 0x1c4) = 1;
  cVar1 = SkyDefinition_AnimatedTransform_differs(param_2,this);
  if ((((cVar1 != '\0') && (*(int *)(param_2 + 0x10) != 0)) &&
      (*(char *)(*(int *)(param_2 + 0x10) + 0x18) != '\0')) &&
     ((*(int *)(param_2 + 0x50) != 0 && (*(char *)(*(int *)(param_2 + 0x50) + 0x18) != '\0')))) {
    if ((((*(int *)(param_1 + 0xb0) != 0) &&
         ((*(char *)(*(int *)(param_1 + 0xb0) + 0x18) != '\0' && (*(int *)(param_1 + 0xf0) != 0))))
        && (*(char *)(*(int *)(param_1 + 0xf0) + 0x18) != '\0')) &&
       (iVar2 = AnimationBinding_arePairSlotsReady(this), (char)iVar2 != '\0')) {
      FUN_00808e30(param_1 + 0x130,param_2);
      goto LAB_0080a8f1;
    }
    cVar1 = SkyDefinition_AnimatedTransform_differs(param_2,param_1 + 0x10);
    if (cVar1 != '\0') {
      FUN_00808e30(this);
      FUN_00806660(param_1 + 0x130);
      goto LAB_0080a8f1;
    }
  }
  FUN_00805d00(param_2);
LAB_0080a8f1:
  if (*(float *)(param_1 + 0x1c0) == _DAT_0175b420) {
    *(undefined4 *)(param_1 + 0x1c0) = 0;
    FUN_00808e30(param_1 + 0x10,this);
    FUN_00806660(this);
    if ((((*(int *)(param_1 + 0x140) != 0) && (*(char *)(*(int *)(param_1 + 0x140) + 0x18) != '\0'))
        && (*(int *)(param_1 + 0x180) != 0)) &&
       (*(char *)(*(int *)(param_1 + 0x180) + 0x18) != '\0')) {
      if (((*(int *)(param_1 + 0x140) == 0) ||
          ((iVar2 = *(int *)(*(int *)(param_1 + 0x140) + 0x14), iVar2 != 0 &&
           (*(char *)(iVar2 + 0x1c) != '\0')))) &&
         ((*(int *)(param_1 + 0x180) == 0 ||
          ((iVar2 = *(int *)(*(int *)(param_1 + 0x180) + 0x14), iVar2 != 0 &&
           (*(char *)(iVar2 + 0x1c) != '\0')))))) {
        FUN_00808e30(this,param_1 + 0x130);
        FUN_00806660(param_1 + 0x130);
      }
      else {
        *(undefined1 *)(param_1 + 0x1c4) = 0;
      }
    }
  }
  if ((((*(int *)(param_1 + 0xb0) != 0) && (*(char *)(*(int *)(param_1 + 0xb0) + 0x18) != '\0')) &&
      (*(int *)(param_1 + 0xf0) != 0)) && (*(char *)(*(int *)(param_1 + 0xf0) + 0x18) != '\0')) {
    if (((*(int *)(param_1 + 0xb0) == 0) ||
        ((iVar2 = *(int *)(*(int *)(param_1 + 0xb0) + 0x14), iVar2 != 0 &&
         (*(char *)(iVar2 + 0x1c) != '\0')))) &&
       ((*(int *)(param_1 + 0xf0) == 0 ||
        ((iVar2 = *(int *)(*(int *)(param_1 + 0xf0) + 0x14), iVar2 != 0 &&
         (*(char *)(iVar2 + 0x1c) != '\0')))))) {
      fVar3 = DAT_01b33efc;
      if (param_5 != DAT_01762a30) {
        fVar3 = param_4 * param_5;
      }
      param_3 = param_3 - *(float *)(param_1 + 0x1c0);
      if (fVar3 <= param_3) {
        param_3 = fVar3;
      }
      param_3 = *(float *)(param_1 + 0x1c0) + param_3;
      if (_DAT_0175b420 <= param_3) {
        param_3 = _DAT_0175b420;
      }
      *(float *)(param_1 + 0x1c0) = param_3;
      return;
    }
    *(undefined1 *)(param_1 + 0x1c4) = 0;
  }
  return;
}

