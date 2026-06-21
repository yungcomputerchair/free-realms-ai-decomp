// addr: 0x00808120
// name: Sky_LinearBlendControllerTransform4_setTarget
// subsystem: common/util/misc
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void Sky_LinearBlendControllerTransform4_setTarget(void * this, void * unused,
   void * target, float targetBlend_, float duration_, float scale_) */

void __fastcall
Sky_LinearBlendControllerTransform4_setTarget
          (void *this,void *unused,void *target,float targetBlend_,float duration_,float scale_)

{
  int *piVar1;
  undefined1 auVar2 [16];
  int iVar3;
  void *extraout_ECX;
  int iVar4;
  float fVar5;
  float fVar6;
  
                    /* Updates a four-component sky linear blend target, managing active/next
                       refcounted keys and advancing the blend amount toward the target duration. */
  *(undefined1 *)((int)this + 0xa4) = 1;
  iVar3 = *(int *)((int)target + 0x10);
  if ((((((iVar3 == *(int *)((int)this + 0x50)) &&
         (auVar2._4_4_ = -(uint)(*(float *)((int)target + 0x24) == *(float *)((int)this + 100)),
         auVar2._0_4_ = -(uint)(*(float *)((int)target + 0x20) == *(float *)((int)this + 0x60)),
         auVar2._8_4_ = -(uint)(*(float *)((int)target + 0x28) == *(float *)((int)this + 0x68)),
         auVar2._12_4_ = -(uint)(*(float *)((int)target + 0x2c) == *(float *)((int)this + 0x6c)),
         iVar4 = movmskps(unused,auVar2), iVar4 == 0xf)) || (iVar3 == 0)) ||
       (*(char *)(iVar3 + 0x18) == '\0')) ||
      (((iVar3 = *(int *)((int)this + 0x50), iVar3 != 0 && (*(char *)(iVar3 + 0x18) != '\0')) &&
       ((iVar3 == 0 ||
        ((*(int *)(iVar3 + 0x14) != 0 && (*(char *)(*(int *)(iVar3 + 0x14) + 0x1c) != '\0'))))))))
     || (iVar3 = AnimationKey_differsTransform4(target,(void *)((int)this + 0x10)),
        target = extraout_ECX, (char)iVar3 == '\0')) {
    FUN_00804950(target);
  }
  else {
    FUN_00804950(extraout_ECX);
    FUN_00804d30((int)this + 0x70);
  }
  if (*(float *)((int)this + 0xa0) == _DAT_0175b420) {
    *(undefined4 *)((int)this + 0xa0) = 0;
    FUN_00804950((int)this + 0x40);
    piVar1 = *(int **)((int)this + 0x50);
    if (piVar1 != (int *)0x0) {
      LOCK();
      iVar3 = piVar1[1] + -1;
      piVar1[1] = iVar3;
      UNLOCK();
      if (iVar3 == 0) {
        (**(code **)(*piVar1 + 4))();
      }
      *(undefined4 *)((int)this + 0x50) = 0;
    }
    iVar3 = *(int *)((int)this + 0x80);
    if ((iVar3 != 0) && (*(char *)(iVar3 + 0x18) != '\0')) {
      if ((iVar3 == 0) ||
         ((*(int *)(iVar3 + 0x14) != 0 && (*(char *)(*(int *)(iVar3 + 0x14) + 0x1c) != '\0')))) {
        FUN_00804950((int)this + 0x70);
        FUN_00804d30((int)this + 0x70);
      }
      else {
        *(undefined1 *)((int)this + 0xa4) = 0;
      }
    }
  }
  iVar3 = *(int *)((int)this + 0x50);
  if ((iVar3 != 0) && (*(char *)(iVar3 + 0x18) != '\0')) {
    if ((iVar3 == 0) ||
       ((*(int *)(iVar3 + 0x14) != 0 && (*(char *)(*(int *)(iVar3 + 0x14) + 0x1c) != '\0')))) {
      fVar6 = DAT_01b33efc;
      if (scale_ != DAT_01762a30) {
        fVar6 = duration_ * scale_;
      }
      fVar5 = targetBlend_ - *(float *)((int)this + 0xa0);
      if (fVar6 <= fVar5) {
        fVar5 = fVar6;
      }
      fVar5 = *(float *)((int)this + 0xa0) + fVar5;
      if (_DAT_0175b420 <= fVar5) {
        fVar5 = _DAT_0175b420;
      }
      *(float *)((int)this + 0xa0) = fVar5;
      return;
    }
    *(undefined1 *)((int)this + 0xa4) = 0;
  }
  return;
}

