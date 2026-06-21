// addr: 0x007f6590
// name: TransformTrack_sampleRange
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void TransformTrack_sampleRange(void * track, void * outTransform, float
   startTime_, float endTime_) */

void __thiscall
TransformTrack_sampleRange
          (void *this,void *track,void *outTransform,float startTime_,float endTime_)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  float fVar5;
  float fVar6;
  float local_98;
  float local_94;
  undefined1 local_90;
  undefined1 local_8f;
  undefined4 local_8c;
  undefined1 local_88 [68];
  undefined1 local_44 [68];
  
                    /* Samples a transform track over a time span, splitting across frame-sized
                       intervals and appending segment transforms to the output. */
  local_98 = 0.0;
  local_94 = *(float *)((int)this + 0x14);
  fVar5 = _DAT_0175b420 / local_94;
  iVar3 = 0;
  local_90 = 0;
  local_8f = 0;
  local_8c = 0;
  CRT_floor((double)(fVar5 * (float)outTransform));
  iVar1 = FUN_00d83c90();
  CRT_floor((double)(fVar5 * startTime_));
  iVar2 = FUN_00d83c90();
  fVar5 = *(float *)((int)this + 0x14);
  iVar4 = iVar2 - iVar1;
  thunk_FUN_00eeaf00(track);
  if (-1 < iVar4) {
    do {
      local_98 = (float)outTransform - (float)iVar1 * fVar5;
      if (iVar3 != 0) {
        local_98 = 0.0;
      }
      fVar6 = startTime_ - (float)iVar2 * fVar5;
      if (iVar3 != iVar4) {
        fVar6 = *(float *)((int)this + 0x14);
      }
      thunk_FUN_00f22400(&local_98,*(undefined4 *)((int)this + 0xc),
                         *(undefined4 *)((int)this + 0x10),local_88);
      thunk_FUN_00eeb4b0(local_44,local_88);
      thunk_FUN_00eeb8a0(track,local_44);
      local_98 = fVar6;
      thunk_FUN_00f22400(&local_98,*(undefined4 *)((int)this + 0xc),
                         *(undefined4 *)((int)this + 0x10),local_88);
      thunk_FUN_00eeb8a0(track,local_88);
      iVar3 = iVar3 + 1;
    } while (iVar3 <= iVar4);
  }
  return;
}

