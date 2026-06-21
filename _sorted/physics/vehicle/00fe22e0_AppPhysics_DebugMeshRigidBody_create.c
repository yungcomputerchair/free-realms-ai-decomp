// addr: 0x00fe22e0
// name: AppPhysics_DebugMeshRigidBody_create
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void AppPhysics_DebugMeshRigidBody_create(void * this) */

void __fastcall AppPhysics_DebugMeshRigidBody_create(void *this)

{
  float fVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  byte flagB_;
  short sVar5;
  void *pvVar6;
  float *pfVar7;
  undefined4 *this_00;
  undefined4 uVar8;
  int iVar9;
  int iVar10;
  float *pfVar11;
  void *c;
  float10 fVar12;
  float10 fVar13;
  float10 fVar14;
  float10 fVar15;
  float10 fVar16;
  float fVar17;
  float *local_a4;
  float local_74 [5];
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
  undefined4 uStack_30;
  undefined4 uStack_2c;
  undefined4 uStack_28;
  void *pvStack_20;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 local_14;
  
                    /* Creates a generated 40x20 mesh grid with triangle indices, stores it in
                       AppPhysics::CollisionData, creates a Bullet motion state and rigid body for
                       the mesh, and links the body back to the wrapper. */
  local_14 = 0xffffffff;
  puStack_18 = &LAB_01630618;
  local_1c = ExceptionList;
  flagB_ = (byte)DAT_01b839d8 ^ (byte)&stack0xffffff40;
  ExceptionList = &local_1c;
  local_a4 = Mem_Alloc(0x2580);
  local_14 = 0;
  if (local_a4 == (float *)0x0) {
    local_a4 = (float *)0x0;
  }
  else {
    _vector_constructor_iterator_(local_a4,0xc,800,FUN_0076c770);
  }
  local_14 = 0xffffffff;
  pvVar6 = Mem_Alloc(0x22bc);
  fVar4 = DAT_0187c5bc;
  fVar3 = DAT_017ed82c;
  fVar2 = _DAT_017ed7e4;
  fVar1 = DAT_017eb904;
  fVar12 = (float10)DAT_017ed82c;
  fVar13 = (float10)_DAT_0187c5c4;
  fVar14 = (float10)_DAT_0187c5c0;
  iVar10 = 0;
  pfVar11 = local_a4;
  do {
    iVar9 = 0;
    pfVar7 = pfVar11;
    do {
      if (iVar10 < 3) {
        *pfVar7 = fVar4;
        fVar17 = ((float)iVar9 - fVar1) * fVar3;
        pfVar7[1] = fVar3 - ((float)iVar10 - fVar2) * fVar3;
      }
      else if (iVar10 < 9) {
        fVar15 = (float10)(iVar10 + -3) * fVar13;
        fVar17 = ((float)iVar9 - fVar1) * fVar3;
        fVar16 = (float10)fsin(fVar15);
        fVar15 = (float10)fcos(fVar15);
        *pfVar7 = (float)(fVar14 - fVar15 * fVar12);
        pfVar7[1] = (float)((fVar16 + (float10)1) * fVar12);
        local_74[0] = fVar17;
      }
      else {
        *pfVar7 = ((float)iVar10 - fVar3) * fVar3;
        fVar17 = ((float)iVar9 - fVar1) * fVar3;
        pfVar7[1] = 0.0;
      }
      pfVar7[2] = fVar17;
      iVar9 = iVar9 + 1;
      pfVar7 = pfVar7 + 0x78;
    } while (iVar9 < 0x14);
    iVar10 = iVar10 + 1;
    pfVar11 = pfVar11 + 3;
  } while (iVar10 < 0x28);
  c = (void *)0x0;
  iVar10 = 0;
  do {
    iVar9 = 0;
    do {
      sVar5 = (short)iVar10 + (short)iVar9 * 0x28;
      *(short *)((int)pvVar6 + (int)c * 2) = sVar5;
      *(short *)((int)pvVar6 + ((int)c + 1) * 2) = sVar5 + 1;
      *(short *)((int)pvVar6 + ((int)c + 2) * 2) = sVar5 + 0x29;
      *(short *)((int)pvVar6 + ((int)c + 3) * 2) = sVar5;
      *(short *)((int)pvVar6 + ((int)c + 4) * 2) = sVar5 + 0x29;
      *(short *)((int)pvVar6 + ((int)c + 5) * 2) = sVar5 + 0x28;
      iVar9 = iVar9 + 1;
      c = (void *)((int)c + 6);
    } while (iVar9 < 0x13);
    iVar10 = iVar10 + 1;
  } while (iVar10 < 0x27);
  this_00 = Mem_Alloc(0x10);
  if (this_00 == (undefined4 *)0x0) {
    this_00 = (undefined4 *)0x0;
  }
  else {
    *this_00 = AppPhysics::CollisionData::vftable;
    this_00[1] = 0;
    this_00[2] = 0;
    *(undefined1 *)(this_00 + 3) = 0;
    *(undefined1 *)((int)this_00 + 0xd) = 0;
  }
  local_14 = 0xffffffff;
  *(undefined4 **)((int)this + 0x10) = this_00;
  AppPhysics_MeshData_setGeometry
            (this_00,local_a4,(void *)0x320,pvVar6,c,(void *)0x0,false,(bool)flagB_);
  uVar8 = (**(code **)(**(int **)(*(int *)((int)this + 0x10) + 4) + 4))(0);
  local_74[4] = (float)_DAT_0175b420;
  *(undefined4 *)((int)this + 0xb0) = uVar8;
  uStack_50 = local_74[4];
  uStack_3c = local_74[4];
  uStack_34 = 0;
  uStack_60 = 0;
  uStack_5c = 0;
  uStack_58 = 0;
  uStack_54 = 0;
  uStack_4c = 0;
  uStack_48 = 0;
  uStack_44 = 0;
  uStack_40 = 0;
  uStack_38 = 0;
  uStack_30 = DAT_0187c5b8;
  uStack_2c = 0;
  uStack_28 = 0;
  local_74[0] = 0.0;
  local_74[1] = 0.0;
  local_74[2] = 0.0;
  local_74[3] = 0.0;
  pvVar6 = Mem_Alloc(0xe0);
  puStack_18 = (undefined1 *)0x2;
  if (pvVar6 == (void *)0x0) {
    uVar8 = 0;
  }
  else {
    uVar8 = FUN_00fd2330();
    uVar8 = FUN_00fe1080(local_74 + 4,uVar8);
  }
  puStack_18 = (undefined1 *)0xffffffff;
  *(undefined4 *)((int)this + 0x104) = uVar8;
  iVar10 = FUN_01160bf0(0x2c0,0x10);
  puStack_18 = (undefined1 *)0x3;
  if (iVar10 == 0) {
    iVar10 = 0;
  }
  else {
    iVar10 = FUN_01183af0(0,*(undefined4 *)((int)this + 0x104),*(undefined4 *)((int)this + 0xb0),
                          local_74);
  }
  *(int *)((int)this + 0x100) = iVar10;
  *(void **)(iVar10 + 0xf8) = this;
  *(undefined1 *)((int)this + 0x150) = 0;
  ExceptionList = pvStack_20;
  return;
}

