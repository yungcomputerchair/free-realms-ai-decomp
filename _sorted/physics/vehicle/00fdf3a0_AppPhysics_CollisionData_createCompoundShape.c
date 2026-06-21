// addr: 0x00fdf3a0
// name: AppPhysics_CollisionData_createCompoundShape
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AppPhysics_CollisionData_createCompoundShape(void * collisionData, void
   * context) */

void * __thiscall
AppPhysics_CollisionData_createCompoundShape(void *this,void *collisionData,void *context)

{
  undefined4 *puVar1;
  int iVar2;
  void *pvVar3;
  undefined4 uVar4;
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
  undefined4 uStack_24;
  void *local_1c;
  undefined1 *puStack_18;
  undefined4 uStack_14;
  
                    /* Builds a Bullet compound shape from a linked list of child collision records,
                       converting each child transform and adding the child shape to a new
                       btCompoundShape. */
  uStack_14 = 0xffffffff;
  puStack_18 = &LAB_0163032b;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  iVar2 = FUN_01160bf0(0x60,0x10,DAT_01b839d8 ^ (uint)&stack0xffffff90);
  uStack_14 = 0;
  if (iVar2 == 0) {
    pvVar3 = (void *)0x0;
  }
  else {
    pvVar3 = (void *)FUN_0113cbb0(1);
  }
  uStack_14 = 0xffffffff;
  for (puVar1 = *(undefined4 **)((int)this + 0xc); puVar1 != (undefined4 *)0x0;
      puVar1 = (undefined4 *)puVar1[0x14]) {
    uStack_60 = puVar1[4];
    uStack_5c = puVar1[8];
    uStack_58 = puVar1[0xc];
    uStack_54 = 0;
    uStack_50 = puVar1[5];
    uStack_4c = puVar1[9];
    uStack_48 = puVar1[0xd];
    uStack_44 = 0;
    uStack_40 = puVar1[6];
    uStack_3c = puVar1[10];
    uStack_38 = puVar1[0xe];
    uStack_34 = 0;
    uStack_30 = puVar1[0x10];
    uStack_2c = puVar1[0x11];
    uStack_28 = puVar1[0x12];
    uStack_24 = 0;
    uVar4 = (**(code **)(*(int *)*puVar1 + 4))(collisionData);
    FUN_0113cda0(&uStack_60,uVar4);
  }
  ExceptionList = local_1c;
  return pvVar3;
}

