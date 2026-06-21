// addr: 0x010882b0
// name: VehicleRaceExplosion_ctor
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void * VehicleRaceExplosion_ctor(void * this, void * race, void * owner, float
   * transform, int collisionGroup_) */

void * __thiscall
VehicleRaceExplosion_ctor(void *this,void *race,void *owner,float *transform,int collisionGroup_)

{
  float fVar1;
  float fVar2;
  float fVar3;
  uint poolKey_;
  int *piVar4;
  void *pvVar5;
  undefined4 uVar6;
  int iVar7;
  undefined4 *puVar8;
  undefined4 *puVar9;
  undefined4 local_60 [12];
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
                    /* Constructs VehicleRaceExplosion, stores owner/position fields, creates a
                       spherical AppPhysics rigid body at the supplied transform, activates it, and
                       attaches a collision callback record back to the explosion object. */
  uVar6 = DAT_017e99a8;
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_016419fb;
  local_1c = ExceptionList;
  poolKey_ = DAT_01b839d8 ^ (uint)&stack0xffffff80;
  ExceptionList = &local_1c;
  *(void **)((int)this + 0x10) = race;
  *(undefined4 *)((int)this + 0x18) = uVar6;
  *(void **)((int)this + 0x14) = owner;
  *(undefined ***)this = VehicleRaceExplosion::vftable;
  *(float *)((int)this + 0x20) = *transform;
  *(float *)((int)this + 0x24) = transform[1];
  *(float *)((int)this + 0x28) = transform[2];
  *(float *)((int)this + 0x2c) = transform[3];
  *(int *)((int)this + 0x1c) = collisionGroup_;
  fVar1 = transform[2];
  fVar2 = transform[1];
  fVar3 = *transform;
  puVar8 = &DAT_01bc2660;
  puVar9 = local_60;
  for (iVar7 = 0x10; iVar7 != 0; iVar7 = iVar7 + -1) {
    *puVar9 = *puVar8;
    puVar8 = puVar8 + 1;
    puVar9 = puVar9 + 1;
  }
  local_24 = _DAT_0175b420;
  local_30 = fVar3;
  local_2c = fVar2;
  local_28 = fVar1;
  piVar4 = AppPhysics_SphereRigidBodyPool_acquire
                     (DAT_01cb56fc,local_60,(float *)0x0,collisionGroup_,1.43493e-42,0x400,3,
                      poolKey_);
  *(int **)((int)this + 0x3c) = piVar4;
  (**(code **)(*piVar4 + 0x10))();
  pvVar5 = Mem_Alloc(0x1c);
  uStack_14 = 0;
  if (pvVar5 == (void *)0x0) {
    uVar6 = 0;
  }
  else {
    uVar6 = FUN_00fe3310(*(undefined4 *)((int)this + 0x3c),7,0,0xffffffff,local_60);
  }
  iVar7 = *(int *)((int)this + 0x3c);
  *(undefined4 *)((int)this + 0x44) = uVar6;
  *(undefined4 *)(iVar7 + 0x1c) = uVar6;
  *(undefined4 *)(iVar7 + 0x20) = 7;
  *(void **)(*(int *)((int)this + 0x44) + 0xc) = this;
  ExceptionList = local_1c;
  return this;
}

