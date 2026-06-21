// addr: 0x00fde200
// name: AppPhysics_BoxData_ctor
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* Setting prototype: void * AppPhysics_BoxData_ctor(void * this, float * halfExtents) */

void * __thiscall AppPhysics_BoxData_ctor(void *this,float *halfExtents)

{
                    /* Constructs AppPhysics::BoxData by installing ShapeData then BoxData vtables,
                       setting shape type 2, and copying four words of box data. */
  *(undefined ***)this = AppPhysics::ShapeData::vftable;
  *(undefined4 *)((int)this + 4) = 2;
  *(undefined ***)this = AppPhysics::BoxData::vftable;
  *(float *)((int)this + 0x10) = *halfExtents;
  *(float *)((int)this + 0x14) = halfExtents[1];
  *(float *)((int)this + 0x18) = halfExtents[2];
  *(float *)((int)this + 0x1c) = halfExtents[3];
  return this;
}

