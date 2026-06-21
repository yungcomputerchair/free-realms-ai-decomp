// addr: 0x00cb9b00
// name: HousePiece_buildPhysics
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void HousePiece_buildPhysics(void * this) */

void __fastcall HousePiece_buildPhysics(void *this)

{
  int iVar1;
  void *pvVar2;
  undefined4 uVar3;
  float *bounds;
  undefined4 uStack_40;
  undefined4 uStack_3c;
  undefined4 uStack_38;
  undefined4 uStack_34;
  void *local_1c;
  undefined1 *puStack_18;
  int iStack_14;
  
                    /* Ensures a HousePiece has collision physics: obtains its actor/object, creates
                       a BoxData shape from existing bounds or defaults, creates the AppPhysics
                       body, then finalizes the object physics. */
  iStack_14 = 0xffffffff;
  puStack_18 = &LAB_0160ab57;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  iVar1 = (**(code **)(*(int *)this + 0x24))(DAT_01b839d8 ^ (uint)&stack0xffffffa0);
  if (iVar1 != 0) {
    if (*(int *)((int)this + 0x104) == 0) {
      FUN_0076c530(0);
      if (*(int *)(iVar1 + 0x29c) == 0) {
        pvVar2 = Mem_Alloc(0x10);
        iStack_14 = 2;
        if (pvVar2 == (void *)0x0) {
          uVar3 = 0;
        }
        else {
          pvVar2 = Mem_Alloc(0x20);
          iStack_14._0_1_ = 3;
          if (pvVar2 == (void *)0x0) {
            pvVar2 = (void *)0x0;
          }
          else {
            bounds = (float *)FUN_00770410(&uStack_40);
            pvVar2 = AppPhysics_BoxData_ctorFromBounds(pvVar2,bounds);
          }
          iStack_14 = CONCAT31(iStack_14._1_3_,2);
          uVar3 = CollisionData_sub_00fdebc0(pvVar2,1);
        }
      }
      else {
        pvVar2 = Mem_Alloc(0x10);
        uVar3 = 0;
        iStack_14 = 0;
        if (pvVar2 != (void *)0x0) {
          pvVar2 = Mem_Alloc(0x20);
          iStack_14._0_1_ = 1;
          if (pvVar2 == (void *)0x0) {
            iStack_14 = (uint)iStack_14._1_3_ << 8;
            uVar3 = CollisionData_sub_00fdebc0(0,1);
          }
          else {
            pvVar2 = AppPhysics_BoxData_ctorFromBounds
                               (pvVar2,(float *)(*(int *)(iVar1 + 0x29c) + 0xc0));
            iStack_14 = (uint)iStack_14._1_3_ << 8;
            uVar3 = CollisionData_sub_00fdebc0(pvVar2,1);
          }
        }
      }
      iStack_14 = 0xffffffff;
      *(undefined4 *)((int)this + 0x100) = uVar3;
      pvVar2 = Mem_Alloc(0x100);
      iStack_14 = 4;
      if (pvVar2 == (void *)0x0) {
        uVar3 = 0;
      }
      else {
        uStack_40 = _DAT_0175b420;
        uStack_3c = _DAT_0175b420;
        uStack_38 = _DAT_0175b420;
        uStack_34 = _DAT_0175b420;
        uVar3 = FUN_00fdd1f0(*(undefined4 *)((int)this + 0x100),2,3,iVar1,0xffffffff,&DAT_01bc2660,
                             &uStack_40,0);
      }
      iStack_14 = 0xffffffff;
      *(undefined4 *)((int)this + 0x104) = uVar3;
    }
    FUN_00cb9450(iVar1);
  }
  ExceptionList = local_1c;
  return;
}

