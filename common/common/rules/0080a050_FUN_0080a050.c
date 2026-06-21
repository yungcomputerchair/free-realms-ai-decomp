// addr: 0x0080a050
// name: FUN_0080a050
// subsystem: common/common/rules
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: int FUN_0080a050(void * curve, int resultToken_, float position_) */

int __thiscall FUN_0080a050(void *this,void *curve,int resultToken_,float position_)

{
  float fVar1;
  void *pvVar2;
  void *pvVar3;
  float *key;
  void *pvVar4;
  void *pvVar5;
  double dVar6;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Wraps a normalized float position, finds adjacent horizontal tree/key nodes,
                       and interpolates between them via a helper. No class or rules evidence is
                       present. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_01567e59;
  local_c = ExceptionList;
  key = (float *)(DAT_01b839d8 ^ (uint)&stack0xffffffe4);
  ExceptionList = &local_c;
  dVar6 = CRT_floor((double)((float)resultToken_ * _DAT_017ed854));
  resultToken_ = (int)((float)resultToken_ - (float)(int)dVar6 * DAT_017ed850);
  pvVar4 = Offset30FloatTree_findFloorNode(this,&resultToken_,key);
  if (pvVar4 == (void *)0x0) {
    pvVar5 = *(void **)((int)this + 4);
    pvVar4 = (void *)0x0;
    while (pvVar2 = pvVar5, pvVar2 != (void *)0x0) {
      pvVar4 = pvVar2;
      pvVar5 = *(void **)((int)pvVar2 + 0x3c);
    }
  }
  pvVar5 = *(void **)((int)pvVar4 + 0x3c);
  fVar1 = *(float *)((int)pvVar4 + 0x30);
  if (pvVar5 == (void *)0x0) {
    pvVar3 = *(void **)((int)pvVar4 + 0x34);
    pvVar2 = pvVar4;
    while ((pvVar5 = pvVar3, pvVar5 != (void *)0x0 && (*(void **)((int)pvVar5 + 0x3c) == pvVar2))) {
      pvVar2 = pvVar5;
      pvVar3 = *(void **)((int)pvVar5 + 0x34);
    }
  }
  else {
    for (pvVar2 = *(void **)((int)pvVar5 + 0x38); pvVar2 != (void *)0x0;
        pvVar2 = *(void **)((int)pvVar2 + 0x38)) {
      pvVar5 = pvVar2;
    }
  }
  if (pvVar5 == (void *)0x0) {
    pvVar2 = *(void **)((int)this + 4);
    while (pvVar3 = pvVar2, pvVar3 != (void *)0x0) {
      pvVar5 = pvVar3;
      pvVar2 = *(void **)((int)pvVar3 + 0x38);
    }
  }
  SkyDefinition_TintedTexturePair_ctor
            (pvVar4,pvVar5,
             (((float)((float)resultToken_ < fVar1) * DAT_017ed850 + (float)resultToken_) - fVar1) /
             (((float)(*(float *)((int)pvVar5 + 0x30) <= fVar1) * DAT_017ed850 +
              *(float *)((int)pvVar5 + 0x30)) - fVar1));
  ExceptionList = local_c;
  return (int)curve;
}

