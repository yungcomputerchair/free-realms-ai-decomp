// addr: 0x007ee210
// name: FrameInterpolator_advanceTime
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FrameInterpolator_advanceTime(void * interp, float deltaTime_) */

void __thiscall FrameInterpolator_advanceTime(void *this,void *interp,float deltaTime_)

{
  int iVar1;
  int iVar2;
  int iVar3;
  float fVar4;
  float fVar5;
  
                    /* Advances an animation frame accumulator by delta time, updates
                       previous/current frame indices, and clamps at sequence bounds. */
  if (*(char *)((int)this + 0x18) != '\0') {
    fVar4 = *(float *)((int)this + 0x10) * (float)interp + *(float *)((int)this + 0x1c);
    iVar1 = *(int *)((int)this + 8);
    *(float *)((int)this + 0x20) = *(float *)((int)this + 0x1c);
    *(float *)((int)this + 0x1c) = fVar4;
    CRT_floor((double)(fVar4 / *(float *)(iVar1 + 0x28)));
    iVar2 = FUN_00d83c90();
    fVar5 = 0.0;
    *(int *)((int)this + 0x28) = *(int *)((int)this + 0x24);
    iVar3 = *(int *)((int)this + 0x24) + iVar2;
    *(int *)((int)this + 0x24) = iVar3;
    if ((((iVar3 < *(int *)((int)this + 0x14)) && (0.0 <= (float)interp)) ||
        ((-1 < iVar3 && ((float)interp <= 0.0)))) || (*(int *)((int)this + 0x14) < 0)) {
      fVar4 = fVar4 - (float)iVar2 * *(float *)(iVar1 + 0x28);
      *(float *)((int)this + 0x1c) = fVar4;
      if (0.0 < fVar4) {
        *(float *)((int)this + 0x1c) = fVar4;
        return;
      }
    }
    else {
      fVar4 = *(float *)(iVar1 + 0x28);
      if (*(float *)((int)this + 0x1c) < *(float *)(iVar1 + 0x28)) {
        fVar4 = *(float *)((int)this + 0x1c);
      }
      if (0.0 <= fVar4) {
        fVar5 = fVar4;
      }
      *(undefined4 *)((int)this + 0x24) = *(undefined4 *)((int)this + 0x28);
    }
    *(float *)((int)this + 0x1c) = fVar5;
  }
  return;
}

