// addr: 0x01087790
// name: AppPhysics_ShipPhysicsOwner_recreateShipPhysics
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void AppPhysics_ShipPhysicsOwner_recreateShipPhysics(void * this, void * arg2,
   void * shipData, void * transform) */

void __thiscall
AppPhysics_ShipPhysicsOwner_recreateShipPhysics
          (void *this,void *arg2,void *shipData,void *transform)

{
  void *pvVar1;
  void *this_00;
  void *local_c;
  undefined1 *puStack_8;
  undefined4 uStack_4;
  
                    /* Destroys any existing ShipPhysics object held at offset 0x14, obtains an
                       owner/context value by vcall, allocates a new ShipPhysics object, and stores
                       it back. */
  uStack_4 = 0xffffffff;
  puStack_8 = &LAB_0164193b;
  local_c = ExceptionList;
  ExceptionList = &local_c;
  if (*(undefined4 **)((int)this + 0x14) != (undefined4 *)0x0) {
    (**(code **)**(undefined4 **)((int)this + 0x14))(1,DAT_01b839d8 ^ (uint)&stack0xffffffe8);
    *(undefined4 *)((int)this + 0x14) = 0;
  }
  pvVar1 = (void *)(**(code **)(*(int *)this + 0xc))();
  this_00 = Mem_Alloc(0x310);
  uStack_4 = 0;
  if (this_00 == (void *)0x0) {
    pvVar1 = (void *)0x0;
  }
  else {
    pvVar1 = AppPhysics_ShipPhysics_ctor(this_00,arg2,shipData,transform,pvVar1,this);
  }
  *(void **)((int)this + 0x14) = pvVar1;
  ExceptionList = local_c;
  return;
}

