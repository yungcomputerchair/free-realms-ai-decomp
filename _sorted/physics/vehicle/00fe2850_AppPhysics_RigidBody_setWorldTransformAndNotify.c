// addr: 0x00fe2850
// name: AppPhysics_RigidBody_setWorldTransformAndNotify
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AppPhysics_RigidBody_setWorldTransformAndNotify(void * this, float *
   transform) */

void __thiscall AppPhysics_RigidBody_setWorldTransformAndNotify(void *this,float *transform)

{
  int iVar1;
  undefined4 uVar2;
  float local_90;
  float local_8c;
  float local_88;
  undefined4 local_84;
  float local_80;
  float local_7c;
  float local_78;
  undefined4 local_74;
  float local_70;
  float local_6c;
  float local_68;
  undefined4 local_64;
  float local_60;
  float local_5c;
  float local_58;
  undefined4 local_54;
  undefined1 local_50 [76];
  
                    /* Builds a Bullet transform from the supplied matrix, applies it to the
                       underlying rigid body, clears interpolation/velocity state when needed, and
                       notifies the motion-state callback when enabled. */
  local_80 = transform[1];
  local_90 = *transform;
  local_7c = transform[5];
  local_78 = transform[9];
  local_70 = transform[2];
  local_6c = transform[6];
  local_68 = transform[10];
  local_8c = transform[4];
  local_60 = transform[0xc];
  local_88 = transform[8];
  local_5c = transform[0xd];
  local_58 = transform[0xe];
  local_84 = 0;
  local_74 = 0;
  local_64 = 0;
  local_54 = 0;
  if (*(int *)(*(int *)(*(int *)((int)this + 0x100) + 0xcc) + 4) == 0x1f) {
    uVar2 = FUN_00fe0ef0(local_50);
    FUN_00fe02b0(uVar2);
  }
  FUN_011831a0(&local_90);
  iVar1 = *(int *)((int)this + 0x100);
  if (*(int *)(iVar1 + 0xd8) != 1) {
    *(undefined4 *)(iVar1 + 0x140) = 0;
    *(undefined4 *)(iVar1 + 0x144) = 0;
    *(undefined4 *)(iVar1 + 0x148) = 0;
    *(undefined4 *)(iVar1 + 0x14c) = 0;
    iVar1 = *(int *)((int)this + 0x100);
    *(undefined4 *)(iVar1 + 0x150) = 0;
    *(undefined4 *)(iVar1 + 0x154) = 0;
    *(undefined4 *)(iVar1 + 0x158) = 0;
    *(undefined4 *)(iVar1 + 0x15c) = 0;
  }
  if ((*(byte *)(*(int *)((int)this + 0x100) + 0xd8) & 2) != 0) {
    (**(code **)(**(int **)((int)this + 0x104) + 8))(&local_90);
  }
  return;
}

