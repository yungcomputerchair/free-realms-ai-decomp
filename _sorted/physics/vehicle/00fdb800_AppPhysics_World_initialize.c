// addr: 0x00fdb800
// name: AppPhysics_World_initialize
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void AppPhysics_World_initialize(void * this) */

void __fastcall AppPhysics_World_initialize(void *this)

{
  uint uVar1;
  int iVar2;
  undefined4 uVar3;
  void *pvVar4;
  int *piVar5;
  undefined4 *puStack_2c;
  undefined4 uStack_28;
  undefined4 uStack_24;
  undefined4 uStack_20;
  undefined4 uStack_1c;
  void *pvStack_18;
  undefined4 uStack_14;
  undefined4 uStack_10;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Initializes the AppPhysics world by allocating Bullet pools/configuration,
                       dispatcher, broadphase, ghost-pair callback, constraint solver, discrete
                       dynamics world, and a default unit sphere shape. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0162f9c0;
  local_c = ExceptionList;
  uVar1 = DAT_01b839d8 ^ (uint)&stack0xffffffbc;
  ExceptionList = &local_c;
  *(uint *)((int)this + 0x30) = *(uint *)((int)this + 0x30) | 8;
  iVar2 = FUN_01160bf0(0x14,0x10,uVar1);
  uStack_4 = 0;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00fd01b0(0x500,0x800);
  }
  uStack_4 = 0xffffffff;
  *(undefined4 *)((int)this + 0x10) = uVar3;
  iVar2 = FUN_01160bf0(0x14,0x10,uVar1);
  uStack_4 = 1;
  if (iVar2 == 0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00fd01b0(0x60,0x800);
  }
  uStack_4 = 0xffffffff;
  *(undefined4 *)((int)this + 0x14) = uVar3;
  puStack_2c = (undefined4 *)FUN_01160bf0(0x14,0x10,uVar1);
  uStack_4 = 2;
  if (puStack_2c == (undefined4 *)0x0) {
    puStack_2c = (undefined4 *)0x0;
  }
  else {
    puStack_2c[1] = 0;
    puStack_2c[3] = 0;
    *(undefined1 *)(puStack_2c + 4) = 0;
    *puStack_2c = 0;
    puStack_2c[2] = 0;
    uVar3 = FUN_01160bf0(0x400,0x10);
    *puStack_2c = uVar3;
    puStack_2c[1] = 0x400;
  }
  uStack_4 = 0xffffffff;
  uStack_24 = *(undefined4 *)((int)this + 0x14);
  uStack_28 = *(undefined4 *)((int)this + 0x10);
  *(undefined4 **)((int)this + 0xc) = puStack_2c;
  uStack_20 = 0x1000;
  pvStack_18 = (void *)0x0;
  uStack_14 = 0;
  uStack_10 = 1;
  uStack_1c = 0x60;
  pvVar4 = Mem_Alloc(0x58);
  uStack_4 = 3;
  if (pvVar4 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0112c0d0(&puStack_2c);
  }
  uStack_4 = 0xffffffff;
  *(undefined4 *)((int)this + 0x18) = uVar3;
  pvVar4 = Mem_Alloc(0x1520);
  uStack_4 = 4;
  if (pvVar4 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0112b410(*(undefined4 *)((int)this + 0x18));
  }
  uStack_4 = 0xffffffff;
  *(undefined4 *)((int)this + 0x24) = uVar3;
  pvVar4 = Mem_Alloc(0x9c);
  uStack_4 = 5;
  if (pvVar4 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_01128850(0);
  }
  uStack_4 = 0xffffffff;
  *(undefined4 *)((int)this + 0x1c) = uVar3;
  pvVar4 = Mem_Alloc(4);
  uStack_4 = 6;
  if (pvVar4 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_00fd3b20();
  }
  uStack_4 = 0xffffffff;
  *(undefined4 *)((int)this + 0x20) = uVar3;
  piVar5 = (int *)(**(code **)(**(int **)((int)this + 0x1c) + 0x24))();
  (**(code **)(*piVar5 + 0x38))(*(undefined4 *)((int)this + 0x20));
  pvVar4 = Mem_Alloc(0x80);
  puStack_8 = (undefined1 *)0x7;
  if (pvVar4 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0117f570();
  }
  puStack_8 = (undefined1 *)0xffffffff;
  *(undefined4 *)((int)this + 0x28) = uVar3;
  pvVar4 = Mem_Alloc(0x110);
  puStack_8 = (undefined1 *)0x8;
  if (pvVar4 == (void *)0x0) {
    uVar3 = 0;
  }
  else {
    uVar3 = FUN_0117a710(*(undefined4 *)((int)this + 0x24),*(undefined4 *)((int)this + 0x1c),
                         *(undefined4 *)((int)this + 0x28),*(undefined4 *)((int)this + 0x18));
  }
  puStack_8 = (undefined1 *)0xffffffff;
  *(undefined4 *)((int)this + 8) = uVar3;
  iVar2 = FUN_01160bf0(0x40,0x10);
  puStack_8 = (undefined1 *)0x9;
  if (iVar2 == 0) {
    piVar5 = (int *)0x0;
  }
  else {
    piVar5 = (int *)FUN_00fcbe20(0x3f800000);
  }
  uVar3 = _DAT_0181c234;
  puStack_8 = (undefined1 *)0xffffffff;
  *(int **)((int)this + 0x2c) = piVar5;
  (**(code **)(*piVar5 + 0x24))(uVar3);
  iVar2 = *(int *)((int)this + 8);
  *(undefined1 **)(iVar2 + 0x58) = &LAB_00fdb7b0;
  *(undefined4 *)(iVar2 + 0x60) = 0;
  DAT_01cba1e0 = &LAB_00fd0310;
  *(undefined ***)(*(int *)((int)this + 8) + 0x30) = &PTR_vftable_01b99910;
  (**(code **)(**(int **)((int)this + 8) + 8))(&PTR_vftable_01b99910);
  _DAT_01b99914 = *(undefined4 *)((int)this + 0x30);
  ExceptionList = pvStack_18;
  return;
}

