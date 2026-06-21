// addr: 0x00fde2d0
// name: AppPhysics_SphereData_ctor
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AppPhysics_SphereData_ctor(void * this, float radius_) */

void * __thiscall AppPhysics_SphereData_ctor(void *this,float radius_)

{
                    /* Constructs AppPhysics::SphereData by installing ShapeData then SphereData
                       vtables, setting shape type 1, and storing the radius/size value. */
  *(undefined ***)this = AppPhysics::ShapeData::vftable;
  *(undefined4 *)((int)this + 4) = 1;
  *(undefined ***)this = AppPhysics::SphereData::vftable;
  *(float *)((int)this + 8) = radius_;
  return this;
}

