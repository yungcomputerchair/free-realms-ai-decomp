// addr: 0x007744f0
// name: AppPhysics_Object_setCollisionShapeId
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void AppPhysics_Object_setCollisionShapeId(void * this, int shapeId_, bool
   createDefaultBox_) */

void __thiscall
AppPhysics_Object_setCollisionShapeId(void *this,int shapeId_,bool createDefaultBox_)

{
  void *pvVar1;
  undefined4 uVar2;
  float local_30;
  float local_2c;
  float local_28;
  undefined4 local_24;
  void *local_1c;
  undefined1 *puStack_18;
  int local_14;
  
                    /* Stores a collision shape/resource ID at offset 0x568 and, when requested and
                       no existing shape is present, creates a default unit BoxData collision object
                       and assigns collision category 4. */
  local_14 = 0xffffffff;
  puStack_18 = &LAB_01557686;
  local_1c = ExceptionList;
  ExceptionList = &local_1c;
  *(int *)((int)this + 0x568) = shapeId_;
  if ((createDefaultBox_) && (*(int *)((int)this + 0x290) == 0)) {
    pvVar1 = Mem_Alloc(0x10);
    local_14 = 0;
    if (pvVar1 == (void *)0x0) {
      uVar2 = 0;
    }
    else {
      pvVar1 = Mem_Alloc(0x20);
      local_14._0_1_ = 1;
      if (pvVar1 == (void *)0x0) {
        local_14 = (uint)local_14._1_3_ << 8;
        uVar2 = CollisionData_sub_00fdebc0(0,1);
      }
      else {
        local_30 = DAT_017649d4;
        local_2c = DAT_017649d4;
        local_28 = DAT_017649d4;
        local_24 = _DAT_0175b420;
        pvVar1 = AppPhysics_BoxData_ctor(pvVar1,&local_30);
        local_14 = (uint)local_14._1_3_ << 8;
        uVar2 = CollisionData_sub_00fdebc0(pvVar1,1);
      }
    }
    local_14 = 0xffffffff;
    *(undefined4 *)((int)this + 0x294) = uVar2;
    FUN_00773e30(uVar2,4);
  }
  ExceptionList = local_1c;
  return;
}

