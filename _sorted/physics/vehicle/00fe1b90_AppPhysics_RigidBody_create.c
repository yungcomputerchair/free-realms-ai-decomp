// addr: 0x00fe1b90
// name: AppPhysics_RigidBody_create
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void AppPhysics_RigidBody_create(void * this, void * shapeHandle, float *
   transform, int flags_, float mass_, float * localInertia) */

void __thiscall
AppPhysics_RigidBody_create
          (void *this,void *shapeHandle,float *transform,int flags_,float mass_,float *localInertia)

{
  uint uVar1;
  undefined4 uVar2;
  void *pvVar3;
  int iVar4;
  undefined4 *puVar5;
  float *pfVar6;
  undefined4 *puVar7;
  float *pfVar8;
  float fStack_1a4;
  float fStack_1a0;
  float fStack_19c;
  undefined4 uStack_198;
  undefined4 uStack_194;
  undefined4 uStack_190;
  undefined4 uStack_18c;
  undefined4 uStack_188;
  float afStack_184 [6];
  float fStack_16c;
  float fStack_168;
  float fStack_164;
  float fStack_160;
  float fStack_15c;
  undefined4 uStack_158;
  float fStack_154;
  float fStack_150;
  float fStack_14c;
  undefined4 uStack_148;
  undefined1 auStack_144 [64];
  undefined4 auStack_104 [16];
  undefined1 auStack_c4 [124];
  int iStack_48;
  void *pvStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
                    /* Creates an AppPhysics rigid-body wrapper: obtains the Bullet collision shape,
                       builds a motion state, optionally creates a compound-shape inertia proxy,
                       computes local inertia for dynamic bodies, constructs btRigidBody, and caches
                       AABB/transform data. */
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_0163057a;
  local_1c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xfffffe50;
  ExceptionList = &local_1c;
  *(void **)((int)this + 0x10) = shapeHandle;
  uVar2 = (**(code **)(**(int **)((int)shapeHandle + 4) + 4))(0,uVar1);
  *(undefined4 *)((int)this + 0xb0) = uVar2;
  *(float *)((int)this + 0x10c) = mass_;
  *(float *)((int)this + 0x110) = *localInertia;
  *(float *)((int)this + 0x114) = localInertia[1];
  *(float *)((int)this + 0x118) = localInertia[2];
  afStack_184[4] = transform[1];
  afStack_184[0] = *transform;
  afStack_184[5] = transform[5];
  fStack_16c = transform[9];
  fStack_164 = transform[2];
  fStack_160 = transform[6];
  fStack_15c = transform[10];
  afStack_184[1] = transform[4];
  fStack_154 = transform[0xc];
  afStack_184[2] = transform[8];
  fStack_150 = transform[0xd];
  fStack_14c = transform[0xe];
  afStack_184[3] = 0.0;
  fStack_168 = 0.0;
  uStack_158 = 0;
  uStack_148 = 0;
  pvVar3 = Mem_Alloc(0xe0);
  puStack_18 = (undefined1 *)0x0;
  if (pvVar3 == (void *)0x0) {
    uVar2 = 0;
  }
  else {
    uVar2 = FUN_00fd2330();
    uVar2 = FUN_00fe1080(afStack_184,uVar2);
  }
  puStack_18 = (undefined1 *)0xffffffff;
  *(undefined4 *)((int)this + 0x104) = uVar2;
  uStack_194 = 0;
  uStack_190 = 0;
  uStack_18c = 0;
  uStack_188 = 0;
  if (0.0 < *(float *)((int)this + 0x10c)) {
    uVar1 = *(uint *)(*(int *)((int)this + 0x10) + 4);
    if (((uVar1 & ~-(uint)(*(int *)(uVar1 + 4) != 0)) == 0) ||
       (*(char *)((~-(uint)(*(int *)(uVar1 + 4) != 0) & uVar1) + 0x41) != '\0')) {
      (**(code **)(**(int **)((int)this + 0xb0) + 0x1c))(*(float *)((int)this + 0x10c),&uStack_194);
    }
    else {
      fStack_1a4 = 0.0;
      fStack_1a0 = 0.0;
      fStack_19c = 0.0;
      *(undefined4 *)((int)this + 0x110) = 0;
      *(undefined4 *)((int)this + 0x114) = 0;
      *(undefined4 *)((int)this + 0x10c) = 0;
      *(undefined4 *)((int)this + 0x118) = 0;
    }
  }
  iVar4 = *(int *)(*(int *)((int)this + 0x10) + 4);
  if (((iVar4 == 0) || (*(int *)(iVar4 + 4) != 0)) ||
     (DAT_0187c5b4 <
      SQRT(*(float *)((int)this + 0x110) * *(float *)((int)this + 0x110) +
           *(float *)((int)this + 0x114) * *(float *)((int)this + 0x114) +
           *(float *)((int)this + 0x118) * *(float *)((int)this + 0x118)))) {
    iVar4 = FUN_01160bf0(0x60,0x10);
    puStack_18 = (undefined1 *)0x1;
    if (iVar4 == 0) {
      uVar2 = 0;
    }
    else {
      uVar2 = FUN_0113cbb0(1);
    }
    puStack_18 = (undefined1 *)0xffffffff;
    fStack_1a4 = *(float *)((int)this + 0x110);
    fStack_1a0 = *(float *)((int)this + 0x114);
    afStack_184[0] = _DAT_0175b420;
    afStack_184[5] = _DAT_0175b420;
    fStack_15c = _DAT_0175b420;
    fStack_19c = *(float *)((int)this + 0x118);
    uStack_198 = 0;
    uStack_148 = 0;
    *(undefined4 *)((int)this + 0x108) = uVar2;
    afStack_184[1] = 0.0;
    afStack_184[2] = 0.0;
    afStack_184[3] = 0.0;
    afStack_184[4] = 0.0;
    fStack_16c = 0.0;
    fStack_168 = 0.0;
    fStack_164 = 0.0;
    fStack_160 = 0.0;
    uStack_158 = 0;
    fStack_154 = fStack_1a4;
    fStack_150 = fStack_1a0;
    fStack_14c = fStack_19c;
    FUN_0113cda0(afStack_184,*(undefined4 *)((int)this + 0xb0));
  }
  iVar4 = *(int *)((int)this + 0x108);
  if (iVar4 == 0) {
    iVar4 = *(int *)((int)this + 0xb0);
  }
  FUN_00fe1a60(*(undefined4 *)((int)this + 0x10c),*(undefined4 *)((int)this + 0x104),iVar4,
               &uStack_194);
  iStack_48 = flags_;
  iVar4 = FUN_01160bf0(0x2c0,0x10);
  puStack_18 = (undefined1 *)0x2;
  if (iVar4 == 0) {
    iVar4 = 0;
  }
  else {
    iVar4 = FUN_01183a70(auStack_c4);
  }
  puStack_18 = (undefined1 *)0xffffffff;
  *(int *)((int)this + 0x100) = iVar4;
  *(void **)(iVar4 + 0xf8) = this;
  iVar4 = *(int *)((int)this + 0x100);
  *(int *)((int)this + 0xb4) = iVar4;
  if ((iVar4 != 0) && (*(int *)(iVar4 + 0xcc) != 0)) {
    puVar5 = &DAT_01bc2660;
    puVar7 = auStack_104;
    for (iVar4 = 0x10; iVar4 != 0; iVar4 = iVar4 + -1) {
      *puVar7 = *puVar5;
      puVar5 = puVar5 + 1;
      puVar7 = puVar7 + 1;
    }
    FUN_00fca610(auStack_104);
    (**(code **)(**(int **)(*(int *)((int)this + 0xb4) + 0xcc) + 4))
              (auStack_144,afStack_184,&fStack_1a4);
    afStack_184[4] = fStack_1a4;
    afStack_184[3] = _DAT_0175b420;
    fStack_168 = _DAT_0175b420;
    afStack_184[5] = fStack_1a0;
    fStack_16c = fStack_19c;
    pfVar6 = afStack_184;
    pfVar8 = (float *)((int)this + 0xc0);
    for (iVar4 = 8; iVar4 != 0; iVar4 = iVar4 + -1) {
      *pfVar8 = *pfVar6;
      pfVar6 = pfVar6 + 1;
      pfVar8 = pfVar8 + 1;
    }
  }
  ExceptionList = pvStack_20;
  return;
}

