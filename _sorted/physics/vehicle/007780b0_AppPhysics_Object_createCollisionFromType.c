// addr: 0x007780b0
// name: AppPhysics_Object_createCollisionFromType
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: int AppPhysics_Object_createCollisionFromType(void * this, void * source, uint
   typeId_) */

int __thiscall AppPhysics_Object_createCollisionFromType(void *this,void *source,uint typeId_)

{
  int iVar1;
  int *piVar2;
  int *piVar3;
  uint uVar4;
  int iVar5;
  void *pvVar6;
  undefined4 uVar7;
  float *pfVar8;
  uint extraout_EAX;
  undefined1 *puVar9;
  float *pfVar10;
  int extraout_EDX;
  float fVar11;
  float afStack_380 [24];
  undefined1 auStack_320 [64];
  undefined1 auStack_2e0 [64];
  undefined1 auStack_2a0 [64];
  undefined1 auStack_260 [64];
  undefined1 auStack_220 [64];
  undefined1 auStack_1e0 [64];
  undefined1 auStack_1a0 [64];
  undefined1 auStack_160 [64];
  undefined1 auStack_120 [64];
  undefined1 auStack_e0 [64];
  undefined1 auStack_a0 [64];
  undefined1 auStack_60 [68];
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
                    /* Creates or replaces an object's collision body based on a 16-bit type ID,
                       allocating AppPhysics rigid bodies/shapes, assigning collision filters,
                       registering bodies, and handling several special-case shape types. */
  pvVar6 = ExceptionList;
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_01557e5a;
  local_1c = ExceptionList;
  uVar4 = DAT_01b839d8 ^ (uint)&stack0xfffffc70;
  ExceptionList = &local_1c;
  *(void **)((int)this + 0x290) = source;
  if (**(int **)((int)this + 0x130) == 0) {
    ExceptionList = pvVar6;
    return 0;
  }
  piVar2 = *(int **)((int)this + 0x2a8);
  if (piVar2 != (int *)0x0) {
    LOCK();
    iVar5 = piVar2[1] + -1;
    piVar2[1] = iVar5;
    UNLOCK();
    if (iVar5 == 0) {
      (**(code **)(*piVar2 + 4))(uVar4);
    }
  }
  iVar5 = 0;
  if (*(int *)((int)this + 0x2a4) != 0) {
    FUN_00fd80f0(*(int *)((int)this + 0x2a4));
    piVar3 = *(int **)((int)this + 0x2a4);
    piVar2 = piVar3 + 1;
    LOCK();
    iVar1 = *piVar2;
    iVar5 = *piVar2;
    *piVar2 = iVar1 + -1;
    UNLOCK();
    if (iVar1 + -1 == 0) {
      iVar5 = (**(code **)(*piVar3 + 4))();
    }
    *(undefined4 *)((int)this + 0x2a4) = 0;
  }
  if (source == (void *)0x0) {
    ExceptionList = local_1c;
    return iVar5;
  }
  FUN_00777480(auStack_320);
  uVar4 = (typeId_ & 0xffff) - 2;
  switch(typeId_ & 0xffff) {
  case 2:
  case 9:
  case 0xb:
  case 0xc:
  case 0xd:
  case 0xe:
  case 0xf:
  case 0x10:
  case 0x11:
  case 0x12:
  case 0x13:
  case 0x14:
  case 0x15:
  case 0x16:
  case 0x19:
  case 0x1a:
  case 0x1b:
  case 0x1c:
  case 0x1d:
  case 0x1e:
  case 0x1f:
  case 0x20:
  case 0x21:
  case 0x22:
  case 0x23:
  case 0x27:
  case 0x28:
  case 0x29:
  case 0x2b:
    if (*(char *)((int)source + 0xc) == '\0') {
      *(undefined2 *)((int)this + 0x29a) = 1;
    }
    else {
      *(undefined2 *)((int)this + 0x29a) = 2;
    }
    pvVar6 = Mem_Alloc(0x170);
    uStack_14 = 9;
    if (pvVar6 == (void *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = RigidBody_ctor((int)*(short *)((int)this + 0x29a),0xe84,this,0);
    }
    afStack_380[0xc] = 0.0;
    afStack_380[0xd] = 0.0;
    afStack_380[0xe] = 0.0;
    pfVar10 = afStack_380 + 0xc;
    puVar9 = auStack_e0;
    break;
  default:
    goto switchD_0077817f_caseD_3;
  case 4:
    *(undefined2 *)((int)this + 0x29a) = 0x400;
    pvVar6 = Mem_Alloc(0x170);
    uStack_14 = 0;
    if (pvVar6 == (void *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = RigidBody_ctor((int)*(short *)((int)this + 0x29a),4,0,0xffffffff);
    }
    uStack_14 = 0xffffffff;
    pfVar10 = afStack_380 + 0x15;
    fVar11 = 0.0;
    *(undefined4 *)((int)this + 0x2a4) = uVar7;
    iVar5 = 0;
    afStack_380[0x15] = 0.0;
    afStack_380[0x16] = 0.0;
    afStack_380[0x17] = 0.0;
    pfVar8 = (float *)FUN_00770a70(auStack_2e0,auStack_320);
    AppPhysics_RigidBody_create
              (*(void **)((int)this + 0x2a4),*(void **)((int)this + 0x290),pfVar8,iVar5,fVar11,
               pfVar10);
    (**(code **)(**(int **)((int)this + 0x2a4) + 0x10))();
    pvVar6 = Mem_Alloc(0x1c);
    uStack_14 = 1;
    if (pvVar6 == (void *)0x0) {
LAB_00778284:
      uVar7 = 0;
    }
    else {
      uVar7 = FUN_00770a70(auStack_a0,(int)this + 0x160);
      uVar7 = FUN_00fe3310(*(undefined4 *)((int)this + 0x2a4),2,this,0,uVar7);
    }
    goto LAB_00778286;
  case 5:
    *(undefined2 *)((int)this + 0x29a) = 0x400;
    pvVar6 = Mem_Alloc(0x170);
    uStack_14 = 2;
    if (pvVar6 == (void *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = RigidBody_ctor((int)*(short *)((int)this + 0x29a),4,0,0xffffffff);
    }
    uStack_14 = 0xffffffff;
    pfVar10 = afStack_380 + 0xf;
    fVar11 = 0.0;
    *(undefined4 *)((int)this + 0x2a4) = uVar7;
    iVar5 = 0;
    afStack_380[0xf] = 0.0;
    afStack_380[0x10] = 0.0;
    afStack_380[0x11] = 0.0;
    pfVar8 = (float *)FUN_00770a70(auStack_220,auStack_320);
    AppPhysics_RigidBody_create
              (*(void **)((int)this + 0x2a4),*(void **)((int)this + 0x290),pfVar8,iVar5,fVar11,
               pfVar10);
    (**(code **)(**(int **)((int)this + 0x2a4) + 0x10))();
    pvVar6 = Mem_Alloc(0x1c);
    uStack_14 = 3;
    if (pvVar6 == (void *)0x0) goto LAB_00778284;
    uVar7 = FUN_00770a70(auStack_120,(int)this + 0x160);
    uVar7 = FUN_00fe3310(*(undefined4 *)((int)this + 0x2a4),3,this,0,uVar7);
    goto LAB_00778286;
  case 6:
    *(undefined2 *)((int)this + 0x29a) = 1;
    pvVar6 = Mem_Alloc(0x170);
    uStack_14 = 6;
    if (pvVar6 == (void *)0x0) {
      iVar5 = 0;
    }
    else {
      iVar5 = RigidBody_ctor((int)*(short *)((int)this + 0x29a),0xe84,this,0);
    }
    *(int *)((int)this + 0x2a4) = iVar5;
    *(undefined1 *)(iVar5 + 0x151) = 1;
    afStack_380[0] = 0.0;
    afStack_380[1] = 0.0;
    afStack_380[2] = 0.0;
    pfVar10 = afStack_380;
    puVar9 = auStack_260;
    goto LAB_00778721;
  case 7:
    *(undefined2 *)((int)this + 0x29a) = 1;
    pvVar6 = Mem_Alloc(0x170);
    uStack_14 = 7;
    if (pvVar6 == (void *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = RigidBody_ctor((int)*(short *)((int)this + 0x29a),0xe84,this,0);
    }
    pfVar10 = afStack_380 + 3;
    *(undefined4 *)((int)this + 0x2a4) = uVar7;
    iVar5 = 0x3f800000;
    afStack_380[3] = 0.0;
    afStack_380[4] = 0.0;
    afStack_380[5] = 0.0;
    puVar9 = auStack_1e0;
    goto LAB_0077872b;
  case 10:
    if (*(char *)((int)source + 0xc) == '\0') {
      *(undefined2 *)((int)this + 0x29a) = 0x40;
    }
    else {
      *(undefined2 *)((int)this + 0x29a) = 2;
    }
    pvVar6 = Mem_Alloc(0x170);
    uStack_14 = 10;
    if (pvVar6 == (void *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = RigidBody_ctor((int)*(short *)((int)this + 0x29a),0xe84,this,0);
    }
    afStack_380[0x12] = 0.0;
    afStack_380[0x13] = 0.0;
    afStack_380[0x14] = 0.0;
    pfVar10 = afStack_380 + 0x12;
    puVar9 = auStack_60;
    break;
  case 0x17:
    *(undefined2 *)((int)this + 0x29a) = 0x400;
    pvVar6 = Mem_Alloc(0x170);
    uStack_14 = 4;
    if (pvVar6 == (void *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = RigidBody_ctor((int)*(short *)((int)this + 0x29a),4,0,0xffffffff);
    }
    uStack_14 = 0xffffffff;
    pfVar10 = afStack_380 + 9;
    fVar11 = 0.0;
    *(undefined4 *)((int)this + 0x2a4) = uVar7;
    iVar5 = 0;
    afStack_380[9] = 0.0;
    afStack_380[10] = 0.0;
    afStack_380[0xb] = 0.0;
    pfVar8 = (float *)FUN_00770a70(auStack_1a0,auStack_320);
    AppPhysics_RigidBody_create
              (*(void **)((int)this + 0x2a4),*(void **)((int)this + 0x290),pfVar8,iVar5,fVar11,
               pfVar10);
    (**(code **)(**(int **)((int)this + 0x2a4) + 0x10))();
    pvVar6 = Mem_Alloc(0x1c);
    uStack_14 = 5;
    if (pvVar6 == (void *)0x0) goto LAB_00778284;
    uVar7 = FUN_00770a70(auStack_2a0,(int)this + 0x160);
    uVar7 = FUN_00fe3310(*(undefined4 *)((int)this + 0x2a4),8,this,0,uVar7);
LAB_00778286:
    uStack_14 = 0xffffffff;
    iVar5 = *(int *)((int)this + 0x2a4);
    *(undefined4 *)((int)this + 0x2a8) = uVar7;
    *(undefined4 *)(iVar5 + 0x1c) = uVar7;
    *(undefined4 *)(iVar5 + 0x20) = 7;
    goto LAB_00778752;
  case 0x18:
    *(undefined2 *)((int)this + 0x29a) = 1;
    pvVar6 = Mem_Alloc(0x170);
    uStack_14 = 8;
    if (pvVar6 == (void *)0x0) {
      uVar7 = 0;
    }
    else {
      uVar7 = RigidBody_ctor(0,(int)*(short *)((int)this + 0x29a),0xe84,this,0,1);
    }
    afStack_380[6] = 0.0;
    afStack_380[7] = 0.0;
    afStack_380[8] = 0.0;
    pfVar10 = afStack_380 + 6;
    puVar9 = auStack_160;
  }
  *(undefined4 *)((int)this + 0x2a4) = uVar7;
LAB_00778721:
  iVar5 = 0;
LAB_0077872b:
  uStack_14 = 0xffffffff;
  fVar11 = 0.0;
  pfVar8 = (float *)FUN_00770a70(puVar9,auStack_320);
  AppPhysics_RigidBody_create
            (*(void **)((int)this + 0x2a4),*(void **)((int)this + 0x290),pfVar8,iVar5,fVar11,pfVar10
            );
LAB_00778752:
  AppPhysics_World_registerRigidBody(*(void **)((int)this + 0x780),*(void **)((int)this + 0x2a4));
  uVar4 = extraout_EAX;
switchD_0077817f_caseD_3:
  if (*(int *)((int)this + 0x2a4) != 0) {
    uVar4 = FUN_0076be20((ushort)typeId_);
    *(uint *)(extraout_EDX + 0x154) = uVar4;
  }
  ExceptionList = local_1c;
  return uVar4;
}

