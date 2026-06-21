// addr: 0x00fee000
// name: AppPhysics_ShipPhysics_createBodiesAndConstraint
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void AppPhysics_ShipPhysics_createBodiesAndConstraint(void * this, void *
   shapeHandle, void * transformSource) */

void __thiscall
AppPhysics_ShipPhysics_createBodiesAndConstraint(void *this,void *shapeHandle,void *transformSource)

{
  int *piVar1;
  int *piVar2;
  uint uVar3;
  undefined4 uVar4;
  undefined4 uVar5;
  void *this_00;
  undefined4 uVar6;
  undefined4 *puVar7;
  int iVar8;
  uint uStack_124;
  undefined4 uStack_110;
  float fStack_10c;
  undefined4 uStack_108;
  undefined4 uStack_104;
  void *pvStack_fc;
  void *pvStack_f4;
  int iStack_f0;
  float afStack_ec [3];
  undefined4 uStack_e0;
  undefined4 uStack_dc;
  undefined4 uStack_d8;
  undefined4 uStack_d4;
  undefined4 uStack_d0;
  undefined4 uStack_cc;
  undefined4 uStack_c8;
  undefined4 uStack_c4;
  undefined4 uStack_c0;
  undefined4 uStack_bc;
  undefined4 uStack_b8;
  undefined4 uStack_b4;
  undefined4 uStack_b0;
  undefined4 uStack_ac;
  undefined4 uStack_a8;
  undefined4 uStack_a4;
  undefined4 uStack_a0;
  undefined4 uStack_9c;
  undefined4 uStack_98;
  undefined4 uStack_94;
  undefined4 uStack_90;
  undefined4 uStack_8c;
  undefined4 uStack_88;
  undefined4 uStack_84;
  undefined4 uStack_80;
  undefined4 uStack_7c;
  undefined4 uStack_78;
  undefined4 uStack_74;
  undefined4 uStack_70;
  undefined4 uStack_6c;
  undefined4 uStack_68;
  undefined4 uStack_64;
  undefined4 uStack_60;
  undefined4 uStack_5c;
  undefined4 uStack_58;
  undefined4 uStack_54;
  undefined4 uStack_50;
  undefined4 uStack_4c;
  undefined4 uStack_48;
  undefined4 uStack_44;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  void *pvStack_30;
  undefined4 uStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
                    /* Builds the ShipPhysics rigid body, registers it, creates an auxiliary sphere
                       rigid body, and connects the two with a Generic6Dof constraint configured
                       with ship-specific linear/angular limits. */
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_01630e78;
  local_1c = ExceptionList;
  uStack_124 = DAT_01b839d8 ^ (uint)&stack0xfffffee0;
  ExceptionList = &local_1c;
  if (*(int *)((int)this + 0x14) != 0) {
    FUN_00fd80f0(*(int *)((int)this + 0x14));
    piVar2 = *(int **)((int)this + 0x14);
    piVar1 = piVar2 + 1;
    LOCK();
    iVar8 = *piVar1 + -1;
    *piVar1 = iVar8;
    UNLOCK();
    if (iVar8 == 0) {
      (**(code **)(*piVar2 + 4))();
    }
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  uVar3 = *(uint *)((int)shapeHandle + 4);
  if ((uVar3 != 0) && ((uVar3 & ~-(uint)(*(int *)(uVar3 + 4) != 0)) != 0)) {
    FUN_00fde890();
  }
  uVar6 = *(undefined4 *)((int)this + 0x2c4);
  *(undefined4 *)((int)this + 0x2f8) = 0x640;
  pvStack_f4 = Mem_Alloc(0x170);
  uStack_14 = 0;
  if (pvStack_f4 == (void *)0x0) {
    this_00 = (void *)0x0;
  }
  else {
    this_00 = (void *)RigidBody_ctor(uVar6,0x200,*(uint *)((int)this + 0x2f8) | 0x800,0,0xffffffff,0
                                    );
  }
  iVar8 = DAT_017eb6dc;
  uStack_14 = 0xffffffff;
  afStack_ec[2] = *(float *)((int)this + 0x10c);
  *(void **)((int)this + 0x14) = this_00;
  afStack_ec[0] = 0.0;
  afStack_ec[1] = 0.0;
  AppPhysics_RigidBody_create
            (this_00,shapeHandle,transformSource,iVar8,*(float *)((int)this + 0x108),afStack_ec);
  iVar8 = *(int *)((int)this + 0x14);
  *(void **)(iVar8 + 0x1c) = this;
  *(undefined4 *)(iVar8 + 0x20) = 9;
  AppPhysics_World_registerRigidBody(*(void **)((int)this + 0x10),*(void **)((int)this + 0x14));
  FUN_011271b0(4);
  pvStack_f4 = *(void **)((int)this + 0x108);
  fStack_10c = (float)pvStack_f4 / *(float *)((int)this + 0x11c);
  uStack_110 = 0;
  uStack_108 = 0;
  uStack_104 = 0;
  FUN_011825a0(pvStack_f4,&uStack_110);
  iStack_f0 = FUN_01160bf0(0x40,0x10);
  uStack_14 = 1;
  if (iStack_f0 == 0) {
    pvStack_f4 = (void *)0x0;
  }
  else {
    pvStack_f4 = (void *)FUN_00fcbe20(_DAT_017e795c);
  }
  uStack_14 = 0xffffffff;
  uStack_110 = 0;
  uStack_e0 = _DAT_0175b420;
  uStack_cc = _DAT_0175b420;
  uStack_b8 = _DAT_0175b420;
  fStack_10c = *(float *)((int)transformSource + 0x34);
  uStack_108 = 0;
  uStack_104 = 0;
  uStack_b0 = 0;
  uStack_dc = 0;
  uStack_d8 = 0;
  uStack_d4 = 0;
  uStack_d0 = 0;
  uStack_c8 = 0;
  uStack_c4 = 0;
  uStack_c0 = 0;
  uStack_bc = 0;
  uStack_b4 = 0;
  uStack_a8 = 0;
  uStack_a4 = 0;
  uStack_ac = fStack_10c;
  iStack_f0 = FUN_01160bf0(0x2c0,0x10);
  uStack_14 = 2;
  if (iStack_f0 == 0) {
    uVar6 = 0;
  }
  else {
    uStack_110 = 0;
    fStack_10c = 0.0;
    uStack_108 = 0;
    uStack_104 = 0;
    uVar6 = FUN_01183af0(0,0,pvStack_f4,&uStack_110);
  }
  uStack_14 = 0xffffffff;
  *(undefined4 *)((int)this + 0xfc) = uVar6;
  FUN_011831a0(&uStack_e0);
  (**(code **)(**(int **)(*(int *)((int)this + 0x10) + 8) + 0x58))
            (*(undefined4 *)((int)this + 0xfc),0,0);
  *(uint *)(*(int *)((int)this + 0xfc) + 0xd8) =
       *(uint *)(*(int *)(*(int *)((int)this + 0x14) + 0x100) + 0xd8) | 2;
  puVar7 = (undefined4 *)FUN_00fd2330();
  uStack_6c = *puVar7;
  uStack_68 = puVar7[1];
  uStack_64 = puVar7[2];
  uStack_60 = puVar7[3];
  uStack_5c = puVar7[4];
  uStack_58 = puVar7[5];
  uStack_54 = puVar7[6];
  uStack_50 = puVar7[7];
  uStack_4c = puVar7[8];
  uStack_48 = puVar7[9];
  uStack_44 = puVar7[10];
  uStack_40 = puVar7[0xb];
  uStack_3c = puVar7[0xc];
  uStack_38 = puVar7[0xd];
  uStack_34 = puVar7[0xe];
  pvStack_30 = (void *)puVar7[0xf];
  puVar7 = (undefined4 *)FUN_00fd2330();
  uStack_ac = *puVar7;
  uStack_a8 = puVar7[1];
  uStack_a4 = puVar7[2];
  uStack_a0 = puVar7[3];
  uStack_9c = puVar7[4];
  uStack_98 = puVar7[5];
  uStack_94 = puVar7[6];
  uStack_90 = puVar7[7];
  uStack_8c = puVar7[8];
  uStack_88 = puVar7[9];
  uStack_84 = puVar7[10];
  uStack_80 = puVar7[0xb];
  uStack_7c = puVar7[0xc];
  uStack_78 = puVar7[0xd];
  uStack_74 = puVar7[0xe];
  uStack_70 = puVar7[0xf];
  pvStack_fc = Mem_Alloc(0x590);
  uStack_20 = 3;
  if (pvStack_fc == (void *)0x0) {
    iVar8 = 0;
  }
  else {
    iVar8 = FUN_01174240(*(undefined4 *)(*(int *)((int)this + 0x14) + 0x100),
                         *(undefined4 *)((int)this + 0xfc),&uStack_6c,&uStack_ac,0);
  }
  uVar5 = DAT_0181d5c0;
  uVar4 = DAT_017f0118;
  uVar6 = DAT_017ebbb8;
  uStack_20 = 0xffffffff;
  *(int *)((int)this + 0x100) = iVar8;
  *(undefined4 *)(iVar8 + 0x2f0) = uVar5;
  *(undefined4 *)(iVar8 + 0x2f4) = uVar4;
  uVar4 = DAT_0181d5bc;
  *(undefined4 *)(iVar8 + 0x2f8) = uVar5;
  *(undefined4 *)(iVar8 + 0x2fc) = 0;
  iVar8 = *(int *)((int)this + 0x100);
  *(undefined4 *)(iVar8 + 0x300) = uVar4;
  *(undefined4 *)(iVar8 + 0x304) = uVar6;
  *(undefined4 *)(iVar8 + 0x308) = uVar4;
  uStack_110 = 0;
  *(undefined4 *)(iVar8 + 0x30c) = 0;
  (**(code **)(**(int **)(*(int *)((int)this + 0x10) + 8) + 0x3c))
            (*(undefined4 *)((int)this + 0x100),0);
  uStack_124 = _DAT_01cb53d0;
  FUN_00fe0a00(&uStack_124);
  ExceptionList = pvStack_30;
  return;
}

