// addr: 0x0080f170
// name: Sky_ctor
// subsystem: common/world/scene
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void * Sky_ctor(void * this, void * engine, void * initialState) */

void * __thiscall Sky_ctor(void *this,void *engine,void *initialState)

{
  int iVar1;
  undefined4 uVar2;
  void *pvVar3;
  void *unaff_ESI;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 local_4;
  
                    /* Constructs the Sky manager, initializing sky definition arrays,
                       horizon/tint/satellite blend controllers, shader/resource handles for
                       SkyBox/Flare/Satellite/cube warps, and sky light/fog/post entities. */
  local_4 = 0xffffffff;
  puStack_8 = &LAB_015689e3;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  FUN_007648d0(DAT_01b839d8 ^ (uint)&stack0xffffffe0);
  local_4 = 0;
  *(undefined ***)this = Sky::vftable;
  *(void **)((int)this + 0x14) = engine;
  *(undefined4 *)((int)this + 0x18) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  FUN_00809f50();
  local_4._0_1_ = 1;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x50) = 0;
  *(undefined4 *)((int)this + 0x54) = 0;
  *(undefined4 *)((int)this + 0x58) = 0;
  *(undefined4 *)((int)this + 0x5c) = 0;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 0x6c) = 0;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 0;
  *(undefined4 *)((int)this + 0x78) = 0;
  Sky_BilinearBlendController_Horizon_ctor((void *)((int)this + 0x80));
  local_4._0_1_ = 2;
  Sky_BilinearBlendController_TintedTexture_ctor((void *)((int)this + 0x250));
  local_4._0_1_ = 3;
  Sky_BilinearBlendController_TintedTexture_ctor((void *)((int)this + 0x3c0));
  local_4._0_1_ = 4;
  Sky_BilinearBlendController_TintedTexture_ctor((void *)((int)this + 0x530));
  local_4._0_1_ = 5;
  Sky_LinearBlendController_TintedTexture_ctor((void *)((int)this + 0x6a0));
  local_4._0_1_ = 6;
  Sky_LinearBlendController_Satellite_ctor((void *)((int)this + 0x750));
  local_4 = CONCAT31(local_4._1_3_,7);
  *(undefined4 *)((int)this + 0x830) = _DAT_0175b420;
  *(undefined4 *)((int)this + 0x83c) = DAT_017f1c48;
  uVar2 = DAT_01be1060;
  *(undefined1 *)((int)this + 0x838) = 1;
  *(undefined1 *)((int)this + 0x839) = 1;
  *(undefined4 *)((int)this + 0x840) = uVar2;
  *(undefined4 *)((int)this + 0x894) = 0;
  iVar1 = FUN_00748b40(&DAT_017f1c44);
  if (iVar1 != 0) {
    uVar2 = FUN_00754710(iVar1);
    *(undefined4 *)((int)this + 0x44) = uVar2;
    uVar2 = FUN_00754710(iVar1);
    *(undefined4 *)((int)this + 0x48) = uVar2;
  }
  iVar1 = FUN_00748b40("SkyBox");
  if (iVar1 != 0) {
    uVar2 = FUN_00754710(iVar1);
    *(undefined4 *)((int)this + 0x4c) = uVar2;
  }
  iVar1 = FUN_00748b40("Flare");
  if (iVar1 != 0) {
    uVar2 = FUN_00754710(iVar1);
    *(undefined4 *)((int)this + 0x50) = uVar2;
  }
  iVar1 = FUN_00748b40("Satellite");
  if (iVar1 != 0) {
    uVar2 = FUN_00754710(iVar1);
    *(undefined4 *)((int)this + 0x54) = uVar2;
  }
  iVar1 = FUN_00748b40("AmbientCubeWarp");
  if (iVar1 != 0) {
    uVar2 = FUN_00754710(iVar1);
    *(undefined4 *)((int)this + 0x58) = uVar2;
    uVar2 = FUN_00749030(0x1f5e725d);
    *(undefined4 *)((int)this + 0x60) = uVar2;
  }
  iVar1 = FUN_00748b40("ReflectionCubeWarp");
  if (iVar1 != 0) {
    uVar2 = FUN_00754710(iVar1);
    *(undefined4 *)((int)this + 0x5c) = uVar2;
    uVar2 = FUN_00749030(0x46427685);
    *(undefined4 *)((int)this + 100) = uVar2;
  }
  pvVar3 = Mem_Alloc(0x140);
  local_4._0_1_ = 8;
  if (pvVar3 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_007fe890(*(undefined4 *)(*(int *)((int)this + 0x14) + 4),0,3,0x400,DAT_017ec67c);
  }
  local_4._0_1_ = 7;
  *(undefined4 *)((int)this + 0x68) = uVar2;
  pvVar3 = Mem_Alloc(0xc0);
  local_4._0_1_ = 9;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = Deep_SkyLightEntity_ctor(pvVar3);
  }
  local_4._0_1_ = 7;
  *(void **)((int)this + 0x6c) = pvVar3;
  pvVar3 = Mem_Alloc(0xc0);
  local_4._0_1_ = 10;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = Deep_FogEntity_ctor(pvVar3);
  }
  local_4._0_1_ = 7;
  *(void **)((int)this + 0x70) = pvVar3;
  pvVar3 = Mem_Alloc(0xe0);
  local_4._0_1_ = 0xb;
  if (pvVar3 == (void *)0x0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = AppDeep_PostEntity_ctor(pvVar3,*(void **)(*(int *)((int)this + 0x14) + 4),0x9b3b2c99);
  }
  local_4 = CONCAT31(local_4._1_3_,7);
  *(void **)((int)this + 0x74) = pvVar3;
  if (((byte)*(ushort *)((int)this + 0x10) >> 3 & 1) == 0) {
    *(ushort *)((int)this + 0x10) = *(ushort *)((int)this + 0x10) | 8;
    if (*(int *)((int)this + 4) != 0) {
      FUN_00735a30();
    }
    (**(code **)(*(int *)this + 0x44))();
  }
  (**(code **)(**(int **)((int)this + 0x68) + 0x28))(initialState);
  (**(code **)(**(int **)((int)this + 0x6c) + 0x28))(initialState);
  (**(code **)(**(int **)((int)this + 0x70) + 0x28))(initialState);
  (**(code **)(**(int **)((int)this + 0x74) + 0x28))(initialState);
  FUN_00764b70(initialState);
  ExceptionList = unaff_ESI;
  return this;
}

