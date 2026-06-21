// addr: 0x007ed450
// name: FrameInterpolator_getCurrentFrameTransform
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void FrameInterpolator_getCurrentFrameTransform(void * interp, void *
   outTransform, bool continuous_) */

void __thiscall
FrameInterpolator_getCurrentFrameTransform
          (void *this,void *interp,void *outTransform,bool continuous_)

{
  undefined4 *puVar1;
  int iVar2;
  uint uVar3;
  float unaff_EDI;
  undefined1 local_60 [92];
  
                    /* Writes either an identity/default transform or an interpolated frame
                       transform depending on the animation mode and current frame state. */
  iVar2 = *(int *)((int)this + 8);
  if (*(char *)(iVar2 + 0x2c) != (char)outTransform) {
    puVar1 = (undefined4 *)FUN_007ed2c0(local_60);
    for (iVar2 = 0x14; iVar2 != 0; iVar2 = iVar2 + -1) {
      *(undefined4 *)interp = *puVar1;
      puVar1 = puVar1 + 1;
      interp = (undefined4 *)((int)interp + 4);
    }
    return;
  }
  if ((char)outTransform != '\0') {
    TransformTrack_sampleRange
              (*(void **)(iVar2 + 0x3c),interp,*(void **)((int)this + 0x20),
               (float)(*(int *)((int)this + 0x24) - *(int *)((int)this + 0x28)) *
               *(float *)(iVar2 + 0x28) + *(float *)((int)this + 0x1c),unaff_EDI);
    return;
  }
  if ((*(int *)((int)this + 0x14) < 0) ||
     (uVar3 = *(int *)((int)this + 0x14) - 1, *(int *)((int)this + 0x24) < (int)uVar3)) {
    uVar3 = 1;
  }
  else {
    uVar3 = uVar3 & 0xffffff00;
  }
  FUN_007f6540(interp,*(undefined4 *)((int)this + 0x1c),uVar3);
  return;
}

