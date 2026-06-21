// addr: 0x00ff9db0
// name: AppPhysics_ModifiedBtVehicle_ctor
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AppPhysics_ModifiedBtVehicle_ctor(void * this, void * tuning, void *
   chassis, void * raycaster) */

void * __thiscall
AppPhysics_ModifiedBtVehicle_ctor(void *this,void *tuning,void *chassis,void *raycaster)

{
  undefined4 uVar1;
  
                    /* Constructs AppPhysics::ModifiedBtVehicle by installing btActionInterface then
                       ModifiedBtVehicle vtables and initializing wheel arrays, raycaster/chassis
                       pointers, and default index fields. */
  *(undefined ***)this = btActionInterface::vftable;
  *(undefined ***)this = AppPhysics::ModifiedBtVehicle::vftable;
  *(undefined1 *)((int)this + 0x14) = 1;
  *(undefined4 *)((int)this + 0x10) = 0;
  *(undefined4 *)((int)this + 8) = 0;
  *(undefined4 *)((int)this + 0xc) = 0;
  *(undefined1 *)((int)this + 0x28) = 1;
  *(undefined4 *)((int)this + 0x24) = 0;
  *(undefined4 *)((int)this + 0x1c) = 0;
  *(undefined4 *)((int)this + 0x20) = 0;
  *(undefined1 *)((int)this + 0x3c) = 1;
  *(undefined4 *)((int)this + 0x38) = 0;
  *(undefined4 *)((int)this + 0x30) = 0;
  *(undefined4 *)((int)this + 0x34) = 0;
  *(undefined1 *)((int)this + 0x50) = 1;
  *(undefined4 *)((int)this + 0x4c) = 0;
  *(undefined4 *)((int)this + 0x44) = 0;
  *(undefined4 *)((int)this + 0x48) = 0;
  uVar1 = DAT_01762a34;
  *(void **)((int)this + 0x5c) = raycaster;
  *(undefined4 *)((int)this + 0x60) = 0;
  *(undefined4 *)((int)this + 0xa0) = 0;
  *(undefined4 *)((int)this + 0xa4) = 0;
  *(undefined4 *)((int)this + 0xa8) = 0;
  *(undefined4 *)((int)this + 0xac) = 0;
  *(undefined4 *)((int)this + 0xb0) = 0;
  *(undefined4 *)((int)this + 0xb4) = 0;
  *(undefined4 *)((int)this + 0xb8) = 0;
  *(undefined4 *)((int)this + 0xbc) = 0;
  *(undefined4 *)((int)this + 0xc0) = 0;
  *(undefined4 *)((int)this + 0xc4) = 0;
  *(undefined4 *)((int)this + 200) = 0;
  *(undefined4 *)((int)this + 0xcc) = 0;
  *(undefined1 *)((int)this + 0xd2) = 0;
  *(undefined1 *)((int)this + 0xd3) = 0;
  *(undefined1 *)((int)this + 0xd4) = 1;
  *(undefined4 *)((int)this + 0x100) = uVar1;
  *(undefined1 *)((int)this + 0x128) = 1;
  *(undefined4 *)((int)this + 0x124) = 0;
  *(undefined4 *)((int)this + 0x11c) = 0;
  *(undefined4 *)((int)this + 0x120) = 0;
  *(void **)((int)this + 0x6c) = chassis;
  *(undefined4 *)((int)this + 0x70) = 0;
  *(undefined4 *)((int)this + 0x74) = 1;
  *(undefined4 *)((int)this + 0x78) = 2;
  *(undefined4 *)((int)this + 0x68) = 0;
  *(undefined4 *)((int)this + 100) = 0;
  *(undefined4 *)((int)this + 0x110) = 0;
  return this;
}

