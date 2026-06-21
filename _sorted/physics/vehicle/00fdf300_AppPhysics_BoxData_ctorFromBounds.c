// addr: 0x00fdf300
// name: AppPhysics_BoxData_ctorFromBounds
// subsystem: common/physics/vehicle
// Decompiled pseudo-C from FreeRealms.exe (Ghidra). First-party.


/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */
/* Setting prototype: void * AppPhysics_BoxData_ctorFromBounds(void * this, float * bounds) */

void * __thiscall AppPhysics_BoxData_ctorFromBounds(void *this,float *bounds)

{
  float fVar1;
  float fVar2;
  float fVar3;
  
                    /* Constructs BoxData from min/max bounds by taking scaled extents on each axis
                       and adding global padding/scale constants. Used when creating collision
                       geometry from house/object bounds. */
  *(undefined ***)this = AppPhysics::ShapeData::vftable;
  *(undefined4 *)((int)this + 4) = 2;
  *(undefined ***)this = AppPhysics::BoxData::vftable;
  fVar1 = DAT_017649d4 * (bounds[5] - bounds[1]) * fRam01cb54a4 + fRam01cb54f4;
  fVar2 = DAT_017649d4 * (bounds[6] - bounds[2]) * fRam01cb54a8 + fRam01cb54f8;
  fVar3 = DAT_017649d4 * (bounds[7] - bounds[3]) * fRam01cb54ac + fRam01cb54fc;
  *(float *)((int)this + 0x10) =
       DAT_017649d4 * (bounds[4] - *bounds) * _DAT_01cb54a0 + _DAT_01cb54f0;
  *(float *)((int)this + 0x14) = fVar1;
  *(float *)((int)this + 0x18) = fVar2;
  *(float *)((int)this + 0x1c) = fVar3;
  return this;
}

