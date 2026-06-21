// addr: 0x00808450
// name: Sky_LinearBlendControllerTransform5_setTarget
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void Sky_LinearBlendControllerTransform5_setTarget(void * this, void * target,
   float targetBlend_, float duration_, float scale_) */

void __thiscall
Sky_LinearBlendControllerTransform5_setTarget
          (void *this,void *target,float targetBlend_,float duration_,float scale_)

{
  int *piVar1;
  undefined1 auVar2 [16];
  undefined4 in_EAX;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  
                    /* Updates a five-component sky linear blend target, including an extra scalar
                       at +0x30, and manages transition state/refcounted keys. */
  *(undefined1 *)((int)this + 0xd4) = 1;
  iVar4 = *(int *)((int)target + 0x10);
  if ((((iVar4 == *(int *)((int)this + 0x60)) &&
       (auVar2._4_4_ = -(uint)(*(float *)((int)target + 0x24) == *(float *)((int)this + 0x74)),
       auVar2._0_4_ = -(uint)(*(float *)((int)target + 0x20) == *(float *)((int)this + 0x70)),
       auVar2._8_4_ = -(uint)(*(float *)((int)target + 0x28) == *(float *)((int)this + 0x78)),
       auVar2._12_4_ = -(uint)(*(float *)((int)target + 0x2c) == *(float *)((int)this + 0x7c)),
       iVar3 = movmskps(in_EAX,auVar2), iVar3 == 0xf)) &&
      (*(float *)((int)target + 0x30) == *(float *)((int)this + 0x80))) ||
     ((iVar4 == 0 || (*(char *)(iVar4 + 0x18) == '\0')))) {
    FUN_00804950(target);
    *(undefined4 *)((int)this + 0x80) = *(undefined4 *)((int)target + 0x30);
  }
  else {
    iVar4 = *(int *)((int)this + 0x60);
    if (((iVar4 == 0) || (*(char *)(iVar4 + 0x18) == '\0')) ||
       ((iVar4 != 0 &&
        ((*(int *)(iVar4 + 0x14) == 0 || (*(char *)(*(int *)(iVar4 + 0x14) + 0x1c) == '\0')))))) {
      iVar4 = AnimationKey_differsTransform5(target,(void *)((int)this + 0x10));
      if ((char)iVar4 == '\0') {
        FUN_00804950(target);
        *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)target + 0x30);
      }
      else {
        FUN_00804950(target);
        *(undefined4 *)((int)this + 0x80) = *(undefined4 *)((int)target + 0x30);
        FUN_00804d30((int)this + 0x90);
      }
    }
    else {
      FUN_00804950(target);
      *(undefined4 *)((int)this + 0xc0) = *(undefined4 *)((int)target + 0x30);
    }
  }
  if (*(float *)((int)this + 0xd0) == _DAT_0175b420) {
    *(undefined4 *)((int)this + 0xd0) = 0;
    FUN_00804950((int)this + 0x50);
    *(undefined4 *)((int)this + 0x40) = *(undefined4 *)((int)this + 0x80);
    piVar1 = *(int **)((int)this + 0x60);
    if (piVar1 != (int *)0x0) {
      LOCK();
      iVar4 = piVar1[1] + -1;
      piVar1[1] = iVar4;
      UNLOCK();
      if (iVar4 == 0) {
        (**(code **)(*piVar1 + 4))();
      }
      *(undefined4 *)((int)this + 0x60) = 0;
    }
    iVar4 = *(int *)((int)this + 0xa0);
    if ((iVar4 != 0) && (*(char *)(iVar4 + 0x18) != '\0')) {
      if ((iVar4 == 0) ||
         ((*(int *)(iVar4 + 0x14) != 0 && (*(char *)(*(int *)(iVar4 + 0x14) + 0x1c) != '\0')))) {
        FUN_00804950((int)this + 0x90);
        *(undefined4 *)((int)this + 0x80) = *(undefined4 *)((int)this + 0xc0);
        FUN_00804d30((int)this + 0x90);
      }
      else {
        *(undefined1 *)((int)this + 0xd4) = 0;
      }
    }
  }
  iVar4 = *(int *)((int)this + 0x60);
  if ((iVar4 != 0) && (*(char *)(iVar4 + 0x18) != '\0')) {
    if ((iVar4 == 0) ||
       ((*(int *)(iVar4 + 0x14) != 0 && (*(char *)(*(int *)(iVar4 + 0x14) + 0x1c) != '\0')))) {
      fVar6 = DAT_01b33efc;
      if (scale_ != DAT_01762a30) {
        fVar6 = duration_ * scale_;
      }
      fVar5 = targetBlend_ - *(float *)((int)this + 0xd0);
      if (fVar6 <= fVar5) {
        fVar5 = fVar6;
      }
      fVar5 = *(float *)((int)this + 0xd0) + fVar5;
      if (_DAT_0175b420 <= fVar5) {
        fVar5 = _DAT_0175b420;
      }
      *(float *)((int)this + 0xd0) = fVar5;
      return;
    }
    *(undefined1 *)((int)this + 0xd4) = 0;
  }
  return;
}

