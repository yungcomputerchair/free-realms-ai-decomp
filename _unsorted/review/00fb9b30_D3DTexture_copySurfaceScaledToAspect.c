// addr: 0x00fb9b30
// name: D3DTexture_copySurfaceScaledToAspect
// subsystem: common/review
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void D3DTexture_copySurfaceScaledToAspect(void * dstTexture, void *
   srcTexture, void * dstRect) */

void __thiscall
D3DTexture_copySurfaceScaledToAspect(void *this,void *dstTexture,void *srcTexture,void *dstRect)

{
  float fVar1;
  float fVar2;
  int iVar3;
  undefined4 unaff_EBX;
  undefined4 unaff_ESI;
  int *piVar4;
  int *piVar5;
  int *local_3c;
  int *local_38;
  void *local_34;
  int iStack_30;
  int iStack_2c;
  undefined1 local_20 [16];
  int iStack_10;
  int iStack_c;
  void *pvStack_4;
  
                    /* Obtains D3D surfaces from source/destination textures, adjusts the
                       destination rectangle to preserve aspect ratio, then calls
                       D3DXLoadSurfaceFromSurface. */
  piVar4 = *(int **)((int)this + 0x24);
  local_38 = (int *)0x0;
  local_34 = this;
  if (*(char *)((int)this + 0x4e) == '\0') {
    (**(code **)(*piVar4 + 0x48))(piVar4,0,&local_38);
    piVar4 = local_38;
  }
  local_38 = piVar4;
  piVar4 = *(int **)((int)dstTexture + 0x24);
  local_3c = (int *)0x0;
  if (*(char *)((int)dstTexture + 0x4e) == '\0') {
    (**(code **)(*piVar4 + 0x48))(piVar4,0,&local_3c);
    piVar4 = local_3c;
  }
  local_3c = piVar4;
  iVar3 = (**(code **)(*local_3c + 0x30))(local_3c,local_20);
  if ((iVar3 == 0) && (this = local_3c, iStack_10 != iStack_c)) {
    local_38 = *(int **)srcTexture;
    local_34 = *(void **)((int)srcTexture + 4);
    iStack_30 = *(int *)((int)srcTexture + 8);
    iStack_2c = *(int *)((int)srcTexture + 0xc);
    fVar1 = (float)iStack_10;
    srcTexture = &local_38;
    if (iStack_10 < 0) {
      fVar1 = fVar1 + _DAT_0175db04;
    }
    fVar2 = (float)iStack_c;
    if (iStack_c < 0) {
      fVar2 = fVar2 + _DAT_0175db04;
    }
    fVar1 = fVar1 / fVar2;
    dstTexture = pvStack_4;
    if (fVar1 <= 1.0) {
      iStack_30 = (int)((float)(iStack_2c - (int)local_34) * fVar1) + (int)local_38;
    }
    else {
      iStack_2c = (int)((float)(iStack_30 - (int)local_38) / fVar1) + (int)local_34;
    }
  }
  piVar5 = (int *)0x0;
  piVar4 = (int *)0x0;
  D3DXLoadSurfaceFromSurface(unaff_EBX,0,srcTexture,unaff_ESI,0,0,4,0);
  if ((*(char *)((int)dstTexture + 0x4e) == '\0') && (piVar4 != (int *)0x0)) {
    (**(code **)(*piVar4 + 8))(piVar4);
    piVar4 = (int *)0x0;
  }
  if ((*(char *)((int)this + 0x4e) == '\0') && (piVar5 != (int *)0x0)) {
    (**(code **)(*piVar5 + 8))(piVar5,piVar4);
  }
  return;
}

