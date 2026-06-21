// addr: 0x0080a1d0
// name: FUN_0080a1d0
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: int FUN_0080a1d0(void * curve, int resultToken_, float position_) */

int __thiscall FUN_0080a1d0(void *this,void *curve,int resultToken_,float position_)

{
  float fVar1;
  void *pvVar2;
  void *pvVar3;
  float *key;
  void *blend;
  void *pvVar4;
  double dVar5;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Wraps a normalized float position, finds adjacent vertical key nodes, and
                       interpolates between them. Left unnamed because there is no class evidence.
                        */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01567e99;
  local_c = ExceptionList;
  key = (float *)(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  ExceptionList = &local_c;
  dVar5 = CRT_floor((double)((float)resultToken_ * _DAT_017ed854));
  resultToken_ = (int)((float)resultToken_ - (float)(int)dVar5 * DAT_017ed850);
  blend = Offset40FloatTree_findFloorNodeA(this,&resultToken_,key);
  if (blend == (void *)0x0) {
    pvVar4 = *(void **)((int)this + 4);
    blend = (void *)0x0;
    while (pvVar2 = pvVar4, pvVar2 != (void *)0x0) {
      blend = pvVar2;
      pvVar4 = *(void **)((int)pvVar2 + 0x4c);
    }
  }
  pvVar4 = *(void **)((int)blend + 0x4c);
  fVar1 = *(float *)((int)blend + 0x40);
  if (pvVar4 == (void *)0x0) {
    pvVar3 = *(void **)((int)blend + 0x44);
    pvVar2 = blend;
    while ((pvVar4 = pvVar3, pvVar4 != (void *)0x0 && (*(void **)((int)pvVar4 + 0x4c) == pvVar2))) {
      pvVar2 = pvVar4;
      pvVar3 = *(void **)((int)pvVar4 + 0x44);
    }
  }
  else {
    for (pvVar2 = *(void **)((int)pvVar4 + 0x48); pvVar2 != (void *)0x0;
        pvVar2 = *(void **)((int)pvVar2 + 0x48)) {
      pvVar4 = pvVar2;
    }
  }
  if (pvVar4 == (void *)0x0) {
    pvVar2 = *(void **)((int)this + 4);
    while (pvVar3 = pvVar2, pvVar3 != (void *)0x0) {
      pvVar4 = pvVar3;
      pvVar2 = *(void **)((int)pvVar3 + 0x48);
    }
  }
  TwoTrackBlend_ctor(curve,blend,pvVar4,
                     (void *)((((float)((float)resultToken_ < fVar1) * DAT_017ed850 +
                               (float)resultToken_) - fVar1) /
                             (((float)(*(float *)((int)pvVar4 + 0x40) <= fVar1) * DAT_017ed850 +
                              *(float *)((int)pvVar4 + 0x40)) - fVar1)),(int)key);
  ExceptionList = local_c;
  return (int)curve;
}

